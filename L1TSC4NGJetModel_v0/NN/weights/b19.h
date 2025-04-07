//Numpy array shape [8]
//Min -0.843750000000
//Max 1.375000000000
//Number of zeros 0

#ifndef B19_H_
#define B19_H_

namespace hls4ml_L1TSC4NGJetModel_v0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias19_t b19[8];
#else
bias19_t b19[8] = {0.031250, 0.343750, -0.312500, 0.687500, -0.843750, -0.265625, 1.375000, -0.765625};

#endif

#endif
}
