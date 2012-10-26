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
SparseArray<T>::SparseArray(int r, int c, T v){
	numRows = r;
	numColumns = c;
	defaultValue = v;
	rows = new Node<T>*[numRows]; //new array for rows
	columns = new Node<T>*[numColumns]; //new array for columns
	
	for(int i=0; i<numColumns; ++i){
		columns[i] = 0;
	}

	for(int i=0; i<numRows; ++i){
		rows[i] = 0;
	}
}

template <typename T>
SparseArray<T>::~SparseArray(){

}

template <typename T>
void SparseArray<T>::insert(int r, int c, T v){
	
	Node<T>* newNode = new Node<T>(r, c, v);
	Node<T>** currCol = &columns[c];
	Node<T>** currRow = &rows[r];
	if(*currRow==0) {
		*currRow = newNode;
	}
	if(*currCol==0) {
		*currCol = newNode;
	}
	//else {
	//	//its not the first element
	//	Node<T>* curr = newSparse[c];
	//	while (newSparse[c]->getNext);
	//}

}

template <typename T>
T SparseArray<T>::access(int r, int c){
	Node<T>** currCol = &columns[c];
	while((*currCol) != 0) {
		if((*currCol)->getColumnNum() == c && (*currCol)->getRowNum() == r){
			return (*currCol)->getValue();
		}
	}
}

template <typename T>
void SparseArray<T>::remove(int r, int c){

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
