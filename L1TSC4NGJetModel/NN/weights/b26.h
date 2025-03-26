//Numpy array shape [10]
//Min -0.437500000000
//Max 0.296875000000
//Number of zeros 0

#ifndef B26_H_
#define B26_H_

namespace L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias26_t b26[10];
#else
bias26_t b26[10] = {0.296875, -0.406250, 0.031250, 0.125000, -0.078125, -0.062500, 0.234375, 0.203125, -0.437500, -0.250000};

#endif

#endif
}
