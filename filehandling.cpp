//Creating, writing and reading a file.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream obj1("D:/programming/oop/try3.txt"); //output file is created.
    obj1 << "TEXT IS ENTERED INSIDE THE FILE." << endl;
    obj1 << "This is second line.";  //writes.
    obj1.close();  //close.

    string str;

    fstream obj2("try3.txt");
    while(getline(obj2,str)){
        cout << str; //prints line by line
    }
    obj2.close();
    return 0;
}
