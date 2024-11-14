#ifndef MULTIJETBaseline_H_
#define MULTIJETBaseline_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"

// Prototype of top level function for C-synthesis
namespace MultiJetTagger_v1 {
void MultiJetBaseline(
    input_t inputs[N_INPUT_1_1*N_INPUT_2_1],
    layer24_t layer24_out[N_LAYER_20], layer25_t layer25_out[N_LAYER_22]
);

}

#endif
