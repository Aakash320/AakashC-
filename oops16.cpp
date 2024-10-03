#include <iostream>
using namespace std;

class oper{
    int a;
    public:
        oper(int a){
            this->a = a;
        }
        friend void operator -(oper &obj);
        friend void operator ++(oper &obj);
        friend void operator --(oper &obj);
        friend void operator ++(oper &obj, int);
        friend void operator --(oper &obj, int);

        void output(){
            cout<<"the value is "<<a<<endl;
        }
};

void operator -(oper &obj) {
    obj.a = -obj.a;
}

void operator ++(oper &obj) {
    ++obj.a;
}

void operator --(oper &obj) {
    --obj.a;
}

void operator ++(oper &obj, int) {
    obj.a++;
}

void operator --(oper &obj, int) {
    obj.a--;
}

int main(){
    oper a1(15);
    -a1;  
    a1.output();
    -a1;  
    a1.output();
    a1++;
    ++a1;  
    a1.output();
    a1--;
    --a1;
    a1.output();

    return 0;
}
