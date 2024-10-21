//Numpy array shape [32]
//Min -0.109375000000
//Max 0.375000000000
//Number of zeros 19

#ifndef B11_H_
#define B11_H_

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias11_t b11[32];
#else
bias11_t b11[32] = {0.000000, 0.000000, 0.000000, 0.109375, 0.312500, 0.000000, 0.000000, -0.093750, 0.000000, 0.000000, -0.031250, 0.000000, 0.046875, 0.000000, -0.109375, 0.000000, 0.000000, 0.203125, 0.000000, 0.000000, 0.015625, 0.000000, 0.000000, 0.031250, 0.046875, 0.000000, 0.375000, 0.000000, 0.265625, 0.000000, 0.031250, 0.000000};
#endif

#endif
