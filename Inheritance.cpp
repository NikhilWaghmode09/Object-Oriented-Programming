//***INHERITANCE***//
#include <bits/stdc++.h> 
using namespace std;
class Base
{

/*The capability of a class to derive properties and 
characteristics from another class is called Inheritance*/
    private:
        int x=1;
    protected:
        int z=3;
    public:
        int y=2;
    void print(){
        cout<<"Private access specifier makes sure the data is only accessed in the same class. \n"<<x<<"\n";
    }
};       
class Derived1:public Base{
    public:
        void print(){
            cout<<"PUBLIC BASE:"<<y<<"\n"; //public
           // cout<<x<<"\n"; //Throws error since x is declared private.
           cout<<z<<"\n"; //accessable from Derived1.
        }
};
class Derived2:protected Base{
    public:
        void print(){
            cout<<"PROTECTED BASE: "<<y<<"\n"; //protected
           // cout<<x<<"\n"; //Throws error since x is declared private.
            cout<<z<<"\n"; //accessable from Derived2.
        }   
};
class Derived3:private Base{
    public:
        void print(){
            cout<<"PRIVATE BASE: "<<y<<"\n";//private
           // cout<<x<<"\n"; //Throws error since x is declared private.
            cout<<z<<"\n"; //private
        }   
};
int main() {
        Base obj;
        obj.print(); //just to show that the private element can be accessed in the same class only.
        Derived1 obj1;
        obj1.print();
        Derived2 obj2;
        obj2.print();
        Derived3 obj3;
        obj3.print();   
    return 0;
}