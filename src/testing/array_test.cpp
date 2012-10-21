//filename:	array_test.cpp
//descrip:	testing file for array implementation
//author:	Billy Mills
//date:		Fall 2012

#include <iostream>
#include "../TwoDArray/TwoDArray.h"

using std::cout;
using std::endl;

int main(){

	TwoDArray<int>* newArray = new TwoDArray<int>(10, 10, 0);

	newArray->insert(1,1,5);
	cout << newArray->access(1,1) << endl;
	delete newArray;

}
