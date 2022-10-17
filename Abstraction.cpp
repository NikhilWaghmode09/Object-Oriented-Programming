//***ABSTRACTION***//
#include <bits/stdc++.h> //Abstraction in header files
using namespace std;
class Abstraction //Abstraction using classes
{
/*Data Abstraction means displaying only essential information and hiding the details. Data
abstraction refers to providing only essential information about the data to the outside
world, hiding the background details or implementation*/
    private:
        int x,y;
    public:
        void set(int a,int b)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout<<"x="<<x<<"\n"<<"y="<<y<<"\n";
        }
};

int main() {
    Abstraction obj1;
    int a,b;
    cout<<"Enter value for x:"<<"\n";
    cin>>a;
    cout<<"Enter value for y:"<<"\n";
    cin>>b;
    obj1.set(a,b);   //Passes the values entered by the user in funct.
    obj1.display();
    return 0;
}
