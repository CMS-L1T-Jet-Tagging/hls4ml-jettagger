.PHONY: clean

L1TSC4NGJetModel_v0.so: L1TSC4NGJetModel_emulator_v0.o L1TSC4NGJetModel_v0.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: NN/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm L1TSC4NGJetModel_emulator_v0.o L1TSC4NGJetModel_v0.o L1TSC4NGJetModel_v0.so
