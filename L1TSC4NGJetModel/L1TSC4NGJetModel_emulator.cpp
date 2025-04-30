#include "NN/L1TSC4NGJetModel.h" //include of the top level of HLS model
#include "emulator.h" //include of emulator modeling
#include "NN/nnet_utils/nnet_common.h"
#include <any>
#include <array>
#include <utility>
#include "ap_fixed.h"
#include "ap_int.h"

using namespace nnet;

class L1TSC4NGJetModel_emulator : public hls4mlEmulator::Model{
    private:
        input_t input_1[N_INPUT_1_1*N_INPUT_2_1];
        layer33_t layer33_out[N_LAYER_33]; // reg out
        layer35_t layer35_out[N_LAYER_29]; // class out
    public:


        virtual void prepare_input(std::any input)
        {
            input_t* input_p = std::any_cast<input_t*>(input);
            for(int i = 0; i < N_INPUT_1_1*N_INPUT_2_1; ++i){
                input_1[i] = std::any_cast<input_t>(input_p[i]);
            }
        }



        virtual void predict()
        {
            L1TSC4NGJetModel(input_1, layer35_out,layer33_out);
            
        }

        virtual void read_result(std::any result)
        { 
            std::pair<std::array<layer33_t,N_LAYER_33>,std::array<layer35_t,N_LAYER_29>> *result_p = std::any_cast<std::pair<std::array<layer33_t,N_LAYER_33>,std::array<layer35_t,N_LAYER_29>>*>(result);
            
            for (int i = 0; i < N_LAYER_33; ++i ){
                result_p->second[i] = layer33_out[i];
            }
            for (int i = 0; i < N_LAYER_29; ++i ){
                result_p->first[i] = layer35_out[i];  
            }
        }

};

extern "C" hls4mlEmulator::Model* create_model()
{
    return new L1TSC4NGJetModel_emulator;
}

extern "C" void destroy_model(hls4mlEmulator::Model* m)
{
    delete m;
}