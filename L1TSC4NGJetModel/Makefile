.PHONY: clean

L1TSC4NGJetModel.so: L1TSC4NGJetModel_emulator.o L1TSC4NGJetModel.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: NN/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm L1TSC4NGJetModel_emulator.o L1TSC4NGJetModel.o L1TSC4NGJetModel.so
