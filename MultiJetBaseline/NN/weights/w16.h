//Numpy array shape [32, 32]
//Min -2.109375000000
//Max 1.812500000000
//Number of zeros 843

#ifndef W16_H_
#define W16_H_

namespace MultiJetTagger_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight16_t w16[1024];
#else
weight16_t w16[1024] = {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.625000, 0.000000, 0.000000, -0.296875, -0.500000, 0.000000, 0.078125, 0.000000, 0.000000, -1.187500, 0.000000, 1.390625, 0.000000, 0.000000, 0.000000, -2.109375, 0.000000, 0.000000, -0.234375, 1.812500, 0.000000, 0.000000, -1.109375, 0.000000, 0.000000, -0.671875, 0.000000, 0.000000, 1.296875, 0.000000, 0.000000, 0.343750, 0.359375, 0.000000, 0.000000, -0.046875, 0.187500, 0.000000, 0.484375, 0.000000, 0.000000, -0.031250, 0.000000, 0.203125, 0.000000, 0.000000, 0.000000, -0.265625, 0.000000, 0.000000, 0.187500, 0.312500, 0.000000, 0.000000, -0.375000, 0.000000, 0.000000, 1.078125, 0.000000, 0.000000, -2.031250, 0.000000, 0.000000, -0.171875, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.718750, 0.000000, 0.000000, -0.546875, 0.390625, 0.000000, -0.203125, 0.000000, 0.000000, 0.937500, 0.000000, -0.234375, 0.000000, 0.000000, 0.000000, 1.031250, 0.000000, 0.000000, 0.250000, 0.468750, 0.000000, 0.000000, -1.031250, 0.000000, 0.000000, 1.015625, 0.000000, 0.000000, 0.156250, 0.000000, 0.000000, 0.421875, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.171875, 0.000000, 0.000000, -0.171875, -0.015625, 0.000000, -0.421875, 0.000000, 0.000000, 0.468750, 0.000000, -0.531250, 0.000000, 0.000000, 0.000000, -0.734375, 0.000000, 0.000000, -0.281250, -0.609375, 0.000000, 0.000000, 0.546875, 0.000000, 0.000000, 0.578125, 0.000000, 0.000000, -0.093750, 0.000000, 0.000000, -1.109375, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.109375, 0.000000, 0.000000, 0.265625, -0.125000, 0.000000, -0.531250, 0.000000, 0.000000, 0.437500, 0.000000, -0.812500, 0.000000, 0.000000, 0.000000, -1.359375, 0.000000, 0.000000, -0.593750, 0.765625, 0.000000, 0.000000, -0.781250, 0.000000, 0.000000, -0.421875, 0.000000, 0.000000, -1.250000, 0.000000, 0.000000, 0.703125, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.203125, 0.000000, 0.000000, -0.234375, 0.343750, 0.000000, 1.156250, 0.000000, 0.000000, -0.093750, 0.000000, 1.406250, 0.000000, 0.000000, 0.000000, -0.296875, 0.000000, 0.000000, -1.281250, 0.890625, 0.000000, 0.000000, -0.578125, 0.000000, 0.000000, 0.218750, 0.000000, 0.000000, -0.171875, 0.000000, 0.000000, -0.031250, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1.265625, 0.000000, 0.000000, -0.015625, -1.812500, 0.000000, -0.296875, 0.000000, 0.000000, -0.859375, 0.000000, -0.218750, 0.000000, 0.000000, 0.000000, 0.078125, 0.000000, 0.000000, -0.031250, -0.921875, 0.000000, 0.000000, -1.093750, 0.000000, 0.000000, 0.046875, 0.000000, 0.000000, -0.468750, 0.000000, 0.000000, 0.171875, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.312500, 0.000000, 0.000000, -0.468750, 0.250000, 0.000000, 0.468750, 0.000000, 0.000000, 0.687500, 0.000000, -0.656250, 0.000000, 0.000000, 0.000000, -1.062500, 0.000000, 0.000000, -1.515625, -0.406250, 0.000000, 0.000000, 0.703125, 0.000000, 0.000000, 0.906250, 0.000000, 0.000000, 0.078125, 0.000000, 0.000000, -0.250000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.250000, 0.000000, 0.000000, 0.593750, -0.375000, 0.000000, -0.343750, 0.000000, 0.000000, -0.046875, 0.000000, 0.515625, 0.000000, 0.000000, 0.000000, 0.031250, 0.000000, 0.000000, -0.359375, -0.125000, 0.000000, 0.000000, 0.921875, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.281250, 0.000000, 0.000000, 0.515625, -0.015625, 0.000000, 0.000000, -0.359375, 0.218750, 0.000000, -1.171875, 0.000000, 0.000000, -0.390625, 0.000000, -0.031250, 0.000000, 0.000000, 0.000000, -1.046875, 0.000000, 0.000000, 0.359375, -1.609375, 0.000000, 0.000000, 1.171875, 0.000000, 0.000000, 0.453125, 0.000000, 0.000000, 0.093750, 0.000000, 0.000000, 0.343750, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.140625, 0.000000, 0.000000, -1.187500, 0.296875, 0.000000, -0.046875, 0.000000, 0.000000, 0.234375, 0.000000, -0.359375, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.015625, -0.484375, 0.000000, 0.000000, 0.750000, 0.000000, 0.000000, -0.859375, 0.000000, 0.000000, -0.046875, 0.000000, 0.000000, 0.531250, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.187500, 0.000000, 0.000000, -0.515625, 0.343750, 0.000000, 0.015625, 0.000000, 0.000000, 0.093750, 0.000000, 0.140625, 0.000000, 0.000000, 0.000000, -1.234375, 0.000000, 0.000000, -0.250000, -0.031250, 0.000000, 0.000000, 0.203125, 0.000000, 0.000000, -1.140625, 0.000000, 0.000000, 0.359375, 0.000000, 0.000000, -1.765625, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.250000, 0.000000, 0.000000, 0.125000, 0.078125, 0.000000, -0.328125, 0.000000, 0.000000, 1.000000, 0.000000, -0.671875, 0.000000, 0.000000, 0.000000, -0.421875, 0.000000, 0.000000, -0.796875, -0.625000, 0.000000, 0.000000, -0.343750, 0.000000, 0.000000, -0.609375, 0.000000, 0.000000, 0.015625, 0.000000, 0.000000, 0.031250, -0.078125, 0.000000, 0.000000, -0.421875, -0.218750, 0.000000, 0.734375, 0.000000, 0.000000, 0.015625, 0.000000, -0.281250, 0.000000, 0.000000, 0.000000, -0.031250, 0.000000, 0.000000, 0.687500, -0.781250, 0.000000, 0.000000, -1.484375, 0.000000, 0.000000, -0.421875, 0.000000, 0.000000, 0.453125, 0.000000, 0.000000, 0.218750};
#endif

#endif
}
