//Numpy array shape [21, 32]
//Min -1.908359646797
//Max 2.928572893143
//Number of zeros 336

#ifndef W26_H_
#define W26_H_

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
qdense_phi_1_weight_t w26[672];
#else
qdense_phi_1_weight_t w26[672] = {0.765625, -0.593750, 0.125000, -0.234375, 0.000000, -0.500000, 0.515625, 2.921875, -0.046875, 0.000000, 0.125000, 0.000000, -0.093750, 0.000000, 0.000000, 0.109375, 0.000000, -0.359375, 0.000000, -0.562500, 0.000000, 0.000000, 0.000000, -1.265625, -0.562500, -0.140625, -0.062500, 0.000000, 0.000000, 0.203125, -1.406250, 0.562500, 0.000000, 0.093750, 0.000000, 0.000000, -0.359375, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.484375, -0.156250, 0.000000, 0.000000, 0.218750, -1.843750, 0.296875, -1.062500, 0.281250, 0.687500, -0.906250, 0.796875, -0.328125, 0.000000, 0.000000, 0.000000, -0.750000, -0.203125, 0.000000, -0.343750, -0.421875, 0.000000, 0.000000, 0.750000, 0.984375, 0.000000, 0.000000, -0.453125, 0.000000, 0.000000, 0.875000, 0.000000, -0.375000, 0.921875, 1.281250, 0.000000, -0.562500, 0.796875, 0.000000, 0.750000, 0.000000, -0.187500, 0.437500, -0.531250, -0.359375, 0.000000, 0.000000, 0.234375, -0.390625, 0.984375, 0.421875, 0.000000, -0.093750, 0.000000, 0.359375, -0.437500, 0.156250, 1.500000, 0.125000, 0.000000, 0.000000, 0.000000, 0.078125, 0.687500, -0.093750, 0.765625, 0.203125, 1.062500, 0.578125, -0.328125, 0.140625, 0.468750, 0.171875, 0.000000, -0.140625, 0.171875, -0.250000, 0.062500, 0.500000, 0.421875, 0.078125, -0.390625, 0.234375, 0.000000, -0.468750, -0.609375, 0.000000, 0.000000, 0.000000, 0.000000, -1.796875, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.859375, 0.000000, 1.046875, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.046875, -0.265625, 0.000000, 0.078125, -0.078125, 0.000000, 0.000000, -0.031250, 0.000000, 0.000000, 0.000000, -0.578125, 0.000000, 0.000000, 0.000000, 0.109375, 0.093750, -0.156250, -0.328125, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.312500, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.062500, 0.562500, 0.171875, 0.000000, 0.000000, 0.359375, -0.296875, 0.000000, 0.000000, -0.062500, 0.750000, 0.000000, -0.609375, -0.453125, 0.078125, 0.203125, -0.468750, -0.453125, 0.000000, -1.296875, -1.390625, 0.000000, 0.000000, 0.000000, 0.437500, 0.000000, 0.000000, -0.968750, -0.062500, 0.000000, 0.000000, 0.000000, 0.250000, 0.000000, -0.046875, -0.031250, 2.140625, 0.000000, -0.531250, 0.000000, 0.000000, 0.000000, 0.234375, 0.000000, 0.000000, 0.390625, 0.406250, 0.296875, 2.203125, 0.687500, 1.875000, 0.406250, -0.203125, 0.000000, 0.000000, 0.000000, -0.218750, 0.000000, 0.000000, 0.000000, 0.000000, 0.031250, 0.718750, 0.343750, 0.000000, 0.000000, -1.906250, 0.000000, 0.000000, 0.312500, -0.515625, 0.000000, 0.000000, 0.000000, -0.218750, -0.109375, -0.484375, 0.000000, -0.281250, 0.203125, 0.000000, -1.015625, 0.000000, -0.046875, 0.484375, 0.000000, -0.250000, -0.234375, -0.531250, 0.437500, 0.000000, 0.328125, -0.625000, -0.062500, 0.187500, 0.375000, 0.000000, 0.000000, -0.562500, -0.234375, 1.125000, 0.000000, -0.203125, 0.000000, 0.000000, 0.000000, -0.203125, -0.187500, 0.500000, -0.125000, -0.031250, -0.281250, -0.234375, -0.390625, -0.203125, 0.359375, -0.078125, 0.000000, 0.000000, -0.078125, 0.171875, 0.000000, 0.000000, 0.000000, 0.312500, -0.234375, 0.000000, 0.140625, 0.000000, 0.046875, -0.265625, -0.375000, -0.312500, -0.109375, -0.406250, 0.000000, 0.390625, 0.000000, 0.171875, 0.000000, 0.375000, 0.000000, 0.000000, -0.578125, -0.296875, 0.000000, 1.109375, 0.703125, -0.125000, 0.000000, 0.000000, 0.000000, 0.171875, 0.000000, 0.000000, 0.000000, 0.109375, -0.437500, 0.109375, 0.000000, 0.000000, -0.281250, -0.375000, 0.000000, 0.000000, -0.250000, 0.000000, 0.000000, -0.328125, -0.187500, -0.281250, -0.406250, -0.484375, -0.062500, 0.343750, -0.718750, 0.000000, 0.453125, 0.750000, 0.359375, -0.500000, -0.093750, -0.250000, 0.000000, 0.218750, -0.187500, -0.281250, 0.109375, -0.203125, -0.265625, 0.531250, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.546875, 0.000000, 0.000000, 0.000000, 0.562500, 0.000000, 0.000000, -0.359375, 0.000000, -1.234375, 0.000000, 0.000000, 0.000000, 0.000000, 0.765625, 0.000000, 0.000000, 1.140625, 1.125000, 0.000000, -0.062500, -0.406250, 0.000000, 0.000000, 0.000000, -0.078125, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.406250, 0.437500, 0.000000, 0.000000, 0.000000, -0.234375, 0.187500, -0.812500, 0.000000, -0.109375, 0.468750, 0.000000, 1.390625, 0.000000, 0.000000, -0.421875, 0.000000, 0.125000, 1.156250, -1.031250, 0.000000, 0.000000, 0.500000, -0.828125, 0.000000, 0.000000, 0.000000, 0.000000, 0.171875, 0.000000, 0.000000, 0.203125, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.218750, -0.109375, 0.000000, 0.000000, 0.000000, -0.437500, -0.234375, -0.281250, 0.078125, 0.187500, -0.203125, 0.187500, 0.000000, 0.000000, 0.000000, 0.000000, -0.187500, -0.062500, 0.000000, -0.109375, -0.093750, 0.000000, 0.000000, -0.109375, 2.406250, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.093750, 0.000000, 0.000000, -0.468750, 1.843750, 0.468750, 0.500000, 0.000000, 0.000000, 0.000000, 0.046875, -0.078125, 0.000000, 0.000000, 0.359375, 0.000000, 0.859375, 0.859375, 0.000000, -0.656250, 0.375000, 0.000000, 0.000000, 0.000000, 0.000000, 0.031250, 0.218750, -0.343750, -0.343750, 0.078125, 0.000000, 0.000000, 0.000000, -0.234375, 0.000000, -0.453125, 0.000000, -0.281250, 0.000000, 0.109375, -0.218750, -0.171875, 0.000000, 0.000000, 0.000000, -0.125000, -0.421875, 0.218750, 0.000000, -0.234375, 0.000000, -0.046875, 0.000000, 0.343750, 0.062500, 0.000000, 0.125000, 0.000000, 0.187500, -0.015625, 0.000000, -0.437500, 0.000000, 0.000000, 0.000000, -0.078125, -0.546875, 0.000000, 0.140625, -0.125000, 0.171875, 0.000000, 0.000000, -0.656250, 0.000000, -0.515625, -1.484375, 0.000000, 0.234375, 0.000000, 0.078125, 0.156250, 0.000000, 0.578125, -0.562500, 0.000000, 0.000000, 0.000000, 0.000000, 0.109375, -0.734375, 0.000000, 0.000000, 0.125000, -0.046875, 0.000000, 0.000000, -0.156250, -0.593750, -0.140625, 0.921875, 1.062500, 0.046875, 0.000000, -0.171875, -0.046875, 0.000000, 0.781250, 1.812500, 0.937500, 0.000000, 0.000000, 0.328125, 0.000000, 0.000000, 0.218750, 1.046875, 0.000000, 0.234375, 0.125000, 0.000000, 0.203125, -0.375000, 0.031250, 0.281250, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.312500, 0.546875, 0.000000, 0.000000, 0.000000, 0.093750, 0.000000, 0.000000, 0.125000, -0.203125, 0.000000, 0.000000, 0.000000, 0.000000, 0.125000, 0.109375, 0.000000, 0.656250, 0.000000, 0.000000, 0.218750};
#endif

#endif
