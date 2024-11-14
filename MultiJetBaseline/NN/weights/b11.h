//Numpy array shape [16]
//Min -0.015625000000
//Max 0.093750000000
//Number of zeros 1

#ifndef B11_H_
#define B11_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias11_t b11[16];
#else
bias11_t b11[16] = {0.015625, 0.078125, 0.078125, 0.000000, 0.031250, 0.031250, 0.031250, 0.046875, -0.015625, 0.031250, 0.078125, -0.015625, 0.062500, 0.093750, 0.046875, 0.062500};
#endif

#endif
}
