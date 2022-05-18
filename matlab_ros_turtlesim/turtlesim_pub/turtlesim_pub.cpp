//
// File: turtlesim_pub.cpp
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
#include "turtlesim_pub.h"
#include "turtlesim_pub_private.h"
#define turtlesim_pub_MessageQueueLen  (1)

// Block states (default storage)
DW_turtlesim_pub_T turtlesim_pub_DW;

// Real-time model
RT_MODEL_turtlesim_pub_T turtlesim_pub_M_;
RT_MODEL_turtlesim_pub_T *const turtlesim_pub_M = &turtlesim_pub_M_;

// Forward declaration for local functions
static void SystemProp_matlabCodegenSetAnyP(robotics_slros_internal_block_T *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabCodeg(robotics_slros_internal_block_T *obj);
static void SystemProp_matlabCodegenSetAnyP(robotics_slros_internal_block_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabCodeg(robotics_slros_internal_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
  }
}

// Model step function
void turtlesim_pub_step(void)
{
  SL_Bus_turtlesim_pub_geometry_msgs_Twist rtb_BusAssignment;

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<Root>/Constant1'
  //   Constant: '<S1>/Constant'

  rtb_BusAssignment = turtlesim_pub_P.Constant_Value;
  rtb_BusAssignment.Linear.X = turtlesim_pub_P.Constant_Value_a;
  rtb_BusAssignment.Angular.Z = turtlesim_pub_P.Constant1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_turtlesim_pub_1.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void turtlesim_pub_initialize(void)
{
  // Registration code

  // initialize error status
  rtmSetErrorStatus(turtlesim_pub_M, (NULL));

  // states (dwork)
  (void) memset((void *)&turtlesim_pub_DW, 0,
                sizeof(DW_turtlesim_pub_T));

  {
    static const char_T tmp[16] = { '/', 't', 'u', 'r', 't', 'l', 'e', '1', '/',
      'c', 'm', 'd', '_', 'v', 'e', 'l' };

    char_T tmp_0[17];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    turtlesim_pub_DW.obj.matlabCodegenIsDeleted = true;
    turtlesim_pub_DW.obj.isInitialized = 0;
    turtlesim_pub_DW.obj.matlabCodegenIsDeleted = false;
    turtlesim_pub_DW.obj.isSetupComplete = false;
    turtlesim_pub_DW.obj.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[16] = '\x00';
    Pub_turtlesim_pub_1.createPublisher(tmp_0, turtlesim_pub_MessageQueueLen);
    turtlesim_pub_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void turtlesim_pub_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&turtlesim_pub_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
