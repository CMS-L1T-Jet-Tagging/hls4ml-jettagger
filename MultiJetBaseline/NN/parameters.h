#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_fixed.h"
#include "ap_int.h"

#include "nnet_utils/nnet_code_gen.h"
#include "nnet_utils/nnet_helpers.h"
// hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_batchnorm.h"
#include "nnet_utils/nnet_batchnorm_stream.h"
#include "nnet_utils/nnet_conv1d.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"
#include "nnet_utils/nnet_sepconv1d_stream.h"

// hls-fpga-machine-learning insert weights
#include "weights/s2.h"
#include "weights/b2.h"
#include "weights/w26.h"
#include "weights/b26.h"
#include "weights/w27.h"
#include "weights/b27.h"
#include "weights/w11.h"
#include "weights/b11.h"
#include "weights/w14.h"
#include "weights/b14.h"
#include "weights/w16.h"
#include "weights/b16.h"
#include "weights/w20.h"
#include "weights/b20.h"
#include "weights/w22.h"
#include "weights/b22.h"

// hls-fpga-machine-learning insert layer-config
// batchnorm_inputs
struct config2 : nnet::batchnorm_config {
    static const unsigned n_in = N_INPUT_1_1*N_INPUT_2_1;
    static const unsigned n_filt = 21;
    static const unsigned n_scale_bias = (n_filt == -1) ? n_in : n_filt;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in, reuse_factor);
    static const bool store_weights_in_bram = false;
    typedef batchnorm_inputs_bias_t bias_t;
    typedef batchnorm_inputs_scale_t scale_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// qDense_phi_1
struct config26_mult : nnet::dense_config {
    static const unsigned n_in = 21;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 1;
    static const unsigned strategy = nnet::latency;
    static const unsigned n_zeros = 336;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef qdense_phi_1_bias_t bias_t;
    typedef qdense_phi_1_weight_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config26 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 16;
    static const unsigned n_chan = 21;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 32;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 16;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 336;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 16;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 16;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::fill_buffer_26<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef qdense_phi_1_bias_t bias_t;
    typedef qdense_phi_1_weight_t weight_t;
    typedef config26_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_unscaled<K, S, W>;
    template<class data_T, class res_T, class CONFIG_T>
    using pointwise_conv = nnet::pointwise_conv_26<data_T, res_T, CONFIG_T>;
};
const ap_uint<config26::filt_width> config26::pixels[] = {0};

// qActivation_phi_1
struct relu_config5 : nnet::activ_config {
    static const unsigned n_in = 512;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef qActivation_phi_1_table_t table_t;
};

// qDense_phi_2
struct config27_mult : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 1;
    static const unsigned strategy = nnet::latency;
    static const unsigned n_zeros = 512;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef qdense_phi_2_bias_t bias_t;
    typedef qdense_phi_2_weight_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config27 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 16;
    static const unsigned n_chan = 32;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 32;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 16;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 512;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 16;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 16;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::fill_buffer_27<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef qdense_phi_2_bias_t bias_t;
    typedef qdense_phi_2_weight_t weight_t;
    typedef config27_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_unscaled<K, S, W>;
    template<class data_T, class res_T, class CONFIG_T>
    using pointwise_conv = nnet::pointwise_conv_27<data_T, res_T, CONFIG_T>;
};
const ap_uint<config27::filt_width> config27::pixels[] = {0};

// qActivation_phi_2
struct relu_config8 : nnet::activ_config {
    static const unsigned n_in = 512;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef qActivation_phi_2_table_t table_t;
};

// qActivationForPool
struct linear_config9 : nnet::activ_config {
    static const unsigned n_in = 512;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef qActivationForPool_table_t table_t;
};

// avgpool
struct config10 : nnet::pooling1d_config {
    static const unsigned n_in = 16;
    static const unsigned n_filt = 32;
    static const nnet::Pool_Op pool_op = nnet::Average;
    static const unsigned reuse_factor = 1;
    typedef model_default_t accum_t;
};

// qDense_rho_1
struct config11 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 32;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 664;
    static const unsigned n_nonzeros = 360;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias11_t bias_t;
    typedef weight11_t weight_t;
    typedef layer11_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// qActivation_rho_1
struct relu_config13 : nnet::activ_config {
    static const unsigned n_in = 32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef qActivation_rho_1_table_t table_t;
};

// qDense_2_class
struct config14 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 32;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 745;
    static const unsigned n_nonzeros = 279;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias14_t bias_t;
    typedef weight14_t weight_t;
    typedef layer14_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// qDense_2_reg
struct config16 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 32;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 843;
    static const unsigned n_nonzeros = 181;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias16_t bias_t;
    typedef weight16_t weight_t;
    typedef layer16_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// qActivation_2_class
struct relu_config18 : nnet::activ_config {
    static const unsigned n_in = 32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef qActivation_2_class_table_t table_t;
};

// qActivation_2_reg
struct relu_config19 : nnet::activ_config {
    static const unsigned n_in = 32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef qActivation_2_reg_table_t table_t;
};

// qDense_out_class
struct config20 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 8;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 256;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias20_t bias_t;
    typedef weight20_t weight_t;
    typedef layer20_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// qDense_out_reg
struct config22 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 32;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias22_t bias_t;
    typedef weight22_t weight_t;
    typedef layer22_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// output_class
struct softmax_config24 : nnet::activ_config {
    static const unsigned n_in = 8;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::stable;
    typedef output_class_exp_table_t exp_table_t;
    typedef output_class_inv_table_t inv_table_t;
};


#endif
