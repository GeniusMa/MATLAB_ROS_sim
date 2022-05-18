//
// File: turtlesim_pub.h
//
// Code generated for Simulink model 'turtlesim_pub'.
//
// Model version                  : 1.1
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Wed May 18 13:43:23 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_turtlesim_pub_h_
#define RTW_HEADER_turtlesim_pub_h_
#include <stddef.h>
#include <string.h>
#ifndef turtlesim_pub_COMMON_INCLUDES_
# define turtlesim_pub_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // turtlesim_pub_COMMON_INCLUDES_

#include "turtlesim_pub_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
} DW_turtlesim_pub_T;

// Parameters (default storage)
struct P_turtlesim_pub_T_ {
  SL_Bus_turtlesim_pub_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S1>/Constant'

  real_T Constant_Value_a;             // Expression: 0.5
                                       //  Referenced by: '<Root>/Constant'

  real_T Constant1_Value;              // Expression: 0.5
                                       //  Referenced by: '<Root>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_turtlesim_pub_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_turtlesim_pub_T turtlesim_pub_P;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_turtlesim_pub_T turtlesim_pub_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void turtlesim_pub_initialize(void);
  extern void turtlesim_pub_step(void);
  extern void turtlesim_pub_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_turtlesim_pub_T *const turtlesim_pub_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'turtlesim_pub'
//  '<S1>'   : 'turtlesim_pub/Blank Message'
//  '<S2>'   : 'turtlesim_pub/Publish'

#endif                                 // RTW_HEADER_turtlesim_pub_h_

//
// File trailer for generated code.
//
// [EOF]
//
