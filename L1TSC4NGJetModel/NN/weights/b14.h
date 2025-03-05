//Numpy array shape [16]
//Min -0.296875000000
//Max 0.671875000000
//Number of zeros 0

#ifndef B14_H_
#define B14_H_

namespace L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias14_t b14[16];
#else
bias14_t b14[16] = {0.109375, 0.328125, 0.500000, 0.531250, -0.296875, 0.671875, 0.250000, -0.187500, 0.578125, -0.093750, -0.109375, -0.062500, 0.093750, 0.468750, 0.562500, -0.281250};

#endif

#endif
}
