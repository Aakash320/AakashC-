#include <iostream>
using  namespace std;
class Invoice  {
private:
    string partNumber;
    string partDescription;
    int quantityOfItem;
    double pricePerItem ;

public:

    Invoice(string partN , string partDes , int q , double ppi){
        this -> partNumber = partN;
        this ->partDescription  = partDes;

        if(q < 0){
            this -> quantityOfItem = 0;
        }
        else{
            this -> quantityOfItem = q;
        }
        if (ppi < 0){
            this ->pricePerItem = 0;
        }
        else{
            this ->pricePerItem = ppi;
        }
    }

    void setNumber(string partN){
        this ->partNumber = partN;
    }

    void setQuant( string partD ){
        partDescription = partD;
    }

    void setQuantity( int Quant ){
        if(Quant < 0 ) {
            this -> quantityOfItem = 0;
        }
        else{
            this -> quantityOfItem = Quant;
        }
    }

    void setPrice( int PPI){
        if (PPI < 0) {
            pricePerItem = 0;
        } else {
            pricePerItem = PPI;
        }
    }

    string getNumber( ){
        return partNumber ;
    }

    string getDescrpition( ){
        return partDescription ;
    }

    int getQuantity( ){
        return quantityOfItem ;
    }

    double getPricePerItem( ){
        return pricePerItem ;
    }

    double getInvoiceAmount(){
        double invoice;
        invoice = quantityOfItem * pricePerItem ;

        cout << "the Invoice is " << invoice << endl ;
    }
};

int main (){
    Invoice I1("101" , "apple" , 90, 90.9 );

    I1.getInvoiceAmount();
    I1.setQuantity(9);
    
    I1.setPrice(2000);
    I1.getInvoiceAmount();
    
    return 0;
}