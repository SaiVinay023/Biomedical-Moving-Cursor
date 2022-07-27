#ifndef __fwk72YF0RlyFfLPfJ6qj3E_h__
#define __fwk72YF0RlyFfLPfJ6qj3E_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_codertarget_internal_androidAccelerometer
#define typedef_codertarget_internal_androidAccelerometer

typedef struct {
  int32_T isInitialized;
} codertarget_internal_androidAccelerometer;

#endif                                 /*typedef_codertarget_internal_androidAccelerometer*/

#ifndef typedef_InstanceStruct_fwk72YF0RlyFfLPfJ6qj3E
#define typedef_InstanceStruct_fwk72YF0RlyFfLPfJ6qj3E

typedef struct {
  SimStruct *S;
  codertarget_internal_androidAccelerometer sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real32_T *b_y0;
  real32_T *b_y1;
  real32_T *y2;
} InstanceStruct_fwk72YF0RlyFfLPfJ6qj3E;

#endif                                 /*typedef_InstanceStruct_fwk72YF0RlyFfLPfJ6qj3E*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_fwk72YF0RlyFfLPfJ6qj3E(SimStruct *S, int_T method,
  void* data);

#endif
