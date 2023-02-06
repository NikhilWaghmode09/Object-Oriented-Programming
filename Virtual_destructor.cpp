//Virtual Destructor in C++ is a member function that is used to free up the memory allocated used by the 
//object of a child class or derived class when it is removed from the memory using the parent class pointer object. 
//Virtual destructor in C++ is mainly responsible for resolving the memory leak problem.
#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout << "\nCalling base class constructor.";
    }
    virtual ~Base(){
        cout << "\nCalling base class destructor.";
    }
};
class Child: public Base{
    public:
    Child(){
        cout << "\nCalling child class constructor.";
    }
    ~Child(){
        cout << "\nCalling child class destructor.";
    }
};
int main(){
    Base *obj = new Child(); //parent pointer object.
    delete obj;

    return 0;
}
