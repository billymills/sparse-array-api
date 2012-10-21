//filename:	TwoDArray.cpp
//descrip:	implementation file for 2D array
//author:	Billy Mills
//date:		Fall 2012

#include "TwoDArray.h"
#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

//constructor
template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def){
	//default = def;
	//cout << "in const" << endl;
	row = r;
	column = c;
	//create 2D array
	myArray = new T*[c];
	for(int i=0; i<c; ++i){
		myArray[i] = new T[r];
	}
	//cout << "array created" << endl;
	//next need to initialize array to default value;
	for(int j=0; j<c; ++j){
		//cout << "in initializer" << endl;
		for(int k=0; k<r; ++k){
			//cout << "in inner for" << endl;
			myArray[j][k] = def;
		}
	}	
}

//destructor
template <typename T>
TwoDArray<T>::~TwoDArray(){
	for(int i=0;i<row;++i){
		delete[] myArray[i];
	}
	delete[] myArray;
}

//return value a given indices
template <typename T>
T TwoDArray<T>::access(int r, int c){
	return myArray[r][c];
}

//insert the value v at index r, c
template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){
	myArray[c][r] = value;
}

//set the value at index r, c back to default value
template <typename T>
void TwoDArray<T>::remove(int r, int c){

}

//print the TwoDArray
template <typename T>
void TwoDArray<T>::print(){

}

template class TwoDArray<int>;
