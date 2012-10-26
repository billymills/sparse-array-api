//filename:	SparseArray.cpp
//descrip:	implementation file for sparse array
//author:	Billy Mills
//date:		Fall 2012

#include "SparseArray.h"
#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

//constructor
template <typename T>
SparseArray<T>::SparseArray(int c, int r, T v){
	numRows = r;
	numColumns = c;
	defaultValue = v;
	rows = new Node<T>*[numRows]; //new array for rows
	columns = new Node<T>*[numColumns]; //new array for columns
	
	//initialize all column ptrs to 0
	for(int i=0; i<numColumns; ++i){
		columns[i] = 0;
	}

	//initialize all row ptrs to 0
	for(int i=0; i<numRows; ++i){
		rows[i] = 0;
	}
}

template <typename T>
SparseArray<T>::~SparseArray(){

}

template <typename T>
void SparseArray<T>::insert(int c, int r, T v){
	//need an assert here to make sure indices are not out of bounds
	Node<T>* newNode = new Node<T>(c, r, v);  //create new node to be inserted
	Node<T>** currCol = &columns[c]; //ptr to ptr to column array
	Node<T>** currRow = &rows[r]; //ptr to ptr to row array
	/*
	//if curr equals zero, nothing in the row, newNode should be first item
	if(*currRow==0) { 
		*currRow = newNode;
	}
	//else the row is not empty so move through

	else {  
		while(*currRow != 0) {
			//if current column num is less than newNode col keep moving
			if ((*currRow)->getColumnNum() < c && (*currRow)->getNextRight() != 0){
				currRow = &(*currRow)->getNextRight();
			}
			//when current column num is greater than newNode col
			else {
				(*currRow)->setNextRight(newNode);
			}
		}
	}
	*/
	while(*currRow !=0 && (*currRow)->getColumnNum() < 0){
		currRow = &((*currRow)->getNextRight());
	}

	newNode->setNextRight(**currRow);
	*currRow = newNode;

	if(*currCol==0) {
		*currCol = newNode;
	}
	else {
		while(*currCol != 0 && (*currCol)->getValue() < v) {
			currCol = &(*currCol)->getNextRight();
		}
		*currCol = newNode;
	}
}

template <typename T>
T SparseArray<T>::access(int c, int r){
	Node<T>** currCol = &columns[c];
	while((*currCol) != 0) {
		if((*currCol)->getColumnNum() == c && (*currCol)->getRowNum() == r){
			return (*currCol)->getValue();
		}
	}
}

template <typename T>
void SparseArray<T>::remove(int c, int r){

}

template <typename T>
void SparseArray<T>::print(){

}

template <typename T>
int SparseArray<T>::getNumRows(){
	return numRows;
}

template <typename T>
int SparseArray<T>::getNumColumns(){
	return numColumns;
}

template class SparseArray<int>;
