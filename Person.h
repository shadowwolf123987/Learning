#pragma once

#include <iostream>
using namespace std;

class Person
{

private:
	string name;
	int age;
public:
	Person();
	Person(string newName, int newAge) { name = newName; age = newAge; };
	string personInfo();

};

