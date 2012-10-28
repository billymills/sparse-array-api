//filename:	SparseArray.cpp
//descrip:	implementation file for sparse array
//author:	Billy Mills
//date:		Fall 2012

#include "SparseArray.h"
#include <iostream>
#include <assert.h>
#include <string>

using std::cout;
using std::endl;

//constructor
template <typename T>
SparseArray<T>::SparseArray(int c, int r, T v){
	assert(c>0 && r>0);
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
	delete [] columns;
	delete [] rows;
}

template <typename T>
void SparseArray<T>::insert(int c, int r, T v){
	assert(c>=0 && c<numColumns);
	assert(r>=0 && r<numRows);
	Node<T>* newNode = new Node<T>(c, r, v);  //create new node to be inserted
	Node<T>** currCol = &columns[c]; //ptr to ptr to column array
	Node<T>** currRow = &rows[r]; //ptr to ptr to row array
	
	//check for right insertion point
	while(*currRow !=0 && (*currRow)->getColumnNum() < 0){
		currRow = &((*currRow)->getNextRight());
	}
	newNode->setNextRight(**currRow);
	*currRow = newNode;
	
	//check for down insertion point
	while(*currCol !=0 && (*currCol)->getRowNum() < 0){
		currCol = &((*currCol)->getNextDown());
	}
	newNode->setNextDown(**currCol);
	*currCol = newNode;
}

template <typename T>
T SparseArray<T>::access(int c, int r){
	assert(c>=0 && c<numColumns);
	assert(r>=0 && r<numRows);
	Node<T>** currCol = &columns[c];
	
	while((*currCol) != 0) {
		if((*currCol)->getColumnNum() == c && (*currCol)->getRowNum() == r){
			return (*currCol)->getValue();
		}
		currCol = &((*currCol)->getNextDown());
	}
	return defaultValue;
}

template <typename T>
void SparseArray<T>::remove(int c, int r){

	assert(c>=0 && c<numColumns);
	assert(r>=0 && r<numRows);
	
	//first deal with down pointers
	Node<T>** currCol = &columns[c];
	//if the column is not empty and the row doesn't match move to the next node
	while (*currCol !=0 && (*currCol)->getRowNum() != r){
		currCol = &((*currCol)->getNextDown());
	}
	//when the matching row is found reassign pointer
	Node<T>* colTemp = (*currCol)->getNextDown();
	(*currCol)=colTemp;
	
	//next deal with right pointers
	Node<T>** currRow = &rows[r];
	while(*currRow !=0 && (*currRow)->getColumnNum() != c){
		currRow = &((*currRow)->getNextRight());
	}	
	Node<T>* rowTemp = (*currRow)->getNextRight();
	(*currRow) = rowTemp;
}

template <typename T>
void SparseArray<T>::print(){
	assert(numColumns>0 && numRows>0);
	for (int i=0; i<numColumns; ++i) {
		for (int j=0; j<numRows; ++j) {
			cout << access(j,i) << " ";
		}
		cout << endl;
	}
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
template class SparseArray<double>;
template class SparseArray<std::string>;
