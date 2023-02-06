//Sometimes implementation of all function cannot be provided in a base class because 
// we don’t know the implementation. Such a class is called abstract class.
//A pure virtual function (or abstract function) in C++ is a virtual function for which we can have 
// implementation, But we must override that function in the derived class, otherwise 
// the derived class will also become abstract class.
#include<iostream>
using namespace std;
class Car{
    public:
        int price;
        Car()
        {
            cout << "Car would have 4 wheels.\n";
        }

        virtual void Price() = 0;    //PURE VIRTUAL FUNCTION.
};
class Kia : public Car {
    public:
        void Price(){
            price = 1000000;
            cout << "Price of Kia is " << price << endl;
        }
};
class Audi : public Car {
    public:
        void Price(){
            price = 10000000;
            cout << "Price of Audi is " << price << endl;
        }
};
int main(){
    Car* p; //parent pointer object.
    // Car obj1;
    // p = &obj1;
    // p -> Price();

    cout << endl;

    Kia seltos;
    p = &seltos;
    p -> Price();

    cout << endl;

    Audi r8;
    p = &r8;
    p -> Price();
    return 0;
}
