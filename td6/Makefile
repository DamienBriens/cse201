CXX = g++

Base.o: Base.cpp Base.hpp
	$(CXX) -c Base.cpp

Derived.o: Derived.cpp Derived.hpp Base.hpp
	$(CXX) -c Derived.cpp

main: Base.o Derived.o
	$(CXX) main.cpp
