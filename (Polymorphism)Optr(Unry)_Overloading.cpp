//Unary Operator Overloading Program --> Incrementing value using ++ operator.
#include<iostream>
using namespace std;
class Polymorphism{
    private:
    int value;
    public:
    Polymorphism(){
        value = 10;
    }

    Polymorphism operator ++() //prefix form
    {
        Polymorphism temp;

        temp.value = value+5;
        return temp;
    }
/*
    Polymorphism operator ++ (int) //for postfix form i.e when operand ++.
    {
        Polymorphism temp;

        temp.value = value+5;
        return temp;
    }
*/
    void display()
    {
        cout << "Value is: " << value << endl;
    }
};
int main(){
    Polymorphism obj1, result;
    result = ++obj1;  //calling the void operator function. prefix form.
    result.display();
/*  
    result = obj1++;  //calling the void operator function. postfix form
    result.display();
*/
    return 0;
}
