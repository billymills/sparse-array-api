//filename:	TwoDArray.cpp
//descrip:	implementation file for 2D array
//author:	Billy Mills
//date:		Fall 2012

#include "TwoDArray.h"
#include <string>
#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

//constructor
template <typename T>
TwoDArray<T>::TwoDArray(int c, int r, T def){
	assert(r>0 && c>0);
	defaultValue = def;
	row = r;
	column = c;

	//create 2D array
	myArray = new T*[c];
	for(int i=0; i<c; ++i){
		myArray[i] = new T[r];
	}

	//next need to initialize array to default value;
	for(int j=0; j<c; ++j){
		for(int k=0; k<r; ++k){
			myArray[j][k] = def;
		}
	}	
}

//destructor
template <typename T>
TwoDArray<T>::~TwoDArray(){
	for(int i=0;i<column;++i){
		delete[] myArray[i];
	}
	delete[] myArray;
}

//return value a given indices
template <typename T>
T TwoDArray<T>::access(int c, int r){
	return myArray[c][r];
}

//insert the value v at index r, c
template <typename T>
void TwoDArray<T>::insert(int c, int r, T value){
	myArray[c][r] = value;
}

//set the value at index r, c back to default value
template <typename T>
void TwoDArray<T>::remove(int c, int r){
	myArray[c][r] = defaultValue;
}

//print the TwoDArray
template <typename T>
void TwoDArray<T>::print(){
	for(int i=0; i<column; ++i){

		for(int j=0; j<row; ++j){
			cout << access(i,j) << " ";
		}
		cout << endl;
	}
}

template <typename T>
int TwoDArray<T>::getNumRows(){
	return row;
}

template <typename T>
int TwoDArray<T>::getNumCols(){
	return column;
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
