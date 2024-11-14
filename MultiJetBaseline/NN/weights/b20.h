//Numpy array shape [8]
//Min -0.214843750000
//Max 0.232421875000
//Number of zeros 0

#ifndef B20_H_
#define B20_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias20_t b20[8];
#else
bias20_t b20[8] = {0.078125000, 0.160156250, 0.232421875, -0.003906250, -0.130859375, -0.144531250, 0.019531250, -0.214843750};
#endif

#endif
}
