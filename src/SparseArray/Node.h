//filename:	Node.h
//descrip:	node header file
//author:	Billy Mills
//date:		Fall 2012

#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
	private:
		int row;
		int column;
		T value;
		Node<T>* rightPtr;
		Node<T>* downPtr;

	public:
		Node<T>(int r, int c, T v); //constructor
		~Node<T>(); //destructor
		T getValue(); //return value stored in node 
		Node*& getNextRight();
		Node*& getNextDown();
		void setNextRight(Node<T>& r);
		void setNextDown(Node<T>& d);
		int getRowNum(); //return row number
		int getColumnNum(); //return column number

};

#endif
