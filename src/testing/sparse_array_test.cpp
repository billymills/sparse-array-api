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
	SparseArray<int>* newSparse = new SparseArray<int>(5,5,0);
	newSparse->insert(0,0,5);
	newSparse->insert(1,0,10);
	newSparse->insert(4,4,15);
	newSparse->insert(0,1,20);
	cout << newSparse->access(0,0) << endl;
	cout << newSparse->access(1,0) << endl;
	cout << newSparse->access(4,4) << endl;
	cout << newSparse->access(0,1) << endl;

	//delete newSparse;
	return 0;
}
