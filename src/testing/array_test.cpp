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
	newArray->remove(1,1);
	cout << newArray->access(1,1) << endl;
	newArray->print();
	delete newArray;

	TwoDArray<std::string>* nextArray = new TwoDArray<std::string>(5,5, "hi");
	nextArray->insert(2,2, "bye");
	nextArray->print();
	delete nextArray;

}
