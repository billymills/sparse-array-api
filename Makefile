CPP = g++
CFLAGS = -Wall -Wextra

BUILD = ./build
TEST = ./test
TWODARRAY = ./src/TwoDArray
VECTORS = ./src/Vectors
TESTING = ./src/testing

all: $(BUILD)/array_test $(BUILD)/vector_test

$(BUILD)/array_test: $(TWODARRAY)/TwoDArray.cpp $(TWODARRAY)/TwoDArray.o
	cd $(TESTING); $(MAKE)

$(BUILD)/vector_test: $(VECTORS)/Vectors.cpp $(VECTORS)/Vectors.o
	cd $(TESTING); $(MAKE)

clean:
	cd $(TESTING); $(MAKE) clean
