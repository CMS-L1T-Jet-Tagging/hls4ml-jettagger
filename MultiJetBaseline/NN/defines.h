#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 16
#define N_INPUT_2_1 21
#define N_INPUT_1_1 16
#define N_INPUT_2_1 21
#define N_OUTPUTS_26 16
#define N_FILT_26 32
#define N_LAYER_1_3 16
#define N_LAYER_2_3 32
#define N_OUTPUTS_27 16
#define N_FILT_27 32
#define N_LAYER_1_6 16
#define N_LAYER_2_6 32
#define N_LAYER_1_6 16
#define N_LAYER_2_6 32
#define N_FILT_10 32
#define N_LAYER_11 32
#define N_LAYER_11 32
#define N_LAYER_14 32
#define N_LAYER_16 32
#define N_LAYER_14 32
#define N_LAYER_16 32
#define N_LAYER_20 8
#define N_LAYER_22 1
#define N_LAYER_20 8

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,6> batchnorm_inputs_scale_t;
typedef ap_fixed<16,6> batchnorm_inputs_bias_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> layer26_t;
typedef ap_fixed<9,3> qdense_phi_1_weight_t;
typedef ap_fixed<9,3> qdense_phi_1_bias_t;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer5_t;
typedef ap_fixed<18,8> qActivation_phi_1_table_t;
typedef ap_fixed<16,6> layer27_t;
typedef ap_fixed<9,3> qdense_phi_2_weight_t;
typedef ap_fixed<9,3> qdense_phi_2_bias_t;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer8_t;
typedef ap_fixed<18,8> qActivation_phi_2_table_t;
typedef ap_fixed<18,9,AP_RND_CONV,AP_SAT,0> layer9_t;
typedef ap_fixed<18,8> qActivationForPool_table_t;
typedef ap_fixed<16,6> layer10_t;
typedef ap_fixed<16,6> layer11_t;
typedef ap_fixed<9,3> weight11_t;
typedef ap_fixed<9,3> bias11_t;
typedef ap_uint<1> layer11_index;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer13_t;
typedef ap_fixed<18,8> qActivation_rho_1_table_t;
typedef ap_fixed<16,6> layer14_t;
typedef ap_fixed<9,3> weight14_t;
typedef ap_fixed<9,3> bias14_t;
typedef ap_uint<1> layer14_index;
typedef ap_fixed<16,6> layer16_t;
typedef ap_fixed<9,3> weight16_t;
typedef ap_fixed<9,3> bias16_t;
typedef ap_uint<1> layer16_index;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer18_t;
typedef ap_fixed<18,8> qActivation_2_class_table_t;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer19_t;
typedef ap_fixed<18,8> qActivation_2_reg_table_t;
typedef ap_fixed<16,6> layer20_t;
typedef ap_fixed<16,7> weight20_t;
typedef ap_fixed<16,7> bias20_t;
typedef ap_uint<1> layer20_index;
typedef ap_fixed<16,6> layer22_t;
typedef ap_fixed<16,7> weight22_t;
typedef ap_fixed<16,7> bias22_t;
typedef ap_uint<1> layer22_index;
typedef ap_fixed<16,6> layer24_t;
typedef ap_fixed<18,8> output_class_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_class_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> output_class_inv_table_t;

#endif
