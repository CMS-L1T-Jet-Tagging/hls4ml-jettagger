.PHONY: clean

JetTaggerNN.so: JetTaggerNN_emulator.o JetTaggerNN.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: NN/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm JetTaggerNN_emulator.o JetTaggerNN.o JetTaggerNN.so