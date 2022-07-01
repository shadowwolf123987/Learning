#pragma once

#ifndef HEADER_H_ 
#define HEADER_H_

#include <iostream>

using namespace std;

class CatClass
{
private:
	bool happy = false;
	string catName;

public:
	void catFunc();
	void makeCatHappy();
	void makeCatSad();

	string outputName();
	void setCatName(string newName);

	CatClass(); // Constructor -  Constructors and Destructors must have the sme name as the class
	~CatClass(); //Destructor
};

#endif