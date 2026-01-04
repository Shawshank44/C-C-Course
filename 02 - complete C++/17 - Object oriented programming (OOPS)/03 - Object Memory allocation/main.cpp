#include <iostream> 

using namespace std;

class Shop {
    int itemID[100];
    int itemPrice[100];
    int counter;
    public : 
        void initCounter(void){counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void){
    cout<<"Enter Id of "<<counter + 1 <<" your item : "<<endl;
    cin>>itemID[counter];
    cout<<"Enter Price of your item : "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop ::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of the item with the Id "<<itemID[i]<<" "<<itemPrice[i]<<endl;
    }
    
}

int main(){

    Shop myshop;
    myshop.initCounter();
    myshop.setPrice();
    myshop.setPrice();
    myshop.setPrice();
    myshop.displayPrice();


     
    return 0;
}