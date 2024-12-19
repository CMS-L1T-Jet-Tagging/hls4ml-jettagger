//Numpy array shape [10, 1]
//Min -0.826171875000
//Max 1.828125000000
//Number of zeros 1

#ifndef W23_H_
#define W23_H_

namespace JetTaggerNN_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight23_t w23[10];
#else
weight23_t w23[10] = {-0.826171875, 0.000000000, -0.062500000, 1.240234375, 1.828125000, 0.964843750, 0.646484375, 0.710937500, -0.722656250, 0.558593750};

#endif

#endif
}
