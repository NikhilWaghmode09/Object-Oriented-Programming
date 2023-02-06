//Typecasting - Implicit and Explicit conversion
//typecasting is converting one data type to another. Some datatypes can be automatically converted into another they are called Implicit Conversions.
//We can explicitly convert some datatypes to another. This conversion is Explicit conversion.
#include <iostream>
using namespace std;

int main()
{
	int x = 10; // integer x
	char y = 'a'; // character c

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;

	cout << "x = " << x << endl
		<< "y = " << y << endl
		<< "z = " << z << endl;

    //Explicit Conversion
    char a = 'A';
    int b = (int)a + 26; //adds ASCII value of a TO 26.
    cout << "b = " << b << endl;
    char c = (char)b;    //converting integer value of b to corresponding ASCII value.
    cout << "c = " << c << endl; 
	return 0;
}
