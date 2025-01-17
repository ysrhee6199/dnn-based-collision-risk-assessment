//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cu
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 31-Jul-2024 04:58:22
//

/*************************************************************************/
/* This automatically generated example CUDA main file shows how to call */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include Files
#include "main.h"
#include "Predict.h"
#include "Predict_terminate.h"

// Function Declarations
static void argInit_201x101x3_uint8_T(unsigned char result[60903]);

static unsigned char argInit_uint8_T();

// Function Definitions
//
// Arguments    : unsigned char result[60903]
// Return Type  : void
//
static void argInit_201x101x3_uint8_T(unsigned char result[60903])
{
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 201; idx0++) {
    for (int idx1{0}; idx1 < 101; idx1++) {
      for (int idx2{0}; idx2 < 3; idx2++) {
        // Set the value of the array element.
        // Change this value to the value that the application requires.
        result[(idx0 + 201 * idx1) + 20301 * idx2] = argInit_uint8_T();
      }
    }
  }
}

//
// Arguments    : void
// Return Type  : unsigned char
//
static unsigned char argInit_uint8_T()
{
  return 0U;
}

//
// Arguments    : int argc
//                char **argv
// Return Type  : int
//
int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_Predict();
  // Terminate the application.
  // You do not need to do this more than one time.
  Predict_terminate();
  return 0;
}

//
// Arguments    : void
// Return Type  : void
//
void main_Predict()
{
  float out[13];
  unsigned char b[60903];
  // Initialize function 'Predict' input arguments.
  // Initialize function input argument 'in'.
  // Call the entry-point 'Predict'.
  argInit_201x101x3_uint8_T(b);
  Predict(b, out);
}

//
// File trailer for main.cu
//
// [EOF]
//
