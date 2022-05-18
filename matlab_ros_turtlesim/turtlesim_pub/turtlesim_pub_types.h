//
// File: turtlesim_pub_types.h
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
#ifndef RTW_HEADER_turtlesim_pub_types_h_
#define RTW_HEADER_turtlesim_pub_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_turtlesim_pub_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_turtlesim_pub_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_turtlesim_pub_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_turtlesim_pub_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_turtlesim_pub_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_turtlesim_pub_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_turtlesim_pub_geometry_msgs_Vector3 Angular;
} SL_Bus_turtlesim_pub_geometry_msgs_Twist;

#endif

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

// Parameters (default storage)
typedef struct P_turtlesim_pub_T_ P_turtlesim_pub_T;

// Forward declaration for rtModel
typedef struct tag_RTM_turtlesim_pub_T RT_MODEL_turtlesim_pub_T;

#endif                                 // RTW_HEADER_turtlesim_pub_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
