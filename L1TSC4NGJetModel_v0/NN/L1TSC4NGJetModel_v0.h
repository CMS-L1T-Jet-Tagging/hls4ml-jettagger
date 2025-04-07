#ifndef L1TSC4NGJETMODEL_V0_H_
#define L1TSC4NGJETMODEL_V0_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"


// Prototype of top level function for C-synthesis
namespace hls4ml_L1TSC4NGJetModel_v0 {
void L1TSC4NGJetModel_v0(
    input_t model_input[N_INPUT_1_1*N_INPUT_2_1],
    layer22_t layer22_out[N_LAYER_19], layer24_t layer24_out[N_LAYER_23]
);


} // namespace hls4ml_L1TSC4NGJetModel_v0

#endif
