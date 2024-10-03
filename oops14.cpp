#include <iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        Complex(int real,int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        }
        
        Complex operator + (Complex obj){
            Complex temp(0,0);
            temp.real = real + obj.real;
            temp.imaginary = imaginary + obj.imaginary;
            return temp;
        }

        Complex operator - (Complex &obj){
            Complex temp(0,0);
            temp.real = real - obj.real;
            temp.imaginary = imaginary - obj.imaginary;
            return temp;
        }

        bool operator == (Complex &obj){
            return (real == obj.real && imaginary == obj.imaginary);
        }

        void output(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
};

int main(){
    Complex c1(7,14) , c2(9,6);
    Complex c4(9,6);
    Complex c3 = c1 + c2;
    c3.output();
    if(c2 == c4){
        cout <<"equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
    return 0;
}