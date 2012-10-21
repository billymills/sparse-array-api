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
TwoDArray<T>::TwoDArray(int r, int c, T){
	T** myArray = new T*[c];
	for(int i=0; i<c; ++i){
		myArray[i] = new T[r];
	}
	//next need to initialize array to default value;	
}

//destructor
template <typename T>
TwoDArray<T>::~TwoDArray(){

}

//insert the value v at index r, c
template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){

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
