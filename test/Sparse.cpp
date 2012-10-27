//filename:	Sparse.cpp
//descrip:	implementation file for google tests
//author:	Billy Mills
//date:		Fall 2012

#include "gtest/gtest.h"
#include "../src/TwoDArray/TwoDArray.h"
#include "../src/Vectors/Vectors.h"
#include <string>

TEST(TwoDArray, InsertInt) {
	TwoDArray<int>* newArray = new TwoDArray<int>(10,10,0);
	newArray->insert(5,5,5);
	EXPECT_EQ(5, newArray->access(5,5));
	delete newArray;
}

TEST(TwoDArray, InsertString) {
	TwoDArray<std::string>* newArray = new TwoDArray<std::string>(10,10,"null");
	newArray->insert(5,5,"yo");
	EXPECT_EQ("yo", newArray->access(5,5));
	delete newArray;
}

TEST(TwoDArray, InsertDouble) {
	TwoDArray<double>* newArray = new TwoDArray<double>(10,10,0.0);
	newArray->insert(5,5,5.5);
	EXPECT_EQ(5.5, newArray->access(5,5));
	delete newArray;
}

TEST(TwoDArray, Remove) {
	TwoDArray<int>* newArray = new TwoDArray<int>(5,5,1);
	newArray->insert(2,3,4);
	newArray->remove(2,3);
	EXPECT_EQ(1, newArray->access(2,3));
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


TEST(Vectors, Insert) {
	Vectors<int>* newVector = new Vectors<int>(10, 10, 0);
	newVector->insert(5,5,5);
	delete newVector;
}

//TEST(Vectors, Remove) {

//}

//TEST(Vectors, Print) {

//}


