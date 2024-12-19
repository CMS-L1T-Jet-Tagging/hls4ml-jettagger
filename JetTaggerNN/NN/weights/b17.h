//Numpy array shape [10]
//Min -0.078125000000
//Max 1.890625000000
//Number of zeros 2

#ifndef B17_H_
#define B17_H_

namespace JetTaggerNN_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias17_t b17[10];
#else
bias17_t b17[10] = {0.296875, 0.000000, 0.000000, 0.093750, -0.078125, 0.125000, 1.890625, 0.640625, -0.046875, 0.578125};

#endif

#endif
}
