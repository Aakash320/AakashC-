#include <iostream>
using namespace std;

class oper{
    int a;
    public:
        oper(int a){
            this->a = a;
        }

        void operator -(){
            a = -a;
        }

        void operator ++(){
            ++a;
        }

        void operator --(){
            --a;
        }

        void operator ++(int){
            a++;
        }

        void operator --(int){
            a--;
        }

        void output(){
            cout<<"the value is "<<a<<endl;
        }
};



int main(){
    oper a1(21);
    // operator -(a1);
    -a1;
    a1.output();
    // operator -(a1);
    -a1;
    a1.output();
    a1++;
    // operator ++(a1);
    ++a1;
    a1.output();
    a1--;
    --a1;
    a1.output();
    return 0;
}
