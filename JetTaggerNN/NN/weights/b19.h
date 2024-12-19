//Numpy array shape [8]
//Min -1.640625000000
//Max 1.140625000000
//Number of zeros 0

#ifndef B19_H_
#define B19_H_

namespace JetTaggerNN_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias19_t b19[8];
#else
bias19_t b19[8] = {0.718750, -0.750000, 1.140625, 0.203125, -0.703125, -1.640625, -1.484375, -0.484375};

#endif

#endif
}
