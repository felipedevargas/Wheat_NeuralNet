/*
 * File: neuralNet_MR.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 19-Feb-2017 22:04:01
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "neuralNet_MR.h"

/* Function Definitions */

/*
 * MYNEURALNETWORKFUNCTION neural network simulation function.
 *
 *  Generated by Neural Network Toolbox function genFunction, 19-Feb-2017 22:00:34.
 *
 *  [y1] = myNeuralNetworkFunction(x1) takes these arguments:
 *    x = 10xQ matrix, input #1
 *  and returns:
 *    y = 1xQ matrix, output #1
 *  where Q is the number of samples.
 * Arguments    : const double x1[10]
 * Return Type  : double
 */
double neuralNet_MR(const double x1[10])
{
  double xp1[10];
  int k;
  double av[10];
  static const double b[10] = { 1.0, 26.19, 15.25, 60.5, 25.5, 14.43, 6.0, 25.54,
    14.74, 0.0 };

  static const double b_b[10] = { 0.0512820512820513, 0.704225352112676,
    0.816326530612245, 0.00880281690140845, 0.448430493273543, 0.510204081632653,
    0.01318391562294, 0.371747211895911, 0.431034482758621, 0.0157977883096367 };

  double d0;
  double d1;
  int i0;
  static const double a[10] = { 0.48693446864701528, -0.36808468264431443,
    -0.2343412787754551, -0.3039953694301914, 0.26267477595416222,
    -0.83957789884047074, 0.079144748541316562, 0.1047088756725179,
    -0.30340120239491275, -0.43332051374234687 };

  static const double b_a[10] = { 2.3163110491431644, -2.059744251345057,
    -0.71554569352217934, -0.10272177867478369, 0.45876597713442274,
    -0.30304172312647881, 1.0576795247684114, -1.2404167830979258,
    1.5774931726376269, -2.3427222277028243 };

  static const double c_a[100] = { -1.6155163611642041, 1.8640042499224641,
    -2.0027914418227808, 1.041412049433136, -0.083305770789786335,
    -0.77759707706993275, 0.075176320249572964, -0.84663216614916992,
    0.37953438287465768, -0.865402208900898, -0.19642573246183914,
    -0.74885617380101865, -0.12932216791647697, -0.04578731283248165,
    0.080998707475034071, -0.032613254960254412, 0.067638669336928386,
    0.42682566541921657, -0.063915395985086859, -0.49437325697748752,
    0.093526999748374029, 0.16057989692364222, 0.21341477867189823,
    -0.82215828162090576, -0.39400303085875249, 1.876737189056781,
    -1.4911821940960721, -0.657590698347001, 1.3057432407730911,
    -0.27013745246050452, 1.304267987177699, 0.1559447195096742,
    -0.16429800462404631, -1.5821859247454386, -0.67451371982691122,
    1.1977727141033208, 0.52793280955871769, -0.46465321746947147,
    -0.75882956830815573, -0.35734210994415172, -0.612734582345932,
    -0.56796110557813473, 0.99312792197198019, 0.74281477428244091,
    0.78288370501732563, 0.44041945677307004, -0.3095044053065823,
    0.988449236254678, -0.32461006978044921, 0.30297867674836887,
    0.40796146241162323, 0.6580119267414769, 0.034143144051284824,
    -0.37756868587830422, -0.71718998955929691, -0.040360463768368174,
    0.25503122581338167, -0.96239483399944126, 0.37397167483911414,
    0.3922967920985021, 0.18297288808896359, -0.36773110741137843,
    -0.2324937041042778, -1.0330839824192548, -0.61081085134700852,
    0.71419824901342166, -0.29365259241080161, 0.61678560478197331,
    -0.87664852122934911, -0.099478784169803547, 0.49642053046634704,
    0.63670811342496236, -1.0056070196466247, 0.254645578130943,
    0.1869915423222987, 0.15740558759276749, 0.31772248820009891,
    1.3565293166318297, -0.59838540584552469, 0.54840484437688009,
    -0.45291080294124525, -0.39403824783130204, -1.2357881134088027,
    0.39861436628185076, -0.72551522473052943, -0.57003238955896918,
    0.63214047454607669, 0.81660824381803443, -0.21697577057756079,
    -0.52469817243442651, -0.58571474009910363, -0.8270753391144221,
    0.96342825954484668, -0.020106168766283128, -0.19540573784336496,
    1.6573713337411264, 0.22706238440264331, -0.079681840463741993,
    -0.8287004969387789, -0.3228021770184516 };

  /*  ===== NEURAL NETWORK CONSTANTS ===== */
  /*  Input 1 */
  /*  Layer 1 */
  /*  Layer 2 */
  /*  Output 1 */
  /*  ===== SIMULATION ======== */
  /*  Dimensions */
  /*  samples */
  /*  Input 1 */
  /*  ===== MODULE FUNCTIONS ======== */
  /*  Map Minimum and Maximum Input Processing Function */
  for (k = 0; k < 10; k++) {
    xp1[k] = x1[k] - b[k];
  }

  for (k = 0; k < 10; k++) {
    av[k] = xp1[k] * b_b[k];
  }

  memcpy(&xp1[0], &av[0], 10U * sizeof(double));
  for (k = 0; k < 10; k++) {
    av[k] = xp1[k] + -1.0;
  }

  memcpy(&xp1[0], &av[0], 10U * sizeof(double));

  /*  Layer 1 */
  /*  Sigmoid Symmetric Transfer Function */
  /*  Layer 2 */
  /*  Output 1 */
  /*  Map Minimum and Maximum Output Reverse-Processing Function */
  d0 = 0.0;
  for (k = 0; k < 10; k++) {
    d1 = 0.0;
    for (i0 = 0; i0 < 10; i0++) {
      d1 += c_a[k + 10 * i0] * xp1[i0];
    }

    d0 += a[k] * (2.0 / (1.0 + exp(-2.0 * (b_a[k] + d1))) - 1.0);
  }

  return ((-1.0264491074102544 + d0) - -1.0) / 0.00488997555012225 + 76.0;
}

/*
 * File trailer for neuralNet_MR.c
 *
 * [EOF]
 */
