//filename: SparseArray.h
//descrip:	header file for sparse array implementation
//author:	Billy Mills
//date:		Fall 2012

#ifndef __SPARSEARRAY_H__
#define __SPARSEARRAY_H__

#include <vector>
#include <string>
#include "Node.h"

template <typename T>
class SparseArray {

	private:
		int numRows;
		int numColumns;
		Node<T>** rows; //ptr to row array
		Node<T>** columns; //ptr to column array
		T defaultValue;

	public:
		SparseArray<T>(int c, int r, T v); //constructor
		~SparseArray<T>(); //destructor
		void insert(int c, int r, T v); //insert method
		T access(int c, int r); //return value at given indices
		void remove(int c, int r); //remove item at given indices
		void print(); //print out entire array
		int getNumRows();
		int getNumColumns();

};

#endif


