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
Vectors<T>::Vectors(int r, int c, T def){
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
	//delete myArray;
}

//return value a given indices
template <typename T>
T Vectors<T>::access(int r, int c){
	return myArray[r][c];
}

//insert the value v at index r, c
template <typename T>
void Vectors<T>::insert(int r, int c, T value){
	myArray[c][r] = value;
}

//set the value at index r, c back to default value
template <typename T>
void Vectors<T>::remove(int r, int c){
	myArray[c][r] = defaultValue;
}

//print the TwoDArray
template <typename T>
void Vectors<T>::print(){
	for(int i=0; i<column; ++i){

		for(int j=0; j<row; ++j){
			cout << myArray[i][j];
		}
		cout << endl;
	}
}

template class Vectors<int>;
template class Vectors<std::string>;
