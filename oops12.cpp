#include<iostream>
using namespace std;
class time{
        int h;
        int m;
        int s;
    public:
        time(){
            h=0;
            m=0;
            s=0;
        }
        time(int h, int m, int s){
            this->h=h;
            this->m=m;
            this->s=s;
        }
        time operator +(time d2){
            time d3;
                d3.h = h + d2.h;

            if((m + d2.m) >= 60){
                d3.m = (m + d2.m)%60;
                d3.h=d3.h+((m+d2.m)/60);
            }
            else{
                d3.m = m + d2.m;
            }
            if((s + d2.s) >= 60){
                d3.s = (s + d2.s)%60;
                d3.m=d3.m+((s+d2.s)/60);
            }
            else{
                d3.s = s + d2.s;
            }
            return d3;
        }
        void display(){
            cout<<"Total time:";
            if(h<=9){
                cout<<"0"<<h<<":";
            }
            else{
                cout<<h<<":";
            }
            
            if(m<=9){
                cout<<"0"<<m<<":";
            }
            else{
                cout<<m<<":";
            }
            if(s<=9){
                cout<<"0"<<s;
            }
            else{
                cout<<s;
            }
        //     if(h>9 && m>9 && s>9)
        //     cout<<h<<":"<<m<<":"<<s<<endl;
        }
};
int main(){
    time d3;
    int h1,m1,s1,h2,m2,s2;
    cout<<"Enter the 1st time here"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"Enter the 2nd time here"<<endl;
    cin>>h2>>m2>>s2;
    time d1(h1,m1,s1);
    time d2(h2,m2,s2);
    d3=d1+d2;
    d3.display();
    return 0;
}