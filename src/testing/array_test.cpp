//filename:	array_test.cpp
//descrip:	testing file for array implementation
//author:	Billy Mills
//date:		Fall 2012

#include <iostream>
#include "../TwoDArray/TwoDArray.h"

using std::cout;
using std::endl;

int main(){

	cout << "hello world" << endl;
	TwoDArray<int>* newArray = new TwoDArray<int>(10, 10, 0);
	
	cout << "array created" << endl;

	cout << newArray->access(1,1) << endl;
	delete newArray;	


	TwoDArray<int>* nextArray = new TwoDArray<int>(5,5,1);
	cout << nextArray->access(3,3) << endl;
	delete nextArray;

}
