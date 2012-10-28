//filename:	Sparse.cpp
//descrip:	implementation file for google tests
//author:	Billy Mills
//date:		Fall 2012

#include "gtest/gtest.h"
#include "../src/TwoDArray/TwoDArray.h"
#include "../src/Vectors/Vectors.h"
#include "../src/SparseArray/SparseArray.h"
#include "../src/SparseArray/Node.h"
#include <string>

TEST(TwoDArray, Insert) {
	TwoDArray<int>* newInt = new TwoDArray<int>(10,10,0);
	newInt->insert(5,5,5);
	EXPECT_EQ(5, newInt->access(5,5));
	delete newInt;

	TwoDArray<std::string>* newString = new TwoDArray<std::string>(10,10,"null");
	newString->insert(5,5,"yo");
	EXPECT_EQ("yo", newString->access(5,5));
	delete newString;

	TwoDArray<double>* newDouble = new TwoDArray<double>(10,10,0.0);
	newDouble->insert(5,5,5.5);
	EXPECT_EQ(5.5, newDouble->access(5,5));
	delete newDouble;
}

TEST(TwoDArray, Remove) {
	TwoDArray<int>* newInt = new TwoDArray<int>(5,5,0);
	newInt->insert(2,3,4);
	newInt->remove(2,3);
	EXPECT_EQ(0, newInt->access(2,3));
	delete newInt;

	TwoDArray<double>* newDouble = new TwoDArray<double>(3,4,1.0);
	newDouble->insert(2,1,4.4);
	newDouble->remove(2,1);
	EXPECT_EQ(1.0, newDouble->access(2,3));
	delete newDouble;

	TwoDArray<std::string>* newString = new TwoDArray<std::string>(100,200,"empty");
	newString->insert(48, 68, "hello");
	newString->remove(2,3);
	EXPECT_EQ("hello", newString->access(48,68));
	delete newString;
}

TEST(TwoDArray, Access) {
	TwoDArray<int>* newInt = new TwoDArray<int>(24,67,5);
	EXPECT_EQ(5, newInt->access(10,10));
	newInt->insert(15,17,100);
	EXPECT_EQ(100, newInt->access(15,17));
	delete newInt;

	TwoDArray<double>* newDouble = new TwoDArray<double>(33,54,5.6);
	EXPECT_EQ(5.6, newDouble->access(12,24));
	newDouble->insert(13,15,7.8);
	EXPECT_EQ(7.8, newDouble->access(13,15));
	delete newDouble;
	
	TwoDArray<std::string>* newString = new TwoDArray<std::string>(20,20,"null");
	EXPECT_EQ("null", newString->access(10,10));
	newString->insert(15,17,"howdy");
	EXPECT_EQ("howdy", newString->access(15,17));
	delete newString;
}

TEST(TwoDArray, GetNumRows) {
	TwoDArray<int>* newArray = new TwoDArray<int>(7,8,0);
	EXPECT_EQ(8, newArray->getNumRows());
	delete newArray;

	TwoDArray<double>* newDouble = new TwoDArray<double>(80,80,0.0);
	EXPECT_EQ(80, newDouble->getNumRows());
	delete newDouble;

	TwoDArray<std::string>* newString = new TwoDArray<std::string>(49,78,"hi");
	EXPECT_EQ(78, newString->getNumRows());
	delete newString;
}

TEST(TwoDArray, GetNumCols) {
	TwoDArray<int>* newArray = new TwoDArray<int>(7,8,0);
	EXPECT_EQ(7, newArray->getNumCols());
	delete newArray;
	
	TwoDArray<double>* newDouble = new TwoDArray<double>(562,786,1.2);
	EXPECT_EQ(562, newDouble->getNumCols());
	delete newDouble;

	TwoDArray<std::string>* newString = new TwoDArray<std::string>(5,6, "bye");
	EXPECT_EQ(5, newString->getNumCols());
	delete newString;
}

TEST(TwoDArray, Print) {
	TwoDArray<int>* newArray = new TwoDArray<int>(10,10,0);
	newArray->insert(1,2,1);
	newArray->insert(9,8,2);
	newArray->insert(7,2,3);
	newArray->insert(6,4,4);
	newArray->insert(0,8,5);
	newArray->print();
	delete newArray;
}


TEST(Vectors, Insert) {
	Vectors<int>* newInt = new Vectors<int>(10, 10, 0);
	newInt->insert(4,5,5);
	EXPECT_EQ(5, newInt->access(4,5));
	delete newInt;

	Vectors<std::string>* newString = new Vectors<std::string>(9, 18, "empty");
	newString->insert(4,5,"hello");
	EXPECT_EQ("hello", newString->access(4,5));
	delete newString;

	Vectors<double>* newDouble = new Vectors<double>(6, 7, 0.0);
	newDouble->insert(4,5,5.5);
	EXPECT_EQ(5.5, newDouble->access(4,5));
	delete newDouble;
}

TEST(Vectors, Remove) {
	Vectors<int>* newVector = new Vectors<int>(5,5,0);
	newVector->insert(2,3,4);
	newVector->remove(2,3);
	EXPECT_EQ(0, newVector->access(2,3));
	delete newVector;
	
	Vectors<double>* newDouble = new Vectors<double>(5,5,0.0);
	newDouble->insert(2,3,4.4);
	newDouble->remove(2,3);
	EXPECT_EQ(0.0, newDouble->access(2,3));
	delete newDouble;
	
	Vectors<std::string>* newString = new Vectors<std::string>(5,5,"empty");
	newString->insert(2,3,"yes");
	newString->remove(2,3);
	EXPECT_EQ("empty", newString->access(2,3));
	delete newString;
}

