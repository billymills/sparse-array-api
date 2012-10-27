#filename:	test/Makefile
#descrip:	makefile for test subdir
#author:	Billy Mills	
#date:		Fall 2012

CPP = g++
CFLAGS = -Wall -Wextra

BUILD = ../build
TEST = 	../test
LIB = ../lib
SRC = ../src
TWODARRAY = ../src/TwoDArray
VECTORS = ../src/Vectors
SPARSEARRAY = ../src/SparseArray
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

sparse_test: Sparse.cpp $(TWODARRAY)/TwoDArray.o $(VECTORS)/Vectors.o $(SPARSEARRAY)/SparseArray.o $(SPARSEARRAY)/Node.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o sparse_test Sparse.cpp $(TWODARRAY)/TwoDArray.o $(VECTORS)/Vectors.o $(SPARSEARRAY)/SparseArray.o $(SPARSEARRAY)/Node.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f sparse_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean
