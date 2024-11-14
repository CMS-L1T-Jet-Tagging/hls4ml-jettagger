//Numpy array shape [16]
//Min -0.206390112638
//Max 0.110737308860
//Number of zeros 0

#ifndef B26_H_
#define B26_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
qdense_phi_1_bias_t b26[16];
#else
qdense_phi_1_bias_t b26[16] = {0.062500, 0.031250, -0.109375, 0.046875, 0.015625, -0.015625, -0.062500, -0.015625, 0.109375, -0.078125, 0.046875, -0.078125, -0.203125, 0.015625, 0.015625, 0.062500};
#endif

#endif
}