TEST(Vectors, Access) {
	Vectors<std::string>* newVector = new Vectors<std::string>(20,20,"null");
	EXPECT_EQ("null", newVector->access(10,10));
	newVector->insert(15,17,"howdy");
	EXPECT_EQ("howdy", newVector->access(15,17));
	delete newVector;

	Vectors<int>* newInt = new Vectors<int>(20,21,0);
	EXPECT_EQ(0, newInt->access(10,10));
	newInt->insert(15,17,90);
	EXPECT_EQ(90, newInt->access(15,17));
	delete newInt;

	Vectors<double>* newDouble = new Vectors<double>(21,20,0.0);
	EXPECT_EQ(0.0, newDouble->access(10,10));
	newDouble->insert(15,17,4.5);
	EXPECT_EQ(4.5, newDouble->access(15,17));
	delete newDouble;
}

TEST(Vectors, GetNumRows) {
	Vectors<int>* newVector = new Vectors<int>(7,8,0);
	EXPECT_EQ(8, newVector->getNumRows());
	delete newVector;
}

TEST(Vectors, GetNumCols) {
	Vectors<int>* newVector = new Vectors<int>(7,8,0);
	EXPECT_EQ(7, newVector->getNumCols());
	delete newVector;
}

TEST(Vectors, Print) {
	Vectors<std::string>* newVector = new Vectors<std::string>(15,15,"oo");
	newVector->insert(1,2,"xx");
	newVector->insert(9,8,"xx");
	newVector->insert(7,2,"xx");
	newVector->insert(6,4,"xx");
	newVector->insert(0,8,"xx");
	newVector->insert(10,12,"xx");
	newVector->insert(3,5,"xx");
	newVector->print();
	delete newVector;
}

//test insert into sparse array of int, double, string
TEST(Sparse, Insert) {
	SparseArray<int>* newInt= new SparseArray<int>(5,5,0);
	newInt->insert(0,0,5);
	EXPECT_EQ(5, newInt->access(0,0));
	delete newInt;

	SparseArray<double>* newDouble = new SparseArray<double>(5,6,0.0);
	newDouble->insert(2,4,6.5);
	EXPECT_EQ(6.5, newDouble->access(2,4));
	delete newDouble;
	
	SparseArray<std::string>* newString = new SparseArray<std::string>(7,8,"null");
	newString->insert(4,3,"howdy");
	EXPECT_EQ("howdy", newString->access(4,3));
	delete newString;
}

TEST(Sparse, Remove) {
	SparseArray<int>* newSparse = new SparseArray<int>(5,5,0);
	newSparse->insert(2,3,4);
	newSparse->remove(2,3);
	EXPECT_EQ(0, newSparse->access(2,3));
	delete newSparse;
	
/*
	SparseArray<int>* newArray = new SparseArray<int>(5,5,0);
	newArray->insert(4,4,1);
	newArray->remove(4,4);
	EXPECT_EQ(1, newArray->access(0,0));
*/

	SparseArray<double>* newDouble = new SparseArray<double>(5,7,0.0);
	newDouble->insert(2,3,4.9);
	newDouble->remove(2,3);
	EXPECT_EQ(0.0, newDouble->access(2,3));
	delete newDouble;

	SparseArray<std::string>* newString = new SparseArray<std::string>(321,678,"yes");
	newString->insert(2,3,"no");
	newString->remove(2,3);
	EXPECT_EQ("yes", newString->access(2,3));
	delete newString;
}

TEST(Sparse, Access) {
	SparseArray<std::string>* newSparse = new SparseArray<std::string>(20,20,"null");
	EXPECT_EQ("null", newSparse->access(10,10));
	newSparse->insert(15,17,"howdy");
	EXPECT_EQ("howdy", newSparse->access(15,17));
	delete newSparse;

	SparseArray<int>* newInt = new SparseArray<int>(20,20,7);
	EXPECT_EQ(7, newInt->access(10,10));
	newInt->insert(15,17,14);
	EXPECT_EQ(14, newInt->access(15,17));
	delete newInt;
	
	SparseArray<double>* newDouble = new SparseArray<double>(20,20,5.5);
	EXPECT_EQ(5.5, newDouble->access(10,10));
	newDouble->insert(15,17,6.6);
	EXPECT_EQ(6.6, newDouble->access(15,17));
	delete newDouble;
}

TEST(Sparse, GetNumRows) {
	SparseArray<int>* newSparse = new SparseArray<int>(7,8,0);
	EXPECT_EQ(8, newSparse->getNumRows());
	delete newSparse;
}

TEST(Sparse, GetNumCols) {
	SparseArray<int>* newSparse = new SparseArray<int>(114,35,0);
	EXPECT_EQ(114, newSparse->getNumColumns());
	delete newSparse;
}

TEST(Sparse, Print) {
	SparseArray<double>* newSparse = new SparseArray<double>(25,25,1.1);
	newSparse->insert(1,2,1.2);
	newSparse->insert(9,8,2.2);
	newSparse->insert(7,2,3.3);
	newSparse->insert(6,4,4.4);
	newSparse->insert(0,8,5.5);
	newSparse->insert(19,14,6.6);
	newSparse->insert(20,20,7.7);
	newSparse->insert(14,6,8.8);
	newSparse->insert(24,24,9.9);
	newSparse->print();
	delete newSparse;
}





