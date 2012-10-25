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
		Node<T>* colPtr;
		Node<T>* rowPtr;

	public:
		Node<T>(int r, int c, T v); //constructor
		~Node<T>(); //destructor
		T getValue(); //return value stored in node 
		Node*& getNextRow();
		Node*& getNextColumn();
		void setNextRow(Node<T>& r);
		void setNextColumn(Node<T>& c);
		int getRowNum(); //return row number
		int getColumnNum(); //return column number

};

#endif
