#include <iostream>
#include "Cat.h"
using namespace std;

CatClass::CatClass()
{

	cout << "Cat Created" << endl;
	string catName = "Cat";
	happy = true;

}

CatClass::~CatClass()
{

	cout << "Cat Destroyed" << endl;

}

void CatClass::catFunc()
{

	cout << "This came from the Cat.cpp file" << endl;

	if (happy)
	{
		cout << "Meowww" << endl;
	}
	else
	{
		cout << "Hisss!!" << endl;
	}
}

void CatClass::makeCatHappy()
{

	happy = true;

}

void CatClass::makeCatSad()
{

	happy = false;

}

string CatClass::outputName()
{

	return "Cat's name is " + catName;

}

void CatClass::setCatName(string newName)
{

	catName = newName;

}

