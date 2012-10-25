//filename:	sparse_array_test.cpp
//descrip:	test file for true sparse array
//author:	Billy Mills
//date:		Fall 2012

#include <iostream>
#include <assert.h>

#include "../SparseArray/Node.h"
#include "../SparseArray/SparseArray.h"


using std::cout;
using std::endl;

int main(){
	SparseArray<int>* newSparse = new SparseArray<int>(10,10,1);
	cout << newSparse->getNumRows() << endl;
	cout << newSparse->getNumColumns() << endl;
	cout << newSparse->access(0,0) << endl;
	//delete newSparse;
	return 0;
}
