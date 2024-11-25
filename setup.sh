mkdir -p JetTaggerNN/NN
SRC=JetTaggerNN/firmware

cp -r $SRC/defines.h   JetTaggerNN/NN/
sed -i "s/#include <cstdio>/#include <cstdio>\n\nnamespace JetTaggerNN_v1 {/" JetTaggerNN/NN/defines.h
echo '}' >> JetTaggerNN/NN/defines.h

cp    $SRC/JetTaggerNN.cpp   JetTaggerNN/NN/JetTaggerNN.cpp
sed -i "s/void JetTaggerNN(/namespace JetTaggerNN_v1 {\nvoid JetTaggerNN(/" JetTaggerNN/NN/JetTaggerNN.cpp
echo '}' >> JetTaggerNN/NN/JetTaggerNN.cpp

cp    $SRC/JetTaggerNN.h   JetTaggerNN/NN/JetTaggerNN.h
sed -i "s/void JetTaggerNN(/namespace JetTaggerNN_v1 {\nvoid JetTaggerNN(/" JetTaggerNN/NN/JetTaggerNN.h
sed -i "s/#endif/}\n\n#endif/" JetTaggerNN/NN/JetTaggerNN.h

cp -r $SRC/nnet_utils   JetTaggerNN/NN/

cp    $SRC/parameters.h   JetTaggerNN/NN/
sed -i "s,// hls-fpga-machine-learning insert layer-config,namespace JetTaggerNN_v1 {\n// hls-fpga-machine-learning insert layer-config," JetTaggerNN/NN/parameters.h
sed -i "s/#endif/}\n\n#endif/" JetTaggerNN/NN/parameters.h

cp -r $SRC/weights    JetTaggerNN/NN/
for filename in JetTaggerNN/NN/weights/*.h; do
    sed -i '8 a namespace JetTaggerNN_v1 {' $filename
    echo '}' >> $filename
done

rm JetTaggerNN/NN/weights/*.txt

# change the way the weights are read
find ./JetTaggerNN/NN \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'