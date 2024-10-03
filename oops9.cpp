#include<iostream>
using  namespace std;
class Area  {
private:

public:

    void calculateArea(int l ){
        cout <<   " The the area square is "  << l * l <<endl;
    }

    void calculateArea(int l , int b){
        cout <<   " The the area of retangle is  "  << l * b <<endl;
    }

    void calculateArea (int b , int h , bool isTri){
        cout <<   " The the area of trianlge is "  << 0.5 * b * h ;
    }
};

int main (){
    int n;
    cout << " enter the value of no Area you want to caluclate: ";
    cin >>  n;

    Area A[n];

    for( int i = 0 ; i < n ; i++){
        int m;
        cout << "Enter waht area you want to calculate Square 1 , Recatangle 2 , trinalge 3: ";
        cin >> m;

        if (m == 1 ){
            int l;
            cout << "Enter the length of the square " << endl;
            cin >> l;
            A[i].calculateArea(l);
        }
        if( m == 2 ){
            int l , b;
            cout << "Enter the length of the rectangle " <<endl;
            cin >> l;
            cout << "Enter the breath of the rectangle " <<endl ;
            cin >> b;
            A[i].calculateArea(l,b);
        }
        if(m == 3){
            int b , h;
            cout << "Enter the breath of the rectangle ";
            cin >> b;
            cout << "Enter the height of the rectangle ";
            cin >>h;
            A[i].calculateArea(b,h, true);
        }
        else{
            cout << "Request is invalid ";
        }
    }
    return 0;
}