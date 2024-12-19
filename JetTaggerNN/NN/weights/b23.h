//Numpy array shape [1]
//Min -0.195312500000
//Max -0.195312500000
//Number of zeros 0

#ifndef B23_H_
#define B23_H_

namespace JetTaggerNN_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias23_t b23[1];
#else
bias23_t b23[1] = {-0.195312500};

#endif

#endif
}
