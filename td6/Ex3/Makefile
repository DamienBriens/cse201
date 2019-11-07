CXX = g++

Shape.o: Shape.cpp Shape.hpp
	$(CXX) -c Shape.cpp

Polygon.o: Polygon.cpp Polygon.hpp Shape.hpp
	$(CXX) -c Polygon.cpp

testGeometry.o: Polygon.cpp Polygon.hpp
	$(CXX) -c testGeometry.cpp

testGeometry: Shape.o Polygon.o
	$(CXX) Shape.o Polygon.o testGeometry.o
