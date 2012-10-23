CPP = g++
CFLAGS = -Wall -Wextra

BUILD = ../../build
TWODARRAY = ../TwoDArray
VECTORS = ../Vectors

all: $(BUILD)/array_test $(BUILD)/vector_test

$(BUILD)/array_test: array_test.cpp TwoDArray.o
	$(CPP) $(CFLAGS) -o $(BUILD)/array_test array_test.cpp TwoDArray.o

TwoDArray.o: $(TWODARRAY)/TwoDArray.h $(TWODARRAY)/TwoDArray.cpp
	$(CPP) $(CFLAGS) -c $(TWODARRAY)/TwoDArray.cpp

$(BUILD)/vector_test: vector_test.cpp Vectors.o
	$(CPP) $(CFLAGS) -o $(BUILD)/vector_test vector_test.cpp Vectors.o

Vectors.o: $(VECTORS)/Vectors.h $(VECTORS)/Vectors.cpp
	$(CPP) $(CFLAGS) -c $(VECTORS)/Vectors.cpp


clean:
	rm -f *.o
	rm -f *~
	rm -f $(TWODARRAY)/*.o
	rm -f $(TWODARRAY)/*~
	rm -f $(VECTORS)/*.o
	rm -f $(VECTORS)/*~
	rm -f $(BUILD)/array_test
	rm -f $(BUILD)/vector_test
