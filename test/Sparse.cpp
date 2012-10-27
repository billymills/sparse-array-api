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
	TwoDArray<int>* newArray = new TwoDArray<int>(5,5,0);
	newArray->insert(2,3,4);
	newArray->remove(2,3);
	EXPECT_EQ(0, newArray->access(2,3));
	delete newArray;
}

TEST(TwoDArray, Access) {
	TwoDArray<std::string>* newArray = new TwoDArray<std::string>(20,20,"null");
	EXPECT_EQ("null", newArray->access(10,10));
	newArray->insert(15,17,"howdy");
	EXPECT_EQ("howdy", newArray->access(15,17));
	delete newArray;
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


TEST(Vectors, InsertInt) {
	Vectors<int>* newVector = new Vectors<int>(10, 10, 0);
	newVector->insert(4,5,5);
	EXPECT_EQ(5, newVector->access(4,5));
	delete newVector;
}

TEST(Vectors, InsertString) {
	Vectors<std::string>* newVector = new Vectors<std::string>(9, 18, "empty");
	newVector->insert(4,5,"hello");
	EXPECT_EQ("hello", newVector->access(4,5));
	delete newVector;
}

TEST(Vectors, InsertDouble) {
	Vectors<double>* newVector = new Vectors<double>(6, 7, 0.0);
	newVector->insert(4,5,5.5);
	EXPECT_EQ(5.5, newVector->access(4,5));
	delete newVector;
}

TEST(Vectors, Remove) {
	Vectors<int>* newVector = new Vectors<int>(5,5,0);
	newVector->insert(2,3,4);
	newVector->remove(2,3);
	EXPECT_EQ(0, newVector->access(2,3));
	delete newVector;
}

TEST(Vectors, Access) {
	Vectors<std::string>* newVector = new Vectors<std::string>(20,20,"null");
	EXPECT_EQ("null", newVector->access(10,10));
	newVector->insert(15,17,"howdy");
	EXPECT_EQ("howdy", newVector->access(15,17));
	delete newVector;
}

TEST(Vectors, Print) {
	Vectors<int>* newVector = new Vectors<int>(10,10,0);
	newVector->insert(1,2,1);
	newVector->insert(9,8,2);
	newVector->insert(7,2,3);
	newVector->insert(6,4,4);
	newVector->insert(0,8,5);
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





