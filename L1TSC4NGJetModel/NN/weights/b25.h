//Numpy array shape [10]
//Min -0.062500000000
//Max 0.812500000000
//Number of zeros 0

#ifndef B25_H_
#define B25_H_

namespace L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias25_t b25[10];
#else
bias25_t b25[10] = {0.140625, 0.203125, 0.812500, 0.421875, 0.109375, -0.062500, 0.234375, 0.156250, 0.187500, 0.078125};

#endif

#endif
}
