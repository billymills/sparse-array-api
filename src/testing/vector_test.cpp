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
	newVector->insert(0,0,1);
	cout << newVector->access(0,0) << endl;
	newVector->print();
}
