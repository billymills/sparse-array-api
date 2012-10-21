CPP = g++
CFLAGS = -Wall -Wextra

BUILD = ./build
TEST = ./test
TWODARRAY = ./src/TwoDArray
TESTING = ./src/testing

all: $(BUILD)/array_test

$(BUILD)/array_test: $(TWODARRAY)/TwoDArray.cpp $(TWODARRAY)/TwoDArray.o
	cd $(TESTING); $(MAKE)

clean:
	cd $(TESTING); $(MAKE) clean
