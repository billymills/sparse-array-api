//filename:	TwoDArray.h
//descrip:	header file
//author:	Billy Mills
//date:		Fall 2012

#ifndef __TWODARRAY_H__	
#define __TWODARRAY_H__	

template <typename T>
class TwoDArray{

	private:
		T** myArray;
		T defaultValue;
		int row;
		int column;

	public:
		TwoDArray<T>(int c, int r, T def); //constructor
		~TwoDArray<T>(); //destructor
		void insert(int c, int r, T value); //insert element of type T at given indices
		T access(int c, int r); //return value of type T at given indices
		void remove(int c, int r); //remove element at given indices
		void print(); //print the array
		int getNumRows(); //getter for iteration
		int getNumCols(); //getter for iteration

};

#endif
