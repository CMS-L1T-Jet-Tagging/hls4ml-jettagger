//Numpy array shape [10]
//Min -0.734375000000
//Max 0.359375000000
//Number of zeros 0

#ifndef B26_H_
#define B26_H_

namespace JetTaggerNN_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias26_t b26[10];
#else
bias26_t b26[10] = {-0.734375, -0.187500, 0.281250, 0.093750, -0.187500, -0.078125, 0.015625, 0.359375, -0.218750, -0.031250};

#endif

#endif
}
