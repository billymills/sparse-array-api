//filename:	Node.cpp
//descrip:	node implementation file
//author:	Billy Mills
//date:		Fall 2012

#include <string>
#include <vector>
#include "Node.h"

template <typename T>
Node<T>::Node(int r, int c, T v){
	value = v;
	row = r;
	column= c;
	rowPtr = 0;
	colPtr = 0;
}

template <typename T>
Node<T>::~Node(){

}

template <typename T>
T Node<T>::getValue(){
	return value;
}

template <typename T>
Node<T>*& Node<T>::getNextColumn(){
	return colPtr;
}

template <typename T>
Node<T>*& Node<T>::getNextRow(){
	return rowPtr;
}

template <typename T>
void Node<T>::setNextRow(Node<T>& r){
	rowPtr = &r;
}

template <typename T>
void Node<T>::setNextColumn(Node<T>& c){
	colPtr = &c;
}

template <typename T>
int Node<T>::getRowNum(){
	return row;
}

template <typename T>
int Node<T>::getColumnNum(){
	return column;
}

template class Node<int>;
template class Node<std::string>;
