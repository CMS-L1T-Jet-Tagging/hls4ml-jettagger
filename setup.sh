mkdir -p L1TSC4NGJetModel/NN
SRC=L1TSC4NGJetModel/firmware

cp -r $SRC/defines.h   L1TSC4NGJetModel/NN/
sed -i "s/#include <cstdio>/#include <cstdio>\n\nnamespace hls4ml_L1TSC4NGJetModel_v0 {/" L1TSC4NGJetModel/NN/defines.h
echo '}' >> L1TSC4NGJetModel/NN/defines.h

cp    $SRC/L1TSC4NGJetModel.cpp   L1TSC4NGJetModel/NN/L1TSC4NGJetModel.cpp
sed -i "s/void L1TSC4NGJetModel(/namespace hls4ml_L1TSC4NGJetModel_v0 {\nvoid L1TSC4NGJetModel(/" L1TSC4NGJetModel/NN/L1TSC4NGJetModel.cpp
echo '}' >> L1TSC4NGJetModel/NN/L1TSC4NGJetModel.cpp

cp    $SRC/L1TSC4NGJetModel.h   L1TSC4NGJetModel/NN/L1TSC4NGJetModel.h
sed -i "s/void L1TSC4NGJetModel(/namespace hls4ml_L1TSC4NGJetModel_v0 {\nvoid L1TSC4NGJetModel(/" L1TSC4NGJetModel/NN/L1TSC4NGJetModel.h
sed -i "s/#endif/}\n\n#endif/" L1TSC4NGJetModel/NN/L1TSC4NGJetModel.h

cp -r $SRC/nnet_utils   L1TSC4NGJetModel/NN/

cp    $SRC/parameters.h   L1TSC4NGJetModel/NN/
sed -i "s,// hls-fpga-machine-learning insert layer-config,namespace hls4ml_L1TSC4NGJetModel_v0 {\n// hls-fpga-machine-learning insert layer-config," L1TSC4NGJetModel/NN/parameters.h
sed -i "s/#endif/}\n\n#endif/" L1TSC4NGJetModel/NN/parameters.h

cp -r $SRC/weights    L1TSC4NGJetModel/NN/
for filename in L1TSC4NGJetModel/NN/weights/*.h; do
    sed -i '8 a namespace hls4ml_L1TSC4NGJetModel_v0 {' $filename
    echo '}' >> $filename
done

rm L1TSC4NGJetModel/NN/weights/*.txt

# change the way the weights are read
find ./L1TSC4NGJetModel/NN \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'