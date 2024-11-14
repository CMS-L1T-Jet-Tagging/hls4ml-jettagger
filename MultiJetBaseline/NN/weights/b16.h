//Numpy array shape [16]
//Min -0.046875000000
//Max 0.062500000000
//Number of zeros 2

#ifndef B16_H_
#define B16_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias16_t b16[16];
#else
bias16_t b16[16] = {-0.015625, -0.046875, -0.031250, 0.046875, 0.062500, -0.046875, 0.062500, 0.000000, 0.000000, 0.062500, -0.031250, 0.062500, -0.031250, -0.031250, -0.046875, 0.046875};
#endif

#endif
}
