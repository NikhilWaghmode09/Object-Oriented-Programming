//Binary Operator Overloading Program --> Addition and Division of two Complex numbers.
#include<iostream>
using namespace std;
class Complex{
    public:
        float real, img;
        Complex(){
            real = 0;  // initializing
            img = 0;   // values to 0.
        }
    void input(){
        cout<<"Enter values real and imag. values respectively:";
        cin>>real>>img;
    }
/*using & makes our code efficient by referencing complex2 object instead of making a duplicate object inside operator function.
using const is considered a good practice because it prevents operator function from modifying complex2.*/
    Complex operator + (const Complex& obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
    Complex operator / (const Complex& obj){   //formula: https://d138zd1ktt9iqe.cloudfront.net/media/seo_landing_files/dividing-complex-numbers-1630595375.png
        Complex temp;
        float temp1 = (obj.real*obj.real)+(obj.img*obj.img);
        temp.real = (real*obj.real + img*obj.img) / temp1;
        temp.img = (img*obj.real - real*obj.img)/ temp1;
        return temp;
    }
    void display(){
        if(img<0){
            cout<<"Resultant complex no. is: " << real << img << "i";
        }
        else{
            cout << "Resultant complex no. is: " << real << "+" << img << "i";
        }
    }
};
int main(){
    Complex n1, n2, result;
    n1.input();
    n2.input();
    result = n1 + n2; //calls the operator overloading fucntion. n2 is passed as an argument here.
    result.display();
    
    cout << endl;
    
    result = n1/n2; //calls the operator / overloading fucntion.
    result.display();
    return 0;
}
