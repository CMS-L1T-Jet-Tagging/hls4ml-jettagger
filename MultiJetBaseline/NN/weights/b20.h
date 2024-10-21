//Numpy array shape [8]
//Min -1.351562500000
//Max 0.914062500000
//Number of zeros 0

#ifndef B20_H_
#define B20_H_

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias20_t b20[8];
#else
bias20_t b20[8] = {0.687500000, -1.130859375, 0.681640625, 0.914062500, -0.447265625, -0.568359375, -1.351562500, 0.173828125};
#endif

#endif
