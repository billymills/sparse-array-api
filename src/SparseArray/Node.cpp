//filename:	Node.cpp
//descrip:	node implementation file
//author:	Billy Mills
//date:		Fall 2012

#include <string>
#include <vector>
#include "Node.h"

template <typename T>
Node<T>::Node(int c, int r, T v){
	value = v;
	row = r;
	column= c;
	rightPtr = 0;
	downPtr = 0;
}

template <typename T>
Node<T>::~Node(){

}

template <typename T>
T Node<T>::getValue(){
	return value;
}

template <typename T>
Node<T>*& Node<T>::getNextRight(){
	return rightPtr;
}

template <typename T>
Node<T>*& Node<T>::getNextDown(){
	return downPtr;
}

template <typename T>
void Node<T>::setNextRight(Node<T>& r){
	rightPtr = &r;
}

template <typename T>
void Node<T>::setNextDown(Node<T>& d){
	downPtr = &d;
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
template class Node<double>;
template class Node<std::string>;
