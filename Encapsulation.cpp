//***ENCAPSULATION***//
#include <bits/stdc++.h>
using namespace std;
class Encapsulation
{
    /*The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.*/
    private:
        int var;
    public:
        void set_val(int i)
        {
            var = i;
        }
        int get_val()
        {
            return var;
        }
};

int main() {
    Encapsulation obj1;
    obj1.set_val(8);
    cout<<obj1.get_val();
    return 0;
}
