//Function Overloading Program.
#include<iostream>
using namespace std;
class Polymorphism
{
    public:
// function with 1 int parameter
    void func(int x)
    {
    cout << "value of x is " << x << endl;
    }

// function with same name but 1 double parameter
    void func(double x)
    {
    cout << "value of x is " << x << endl;
    }

// function with same name and 2 int parameters
    void func(int x, int y)
    {
    cout << "value of x and y is " << x << ", " << y << endl;
    }
};
int main() {

Polymorphism obj1; //object is created.

// The first 'func' is called
obj1.func(7);

// The second 'func' is called
obj1.func(9.132);

// The third 'func' is called
obj1.func(85,64);
return 0;
}
