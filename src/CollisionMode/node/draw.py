#!/usr/bin/env python
# -*- coding: utf-8 -*-
import rospy
import numpy as np
import cv2
from std_msgs.msg import UInt8MultiArray
import os
from datetime import datetime

class DataProcessingNode:
    def __init__(self):
        # Initialize the node
        rospy.init_node('data_processing_node', anonymous=True)
        rospy.loginfo('Data Processing Node Started')

        # Retrieve parameters
        self.display_video = rospy.get_param('~display_video', False)  # Default to False if not set

        # Create a subscriber
        rospy.Subscriber('/data_topic', UInt8MultiArray, self.data_callback)
        
        # Keep the node running
        rospy.spin()

    def process_and_plot_data(self, data1):
        # Retrieve the video parameter
        display_video = self.display_video

        # 데이터 수신
        data = np.frombuffer(data1.data, dtype=np.uint8)
        scene = 1
        height = 201
        width = 101
        channels = 3
        j = 1
        elements_per_scene = height * width * channels
        num_scenes = len(data) / elements_per_scene

        if int(num_scenes) != num_scenes:
            rospy.logerr('The data size does not match the expected size for the given dimensions.')
            return

        image_uint8_convert = np.reshape(data, (int(num_scenes), height, width, channels), order='F')
        image_uint8_convert = image_uint8_convert[scene - 1]


        I_uint = image_uint8_convert[:, :, 3 * j - 3:3 * j].astype(np.uint8)

        # Resize the image to a larger size
        scale_percent = 200
        width_resized = int(I_uint.shape[1] * scale_percent / 100)
        height_resized = int(I_uint.shape[0] * scale_percent / 100)
        dim = (width_resized, height_resized)

        resized_image = cv2.resize(I_uint, dim, interpolation=cv2.INTER_LINEAR)

        if display_video:
            cv2.imshow('Image Visualization', resized_image)
            cv2.waitKey(1)  # Adjust as necessary for smooth updates
        else:
	    now = datetime.now()
            current_time = now.strftime('%Y%m%d_%H%M%S') + '_{:03d}'.format(now.microsecond // 1000)
            folder_name = os.path.join('figure', current_time)

            # Create folder if it does not exist
            os.makedirs(folder_name)
            cv2.imwrite(os.path.join(folder_name, 'image_{}.png'.format(j)), I_uint)

    def data_callback(self, msg):
        self.process_and_plot_data(msg)

if __name__ == '__main__':
    DataProcessingNode()

