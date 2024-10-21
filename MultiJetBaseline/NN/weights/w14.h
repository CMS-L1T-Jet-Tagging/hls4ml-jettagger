//Numpy array shape [32, 32]
//Min -1.937500000000
//Max 2.078125000000
//Number of zeros 745

#ifndef W14_H_
#define W14_H_

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight14_t w14[1024];
#else
weight14_t w14[1024] = {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1.437500, -0.578125, 0.687500, 0.203125, 0.000000, 0.000000, 0.906250, 0.000000, 0.000000, -0.046875, 0.796875, -0.312500, -0.843750, -0.718750, 1.453125, 0.000000, 0.578125, -0.546875, 0.000000, 0.359375, 0.000000, 0.000000, 0.000000, -0.687500, 0.500000, 0.484375, 0.609375, 0.000000, 0.328125, -0.593750, 0.000000, 0.000000, -0.125000, 1.109375, -0.281250, -0.093750, 0.000000, 0.000000, -0.171875, 0.000000, 0.000000, 0.171875, -0.953125, -0.843750, -0.031250, 1.281250, 0.671875, 0.000000, 0.453125, 0.312500, 0.000000, -1.468750, 0.000000, 0.000000, 0.000000, 0.515625, -0.812500, 1.375000, -0.437500, 0.000000, 0.140625, 0.171875, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.390625, -1.250000, 0.468750, -1.937500, 0.000000, 0.000000, -0.250000, 0.000000, 0.000000, 0.031250, -0.656250, 0.578125, 0.187500, 0.171875, 0.062500, 0.000000, -0.453125, 0.562500, 0.000000, 0.937500, 0.000000, 0.000000, 0.000000, -0.171875, 0.546875, -0.109375, 0.296875, 0.000000, -0.375000, 0.031250, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.078125, -0.843750, 0.921875, -0.250000, 0.000000, 0.000000, -0.078125, 0.000000, 0.000000, 0.250000, 1.140625, -1.484375, 0.515625, 0.046875, 0.140625, 0.000000, -0.421875, -0.250000, 0.000000, 0.343750, 0.000000, 0.000000, 0.000000, 0.531250, 0.531250, 0.968750, -0.156250, 0.000000, -0.234375, -0.437500, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.953125, -0.750000, 1.609375, 0.343750, 0.000000, 0.000000, 0.031250, 0.000000, 0.000000, 0.703125, -0.406250, -0.343750, -0.968750, 1.718750, -0.375000, 0.000000, -0.250000, 1.281250, 0.000000, 0.031250, 0.000000, 0.000000, 0.000000, 0.296875, -0.062500, 1.812500, -0.015625, 0.000000, -1.031250, -0.718750, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.203125, 0.531250, -0.484375, -0.500000, 0.000000, 0.000000, 0.328125, 0.000000, 0.000000, 2.078125, 0.406250, 0.296875, -0.515625, -0.250000, -0.125000, 0.000000, 0.390625, -1.562500, 0.000000, 0.187500, 0.000000, 0.000000, 0.000000, -0.812500, 0.187500, -0.468750, 0.140625, 0.000000, 0.468750, -0.078125, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.187500, 0.281250, -0.406250, -0.953125, 0.000000, 0.000000, -0.218750, 0.000000, 0.000000, 0.015625, -0.546875, 0.265625, 0.890625, -0.140625, 0.312500, 0.000000, 0.546875, 0.062500, 0.000000, 0.062500, 0.000000, 0.000000, 0.000000, -0.546875, 0.218750, 0.437500, 0.046875, 0.000000, -0.125000, 0.750000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.609375, -0.468750, 0.750000, 0.031250, 0.000000, 0.000000, 0.125000, 0.000000, 0.000000, 0.406250, -1.328125, 0.562500, -0.906250, 0.218750, 0.046875, 0.000000, -1.156250, -1.406250, 0.000000, 0.171875, 0.000000, 0.000000, 0.000000, -0.453125, 0.109375, 0.515625, 0.796875, 0.000000, 0.515625, 0.203125, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.609375, -0.359375, 0.187500, 0.468750, 0.000000, 0.000000, 1.312500, 0.000000, 0.000000, -0.156250, -0.156250, 0.250000, -0.578125, -0.062500, -1.468750, 0.000000, -1.156250, -0.406250, 0.000000, -0.328125, 0.000000, 0.000000, 0.000000, 0.828125, -0.093750, -0.578125, 0.453125, 0.000000, 0.375000, -0.093750, 0.000000, 0.000000, 0.328125, -0.171875, -0.484375, -0.187500, 0.000000, 0.000000, 0.187500, 0.000000, 0.000000, -0.281250, -0.703125, -0.125000, -1.328125, 0.093750, 0.359375, 0.000000, 0.156250, 0.250000, 0.000000, 0.406250, 0.000000, 0.000000, 0.000000, -1.187500, 0.312500, -0.015625, -0.078125, 0.000000, 0.390625, 0.218750, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.078125, -0.203125, 0.593750, -0.187500, 0.000000, 0.000000, -0.093750, 0.000000, 0.000000, -0.375000, 0.109375, -0.328125, 0.750000, 0.031250, -0.296875, 0.000000, 1.875000, -0.093750, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.562500, -0.093750, 0.156250, 1.859375, 0.000000, -0.812500, -1.671875, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.078125, 0.359375, 1.125000, -0.828125, 0.000000, 0.000000, -0.375000, 0.000000, 0.000000, 0.640625, 0.078125, -0.546875, 1.109375, 0.546875, 1.078125, 0.000000, -1.359375, -0.421875, 0.000000, -0.937500, 0.000000, 0.000000, 0.000000, 0.875000, -0.906250, -1.140625, 0.968750, 0.000000, 0.453125, 0.109375, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.500000, -0.015625, 0.671875, 0.312500, 0.000000, 0.000000, -0.328125, 0.000000, 0.000000, 0.015625, -0.578125, -0.187500, 0.812500, -0.765625, -0.578125, 0.000000, 0.203125, 0.609375, 0.000000, -0.468750, 0.000000, 0.000000, 0.000000, 0.781250, -0.140625, -0.593750, 0.046875, 0.000000, 0.031250, -1.093750, 0.000000, 0.000000, 1.531250, -0.328125, -0.515625, 0.359375, 0.000000, 0.000000, -0.093750, 0.000000, 0.000000, 0.156250, 0.328125, -0.375000, -0.500000, -0.421875, -0.812500, 0.000000, -0.953125, 0.218750, 0.000000, 0.640625, 0.000000, 0.000000, 0.000000, -0.562500, 0.078125, -0.234375, 1.000000, 0.000000, 0.968750, -0.500000, 0.000000};
#endif

#endif