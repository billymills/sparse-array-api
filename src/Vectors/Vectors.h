//filename:	Vectors.h
//descrip:	header file
//author:	Billy Mills
//date:		Fall 2012

#ifndef __VECTORS_H__	
#define __VECTORS_H__

#include <vector>

using std::vector;	

template <typename T>
class Vectors{
	private:
		vector<vector<T> > myArray;
		T defaultValue;
		int row;
		int column;
	public:
		Vectors<T>(int r, int c, T def); //constructor
		~Vectors<T>(); //destructor
		void insert(int r, int c, T value); //insert element of type T at given indices
		T access(int r, int c); //return value of type T at given indices
		void remove(int r, int c); //remove element at given indices
		void print(); //print the array
		int getNumRows(); //getter for iteration
		int getNumCols(); //getter for iteration
};

#endif
