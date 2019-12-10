// A program to demonstrate the use of stringstream
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string s = "12345";

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value 12345 and stream
	// it to the integer x
	int x = 0;
	geek >> x;

	// Now the variable x holds the value 12345
	cout << "Value of x : " << x;

	return 0;
}

#include<stdio.h>
int main()
{
	const char *str = "12345";
	int x;
	sscanf(str, "%d", &x);
	printf("\nThe value of x : %d", x);
	return 0;
}

// C++ code to demonstrate "to_string()" method
// to convert number to string.
#include<iostream>
#include<string> // for string and to_string()
using namespace std;
int main()
{
	// Declaring integer
	int i_val = 20;

	// Declaring float
	float f_val = 30.50;

	// Conversion of int into string using
	// to_string()
	string stri = to_string(i_val);

	// Conversion of float into string using
	// to_string()
	string strf = to_string(f_val);

	// Displaying the converted strings
	cout << "The integer in string is : ";
	cout << stri << endl;
	cout << "The float in string is : ";
	cout << strf << endl;

	return 0;
}


string Text = "456";
int Number;
if ( ! (istringstream(Text) >> Number) ) Number = 0;

int number = 123;
string text = to_string(number);

text = "456"
number = stoi(number);


//////////////////
template <typename T>
  string NumberToString ( T Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }
Usage: NumberToString ( Number );

template <typename T>
  T StringToNumber ( const string &Text )
  {
     istringstream ss(Text);
     T result;
     return ss >> result ? result : 0;
  }
Usage: StringToNumber<Type> ( String );


