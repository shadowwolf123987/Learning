
//https://www.udemy.com/course/free-learn-c-tutorial-beginners/learn/lecture/1747896#overview

/*
#include <iostream>
using namespace std;

int main()
{

	cout << "Test1" << flush;
	return 0; //Returns error code 0 which means its working normally, not required

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	string testString = "test";

	cout << testString << endl;

	return 0;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	
	cout << "Enter Number: " << flush;

	int userInput;

	cin >> userInput;

	cout << userInput + 1;

	return 0;

}
*/

/*
#include <iostream>
#include <limits>
using namespace std;

int main()
{

	cout << INT_MAX << endl;
	cout << INT_MIN << endl;

	long int lvalue = 234657243;
	cout << lvalue << endl;

	short int svalue = 23434;
	cout << svalue << endl;

	cout << sizeof(57423) << endl;

	unsigned int positiveNum = 4588; //Can only be positive
	signed int negeativeNum = -7864; //Can only be negative

	return 0;

}
*/

/*
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float fvalue = 72.3;
	float fvalueStandardForm = 203.46364;

	cout << fvalue << endl;
	cout << fixed << fvalueStandardForm << endl;
	cout << scientific << fvalueStandardForm << endl;

	cout << setprecision(15) << fixed << fvalueStandardForm << endl;

	double dvalue = 234.4; // stores 15 significant digits
	cout << setprecision(20) << fixed << dvalue << endl; //Messes up when exceeds digits held by dvalue (15 digits)

	long double ldvalue = 156.347837482;
	cout << setprecision(15) << fixed << ldvalue << endl;

	return 0;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	bool bvalue = true;

	char cvalue = 88; //Output is what the cvalue corresponds to in the ASCII table (255 characters)
	cout << cvalue << endl;

	char cvalue2 = 'X';
	cout << (int)cvalue2 << endl; //Outputs cvalue2's position in the ASCII table / casting

	wchar_t wchar = 'i'; //Used for representing characters that exceed the range of the ASCII table

	return 0;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	string password = "password";
	cout << "Enter your password: " << endl;

	string input;
	cin >> input;

	if (password == input)
	{
		cout << "Password Correct" << endl;
	}

	else if (input == "hello")
	{
		cout << "hi" << endl;
	}

	else
	{
		cout << "Password Incorrect" << endl;
	}

}
*/

/*
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float fvalue = 1.1;
	if (fvalue == 1.1)
	{
		cout << "Equals 1.1" << endl;
	}
	else
	{
		cout << "Doesnt equal 1.1" << endl;
	}

	if (fvalue < 1.11 and fvalue >= 1.10)
	{
		cout << "Less than 1.11 and More than 1.10" << endl;
	}

	cout << setprecision(10) << fvalue << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	int num = 1;
	while (num < 11)
	{
		cout << num << endl;
		num += 1;
	}

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	string password = "password";
	string input;

	do
	{

		cout << "Enter your password: " << endl;
		cin >> input;
		if (password != input)
		{
			cout << "Password Incorrect" << endl;
		}

	} while (password != input);

	cout << "Password Correct" << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	for (int count = 0; count < 10; count += 1)
	{
		cout << count << endl;
	}

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	string password = "password";
	string input;

	do
	{

		cout << "Enter your password: " << endl;
		cin >> input;
		if (password == input)
		{
			break;
		}
		else
		{
			cout << "Password Incorrect" << endl;
		}

	} while (password != input);

	cout << "Password Correct" << endl;


}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	int values[3];

	values[0] = 100;
	values[1] = 200;
	values[2] = 300;

	cout << values[0] << endl << values[2] << endl << values[1] << endl;

	string animals[2][3] = 
	{
		
		{"wolf","lion","hyena"},
		{"cow","horse","rabbit"}

	};

	cout << "\n" << animals[0][0] << endl;
	cout << animals[1][2] <<"\n"<< endl;

	cout << sizeof(values) << endl;
	cout << (sizeof(values)) / 4 << endl;

	cout << sizeof(animals) << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	int value = 2;
	switch (value)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		cout << "Unrecognised Value" << endl;
	}

}
*/

/*
#include <iostream>
using namespace std;

void functionThatDoesntReturnAValue() //A Function that doesnt return a value
{

	int returnValue = 3;
	cout << "This is produced by a function" << endl;

}

string functionThatReturnsAValue()
{

	string returnValue = "This is a value returned from a function";

	return returnValue;

}

int main()
{
	
	functionThatDoesntReturnAValue();

	string returnValue = functionThatReturnsAValue();

	cout << returnValue << endl;

}
*/

/*
#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{

	CatClass cat1;

	cat1.catFunc();

}
*/

/*
#include <iostream>
#include <sstream>
using namespace std;

int main()
{

	int num = 18;
	bool boolean = true;
	float decimal = 1.78;
	string sentence = "An example of a stringstream ";

	stringstream ss;
	ss << sentence;
	ss << boolean;
	ss << ", ";
	ss << decimal;
	ss << " and ";
	ss << num;
	cout << ss.str() << endl;

}
*/

/*
#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{

	{
		CatClass cat1; //The scope of this variable is the nearest curl brackets so when it hits the end bracket, it is destroyed to free memory and the deconstructor is triggered
		CatClass cat2;

		cat1.catFunc();
		cat2.makeCatSad();
		cat2.catFunc();
	}

}
*/

/*
#include <iostream>
#include "Person.h"
using namespace std;

int main()
{

	Person person1("Bob",25);

	cout << person1.personInfo() << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	int num = 5;
	int* pointerNum = &num;

	cout << "Memory location of number is " << pointerNum << endl;
	cout << "Number via memory location is " << *pointerNum << endl;


}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	double value1 = 7/2; //one number has to be a double or it will discard the remainder
	double value2 = 7 / 2.0; //Won't work if using 2 variables
	double value3 = (double)7 / 2; //Casting - works if using 2 variables as well
	int value4 = 12 % 5; //Divides by 5 and returns the remainder

	cout << value1 << endl;
	cout << value2 << endl;
	cout << value3 << endl;
	cout << value4 << endl;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{

	int value1 = 5;
	int value2 = value1;
	int& value3 = value1;

	cout << value1 << endl;
	cout << value2 << endl;
	cout << value3 << endl;

	value3 = 10;
	cout << "Value 3 is " << value3 << endl;
	cout << "Value 1 is " << value1 << endl; // changing value 3 also changes value 1 as l


}
*/

/*
#include <iostream>
using namespace std;

class Animal
{
private:
	string name;
public:
	Animal() { cout << "Animal created" << endl; };
	Animal(const Animal& other): name(other.name) { cout << "Animal created using a copy constructor" << endl; };
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is " << name << endl; }

};

int main()
{

	Animal animal1;

	animal1.setName("Freddy");

	Animal animal2 = animal1;
	animal2.speak();

	animal1.speak();

}
*/

/*
#include <iostream>
using namespace std;

class Animal
{
private:
	string name;
public:

	Animal()
	{
		cout << "Animal created" << endl;
	}

	void setName( string name )
	{
		cout << "My name is " << name << endl;
	}

	~Animal()
	{
		cout << "Animal destroyed" << endl;
	}

};

int main()
{

	Animal *pointerAnimal = new Animal[10];
	pointerAnimal[5].setName("George");

	delete [] pointerAnimal;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{



}
*/

