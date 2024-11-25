#include "NN/JetTaggerNN.h" //include of the top level of HLS model
#include "emulator.h" //include of emulator modeling
#include "NN/nnet_utils/nnet_common.h"
#include <any>
#include <array>
#include <utility>
#include "ap_fixed.h"
#include "ap_int.h"

using namespace JetTaggerNN_v1;

class JetTaggerNN_emulator : public hls4mlEmulator::Model{
    private:
        input_t _input[N_INPUT_1_1*N_INPUT_2_1];
        layer24_t _layer24_out[N_LAYER_23]; // reg out
        layer22_t _layer22_out[N_LAYER_19]; // class out
    public:


        virtual void prepare_input(std::any input)
        {
            input_t* input_p = std::any_cast<input_t*>(input);
            for(int i = 0; i < N_INPUT_1_1*N_INPUT_2_1; ++i){
                _input[i] = std::any_cast<input_t>(input_p[i]);
            }
        }



        virtual void predict()
        {
            JetTaggerNN(_input, _layer24_out, _layer25_out);
            
        }

        virtual void read_result(std::any result)
        { 
            std::pair<std::array<layer24_t,N_LAYER_23>,std::array<layer22_t,N_LAYER_19>> *result_p = std::any_cast<std::pair<std::array<layer24_t,N_LAYER_23>,std::array<layer22_t,N_LAYER_19>>*>(result);
            for (int i = 0; i < N_LAYER_23; ++i ){
                result_p->first[i] = _layer24_out[i];  
            }
            for (int i = 0; i < N_LAYER_19; ++i ){
                result_p->second[i] = _layer22_out[i];
            }
        }

};

extern "C" hls4mlEmulator::Model* create_model()
{
    return new JetTaggerNN_emulator;
}

extern "C" void destroy_model(hls4mlEmulator::Model* m)
{
    delete m;
}
