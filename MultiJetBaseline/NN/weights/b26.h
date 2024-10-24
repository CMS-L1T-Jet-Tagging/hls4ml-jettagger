//Numpy array shape [32]
//Min -3.155727863312
//Max 1.475700616837
//Number of zeros 0

#ifndef B26_H_
#define B26_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
qdense_phi_1_bias_t b26[32];
#else
qdense_phi_1_bias_t b26[32] = {0.468750, -0.656250, 1.062500, 1.468750, -3.156250, 0.250000, -0.187500, 0.828125, -0.046875, 0.328125, 0.156250, -0.671875, 0.671875, 0.468750, -0.031250, -0.406250, -2.765625, 0.687500, -0.984375, 0.156250, -0.593750, -0.125000, -0.609375, 1.265625, 0.171875, -0.203125, -0.046875, -0.125000, -0.578125, 1.296875, -0.546875, 0.140625};
#endif

#endif
}
