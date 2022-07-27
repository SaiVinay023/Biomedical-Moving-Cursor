#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                Medical3_cgxe
#include "simstruc.h"
#include "Medical3_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_Medical3_method_dispatcher(S, SS_CALL_MDL_START, NULL);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }
}

#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlInitializeConditions method directly.\n");
}

#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlUpdate method directly.\n");
}

static void mdlOutputs(SimStruct* S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlOutputs method directly.\n");
}

static void mdlTerminate(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlTerminate method directly.\n");
}

static void mdlInitializeSizes(SimStruct *S)
{
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
}

static mxArray* cgxe_get_supported_modules(void)
{
  mxArray* mxModules = mxCreateCellMatrix(4, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 422297439;
  checksumData[1] = 3261324001;
  checksumData[2] = 462684496;
  checksumData[3] = 1542195944;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 665599035;
  checksumData[1] = 476093358;
  checksumData[2] = 420912241;
  checksumData[3] = 2340152682;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1142964993;
  checksumData[1] = 1650078575;
  checksumData[2] = 2889647171;
  checksumData[3] = 1323483767;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1390266224;
  checksumData[1] = 1640015936;
  checksumData[2] = 2079457627;
  checksumData[3] = 3391124491;
  mxSetCell(mxModules, 3, mxChksum);
  return mxModules;
}

static int cgxe_process_get_checksums(int nlhs, mxArray* plhs[], int nrhs, const
  mxArray* prhs[])
{
  const char* checksumFields[] = { "modules", "model", "makefile", "target",
    "overall" };

  mxArray* mxChecksum = mxCreateStructMatrix(1, 1, 5, checksumFields);
  mxSetField(mxChecksum, 0, "modules", cgxe_get_supported_modules());

  {
    mxArray* mxModelChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxModelChksum);
    checksumData[0] = 925834150;
    checksumData[1] = 3221501570;
    checksumData[2] = 658427391;
    checksumData[3] = 4140238335;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 4204624257;
    checksumData[1] = 1709921502;
    checksumData[2] = 1284585380;
    checksumData[3] = 3587581743;
    mxSetField(mxChecksum, 0, "makefile", mxMakefileChksum);
  }

  {
    mxArray* mxTargetChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxTargetChksum);
    checksumData[0] = 0;
    checksumData[1] = 0;
    checksumData[2] = 0;
    checksumData[3] = 0;
    mxSetField(mxChecksum, 0, "target", mxTargetChksum);
  }

  {
    mxArray* mxOverallChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxOverallChksum);
    checksumData[0] = 3906768469;
    checksumData[1] = 1314948433;
    checksumData[2] = 4098039238;
    checksumData[3] = 3732842223;
    mxSetField(mxChecksum, 0, "overall", mxOverallChksum);
  }

  plhs[0] = mxChecksum;
  return 1;
}

static int cgxe_mex_unlock_call(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  while (mexIsLocked()) {
    mexUnlock();
  }

  return 1;
}

static SimStruct* cgxe_unpack_simstruct(const mxArray *mxS)
{
  uint32_T *uintPtr = (uint32_T*)malloc(sizeof(SimStruct*));
  int nEl = sizeof(SimStruct*)/sizeof(uint32_T);
  uint32_T *uintDataPtr = (uint32_T *)mxGetData(mxS);
  int el;
  SimStruct *S;
  for (el=0; el < nEl; el++) {
    uintPtr[el] = uintDataPtr[el];
  }

  memcpy(&S,uintPtr,sizeof(SimStruct*));
  free(uintPtr);
  return S;
}

static int cgxe_get_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_Medical3_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void *)
    (plhs));
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_set_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_Medical3_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void *)
    prhs[2]);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_get_BuildInfoUpdate(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "M840gKcpSYaimk92VkNFZD") == 0) {
    extern mxArray *cgxe_M840gKcpSYaimk92VkNFZD_BuildInfoUpdate(void);
    plhs[0] = cgxe_M840gKcpSYaimk92VkNFZD_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "vvvSErOHZga7mqpIKwA4cF") == 0) {
    extern mxArray *cgxe_vvvSErOHZga7mqpIKwA4cF_BuildInfoUpdate(void);
    plhs[0] = cgxe_vvvSErOHZga7mqpIKwA4cF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "E2HGlAwvpVWsN6Gi4DeuAD") == 0) {
    extern mxArray *cgxe_E2HGlAwvpVWsN6Gi4DeuAD_BuildInfoUpdate(void);
    plhs[0] = cgxe_E2HGlAwvpVWsN6Gi4DeuAD_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "fwk72YF0RlyFfLPfJ6qj3E") == 0) {
    extern mxArray *cgxe_fwk72YF0RlyFfLPfJ6qj3E_BuildInfoUpdate(void);
    plhs[0] = cgxe_fwk72YF0RlyFfLPfJ6qj3E_BuildInfoUpdate();
    return 1;
  }

  return 0;
}

static int cgxe_get_fallback_info(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "M840gKcpSYaimk92VkNFZD") == 0) {
    extern mxArray *cgxe_M840gKcpSYaimk92VkNFZD_fallback_info(void);
    plhs[0] = cgxe_M840gKcpSYaimk92VkNFZD_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "vvvSErOHZga7mqpIKwA4cF") == 0) {
    extern mxArray *cgxe_vvvSErOHZga7mqpIKwA4cF_fallback_info(void);
    plhs[0] = cgxe_vvvSErOHZga7mqpIKwA4cF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "E2HGlAwvpVWsN6Gi4DeuAD") == 0) {
    extern mxArray *cgxe_E2HGlAwvpVWsN6Gi4DeuAD_fallback_info(void);
    plhs[0] = cgxe_E2HGlAwvpVWsN6Gi4DeuAD_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "fwk72YF0RlyFfLPfJ6qj3E") == 0) {
    extern mxArray *cgxe_fwk72YF0RlyFfLPfJ6qj3E_fallback_info(void);
    plhs[0] = cgxe_fwk72YF0RlyFfLPfJ6qj3E_fallback_info();
    return 1;
  }

  return 0;
}

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

static int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray* plhs[], int nrhs,
  const mxArray* prhs[])
{
  char commandName[64];
  if (nrhs < 1 || !mxIsChar(prhs[0]))
    return 0;
  mxGetString(prhs[0], commandName, sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName, "get_checksums") == 0) {
    return cgxe_process_get_checksums(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_unlock") == 0) {
    return cgxe_mex_unlock_call(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_sim_state") == 0) {
    return cgxe_get_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "set_sim_state") == 0) {
    return cgxe_set_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_BuildInfoUpdate") == 0) {
    return cgxe_get_BuildInfoUpdate(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_fallback_info") == 0) {
    return cgxe_get_fallback_info(nlhs, plhs, nrhs, prhs);
  }

  return 0;
}

#include "simulink.c"
