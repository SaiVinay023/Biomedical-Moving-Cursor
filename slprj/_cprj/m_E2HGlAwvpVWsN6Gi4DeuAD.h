#ifndef __E2HGlAwvpVWsN6Gi4DeuAD_h__
#define __E2HGlAwvpVWsN6Gi4DeuAD_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct {
  uint32_T f1[8];
} cell_wrap;

#endif                                 /*typedef_cell_wrap*/

#ifndef typedef_codertarget_internal_androidDataDisplay
#define typedef_codertarget_internal_androidDataDisplay

typedef struct {
  int32_T isInitialized;
  cell_wrap inputVarSize[1];
} codertarget_internal_androidDataDisplay;

#endif                                 /*typedef_codertarget_internal_androidDataDisplay*/

#ifndef typedef_InstanceStruct_E2HGlAwvpVWsN6Gi4DeuAD
#define typedef_InstanceStruct_E2HGlAwvpVWsN6Gi4DeuAD

typedef struct {
  SimStruct *S;
  codertarget_internal_androidDataDisplay sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real32_T *u0;
} InstanceStruct_E2HGlAwvpVWsN6Gi4DeuAD;

#endif                                 /*typedef_InstanceStruct_E2HGlAwvpVWsN6Gi4DeuAD*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_E2HGlAwvpVWsN6Gi4DeuAD(SimStruct *S, int_T method,
  void* data);

#endif
