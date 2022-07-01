#include "Person.h"
#include <sstream>

Person::Person()//: name("undefined"), age(0)
{

	name = "undefined";
	age = 0;

}

string Person::personInfo()
{

	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "\n \n";
	ss << "Age: ";
	ss << age;

	return ss.str();

}