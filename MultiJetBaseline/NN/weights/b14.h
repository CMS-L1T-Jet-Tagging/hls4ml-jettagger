//Numpy array shape [16]
//Min -0.078125000000
//Max 0.156250000000
//Number of zeros 2

#ifndef B14_H_
#define B14_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias14_t b14[16];
#else
bias14_t b14[16] = {0.093750, -0.078125, 0.000000, 0.140625, 0.156250, -0.046875, 0.062500, -0.046875, 0.031250, 0.000000, -0.015625, 0.078125, -0.031250, 0.109375, -0.015625, 0.031250};
#endif

#endif
}
