/*
 * File: _coder_neuralNet_MS_api.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 19-Feb-2017 22:04:51
 */

#ifndef _CODER_NEURALNET_MS_API_H
#define _CODER_NEURALNET_MS_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_neuralNet_MS_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern real_T neuralNet_MS(real_T x1[10]);
extern void neuralNet_MS_api(const mxArray *prhs[1], const mxArray *plhs[1]);
extern void neuralNet_MS_atexit(void);
extern void neuralNet_MS_initialize(void);
extern void neuralNet_MS_terminate(void);
extern void neuralNet_MS_xil_terminate(void);

#endif

/*
 * File trailer for _coder_neuralNet_MS_api.h
 *
 * [EOF]
 */
