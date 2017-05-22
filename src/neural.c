/*
  File: example.c
  Exemplo de como utilizar as bibliotecas libneuralNet_*.so
*/

//================//
//=== INCLUDES ===//
//================//

#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "rt_nonfinite.h"
#include "rtwtypes.h"

#include "neuralNet_MR.h"
#include "neuralNet_MR_initialize.h"
#include "neuralNet_MR_terminate.h"
#include "neuralNet_MR_types.h"

#include "neuralNet_MS.h"
#include "neuralNet_MS_initialize.h"
#include "neuralNet_MS_terminate.h"
#include "neuralNet_MS_types.h"

#include "neuralNet_S.h"
#include "neuralNet_S_initialize.h"
#include "neuralNet_S_terminate.h"
#include "neuralNet_S_types.h"

//==================//
//=== MR EXAMPLE ===//
//==================//

double main_neuralNet_MR()
{
  double DAMF = 1;
  double Tx_20d = 27.51, Tn_20d = 15.995, P_20d = 135.9;
  double Tx_10d = 29.96, Tn_10d = 16.79,  P_10d = 6;
  double Tx_5d  = 27.1,  Tn_5d  = 17.46,  P_5d  = 26.9;
  double input[] = {DAMF, Tx_20d, Tn_20d, P_20d, Tx_10d, Tn_10d, P_10d, Tx_5d, Tn_5d, P_5d};
  return neuralNet_MR(input);
}

//==================//
//=== MS EXAMPLE ===//
//==================//

double main_neuralNet_MS()
{
  double DAMF = 1;
  double Tx_20d = 27.51, Tn_20d = 15.995, P_20d = 135.9;
  double Tx_10d = 29.96, Tn_10d = 16.79,  P_10d = 6;
  double Tx_5d  = 27.1,  Tn_5d  = 17.46,  P_5d  = 26.9;
  double input[] = {DAMF, Tx_20d, Tn_20d, P_20d, Tx_10d, Tn_10d, P_10d, Tx_5d, Tn_5d, P_5d};
  return neuralNet_MS(input);
}

//=================//
//=== S EXAMPLE ===//
//=================//

double main_neuralNet_S()
{
  double DAMF = 1;
  double Tx_20d = 27.51, Tn_20d = 15.995, P_20d = 135.9;
  double Tx_10d = 29.96, Tn_10d = 16.79,  P_10d = 6;
  double Tx_5d  = 27.1,  Tn_5d  = 17.46,  P_5d  = 26.9;
  double input[] = {DAMF, Tx_20d, Tn_20d, P_20d, Tx_10d, Tn_10d, P_10d, Tx_5d, Tn_5d, P_5d};
  return neuralNet_S(input);
}

int neural(int *network, double *DAMF, double *Tx_20d, double * Tn_20d, double * P_20d,
           double *Tx_10d, double *Tn_10d, double *P_10d,
           double *Tx_5d, double *Tn_5d, double *P_5d, double *result)
{
  double input[] = {*DAMF, *Tx_20d, *Tn_20d, *P_20d, *Tx_10d, *Tn_10d, *P_10d, *Tx_5d, *Tn_5d, *P_5d};

  double r;
  switch (*network) {
  case 1:
    // MR EXAMPLE
    neuralNet_MR_initialize();
    r = neuralNet_MR(input);
    neuralNet_MR_terminate();
    break;
  case 2:
    // MS EXAMPLE
    neuralNet_MS_initialize();
    r = neuralNet_MS(input);
    neuralNet_MS_terminate();
    break;
  case 3 :
    // S EXAMPLE
    neuralNet_S_initialize();
    r = neuralNet_S(input);
    neuralNet_S_terminate();
    break;

  }

  *result = r;
  return 0;
}
