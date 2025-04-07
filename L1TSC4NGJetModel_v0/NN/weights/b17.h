//Numpy array shape [10]
//Min -0.203125000000
//Max 0.562500000000
//Number of zeros 2

#ifndef B17_H_
#define B17_H_

namespace hls4ml_L1TSC4NGJetModel_v0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias17_t b17[10];
#else
bias17_t b17[10] = {-0.203125, 0.000000, 0.000000, -0.062500, 0.312500, 0.234375, 0.562500, 0.343750, 0.218750, 0.046875};

#endif

#endif
}
