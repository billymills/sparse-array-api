//filename: vector_test.cpp
//descrip:	testing file for vector of vector implementation
//author:	Billy Mills
//date:		Fall 2012

#include <iostream>
#include "../Vectors/Vectors.h"

using std::cout;
using std::endl;

int main(){
	Vectors<int>* newVector = new Vectors<int>(10,10,0);
	for (int i=0; i<10; ++i){
		for (int j=0; j<10; ++j){
			newVector->insert(i, j, 5);
		}
	}
	newVector->print();
	
	for (int i=0; i<10; ++i){
		for (int j=0; j<10; ++j){
			newVector->remove(i, j);
		}
	}
	newVector->print();
	delete newVector;
	return 0;
}
