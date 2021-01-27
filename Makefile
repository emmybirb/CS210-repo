# Reference: https://makefiletutorial.com

CPP=g++ --std=c++11

all: fibonacci-recursive fibonacci-iterative

fibonacci-recursive: fibonacci-recursive.cpp
	$(CPP) fibonacci-recursive.cpp -o fibonacci-recursive

fibonacci-iterative: fibonacci-iterative.cpp
	$(CPP) fibonacci-iterative.cpp -o fibonacci-iterative
