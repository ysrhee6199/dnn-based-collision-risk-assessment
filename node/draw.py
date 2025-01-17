#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import numpy as np
import matplotlib.pyplot as plt
import cv2
from std_msgs.msg import UInt8MultiArray

def process_and_plot_data(data1):
    # 데이터 수신
    #data = np.frombuffer(data1.data, dtype=np.uint8)
    data = np.loadtxt("/home/avees/Downloads/Untitled.txt")  # Update with the correct path
    scene = 1

    # Ensure elements_per_scene is an integer
    height = 251
    width = 61
    channels = 18
    elements_per_scene = height * width * channels

    # Calculate the total number of elements to be used
    num_scenes = len(data) / elements_per_scene

    # Ensure the data size matches the expected size
    if int(num_scenes) != num_scenes:
        rospy.logerr('The data size does not match the expected size for the given dimensions.')
        return

    # Reshape the data to the correct dimensions
    image_uint8_convert = np.reshape(data, (int(num_scenes), height, width, channels), order='F')

    # Select the scene to display
    image_uint8_convert = image_uint8_convert[scene - 1]

    for j in range(1, 7):
        I_uint = image_uint8_convert[:, :, 3 * j - 3:3 * j].astype(np.uint8)

        J = cv2.resize(I_uint, None, fx=2, fy=2, interpolation=cv2.INTER_LINEAR)
        plt.figure()
        plt.imshow(cv2.cvtColor(I_uint, cv2.COLOR_BGR2RGB))

        plt.yticks([1, 126 / 2, 125, (251 + 125) / 2, 251], ['25', '12.5', '0', '-12.5', '-25'])
        plt.xticks([5, 22, 40, 57], ['5.25', '1.75', '-1.75', '-5.25'])

        if j == 1:
            plt.xlabel('Current')
        elif j == 2:
            plt.xlabel('ESR')
        elif j == 3:
            plt.xlabel('ESL')
        elif j == 4:
            plt.xlabel('ELCR')
        elif j == 5:
            plt.xlabel('ELCL')
        elif j == 6:
            plt.xlabel('ESS')

    # 예측 데이터 플로팅 (데이터 예측값은 ans.Prediction에서 제공됨)
    # ans.Prediction 데이터를 대체할 예측값을 생성 (임의의 데이터 사용)
    prediction = np.random.randint(5, 9, size=(100,))  # 임의의 예측 데이터 예시

    plt.figure()
    plt.plot(prediction)
    plt.yticks([5, 6, 7, 8], ['ELCL', 'ELCR', 'COL', 'Safe'])
    plt.ylabel('Strategy')
    plt.ylim([4.8, 8.2])
    plt.show()

def data_callback(msg):
    process_and_plot_data(msg)

def main():
    rospy.init_node('data_processing_node', anonymous=True)
    rospy.loginfo('Data Processing Node Started')

    # Subscriber to receive data from another node
    rospy.Subscriber('/data_topic', UInt8MultiArray, data_callback)

    rospy.spin()

if __name__ == '__main__':
    main()

