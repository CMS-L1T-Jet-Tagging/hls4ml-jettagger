//Numpy array shape [16]
//Min -0.099802024662
//Max 0.125761151314
//Number of zeros 0

#ifndef B27_H_
#define B27_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
qdense_phi_2_bias_t b27[16];
#else
qdense_phi_2_bias_t b27[16] = {0.031250, -0.093750, 0.125000, 0.062500, -0.031250, 0.000000, 0.062500, 0.000000, 0.062500, 0.046875, 0.015625, 0.046875, 0.046875, 0.078125, -0.031250, 0.031250};
#endif

#endif
}
