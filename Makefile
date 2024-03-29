CPP = g++
CFLAGS = -Wall -Wextra

BUILD = ./build
TEST = ./test
TWODARRAY = ./src/TwoDArray
VECTORS = ./src/Vectors
SPARSEARRAY = ./src/SparseArray
TESTING = ./src/testing

all: $(BUILD)/array_test $(BUILD)/vector_test $(BUILD)/sparse_array_test $(TEST)/sparse_test

$(BUILD)/array_test: $(TWODARRAY)/TwoDArray.cpp $(TWODARRAY)/TwoDArray.o
	cd $(TESTING); $(MAKE)

$(BUILD)/vector_test: $(VECTORS)/Vectors.cpp $(VECTORS)/Vectors.o
	cd $(TESTING); $(MAKE)

$(BUILD)/sparse_array_test: $(SPARSEARRAY)/SparseArray.cpp $(SPARSEARRAY)/SparseArray.o $(SPARSEARRAY)/Node.cpp $(SPARSEARRAY)/Node.o
	cd $(TESTING); $(MAKE)

$(TEST)/sparse_test: $(TEST)/Sparse.cpp $(TWODARRAY)/TwoDArray.o $(VECTORS)/Vectors.o $(SPARSEARRAY)/SparseArray.o $(SPARSEARRAY)/Node.o
	cd $(TEST); $(MAKE)

clean:
	cd $(TESTING); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
