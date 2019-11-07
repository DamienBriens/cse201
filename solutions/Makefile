OBJ_FILES := $(wildcard *.cpp)

CXX = g++

ALL: testComplex asciibrot vehicle

%.o: %.cpp
	g++ -c -o $@ $<

testComplex: testComplex.o Complex.o Complex.hpp
	$(CXX) Complex.o testComplex.o -o testComplex

asciibrot: asciibrot.o Complex.o Complex.hpp
	$(CXX) Complex.o asciibrot.o -o asciibrot

vehicle: Vehicle.o
	$(CXX) Vehicle.cpp -o Vehicle


clean:
	rm -f testComplex Vehicle asciibrot
	rm -f *.o
