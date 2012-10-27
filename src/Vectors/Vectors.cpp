//filename:	Vectors.cpp
//descrip:	implementation file for vector of vectors
//author:	Billy Mills
//date:		Fall 2012

#include "Vectors.h"
#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;
using std::vector;

//constructor
template <typename T>
Vectors<T>::Vectors(int c, int r, T def){
	assert(r>0 && c>0);
	defaultValue = def;
	row = r;
	column = c;
	
	for(int i=0; i<c; ++i){
		myArray.push_back(vector<T>(r, defaultValue));
	}

}

//destructor
template <typename T>
Vectors<T>::~Vectors(){

}

//return value a given indices
template <typename T>
T Vectors<T>::access(int c, int r){
	return myArray[c][r];
}

//insert the value v at index c, r
template <typename T>
void Vectors<T>::insert(int c, int r, T value){
	assert(r>=0 && c>=0);
	myArray[c][r] = value;
}

//set the value at index c,r back to default value
template <typename T>
void Vectors<T>::remove(int c, int r){
	assert(r>=0 && c>=0);
	myArray[c][r] = defaultValue;
}

//print the TwoDArray
template <typename T>
void Vectors<T>::print(){
	assert(column>0 && row>0);
	for(int i=0; i<column; ++i){
		for(int j=0; j<row; ++j){
			cout << access(i,j) << " ";
		}
		cout << endl;
	}
}

template <typename T>
int Vectors<T>::getNumRows(){
	return row;
}

template <typename T>
int Vectors<T>::getNumCols(){
	return column;
}

template class Vectors<int>;
template class Vectors<double>;
template class Vectors<std::string>;
