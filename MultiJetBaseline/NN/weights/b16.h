//Numpy array shape [32]
//Min -0.828125000000
//Max 1.609375000000
//Number of zeros 19

#ifndef B16_H_
#define B16_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias16_t b16[32];
#else
bias16_t b16[32] = {0.171875, 0.000000, 0.000000, 0.531250, 0.328125, 0.000000, -0.828125, 0.000000, 0.000000, 0.046875, 0.000000, 0.078125, 0.000000, 0.000000, 0.000000, 1.609375, 0.000000, 0.000000, 0.656250, 0.359375, 0.000000, 0.000000, 0.312500, 0.000000, 0.000000, 1.187500, 0.000000, 0.000000, 0.234375, 0.000000, 0.000000, 1.250000};
#endif

#endif
}
