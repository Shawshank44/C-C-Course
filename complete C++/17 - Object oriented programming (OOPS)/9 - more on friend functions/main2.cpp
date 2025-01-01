#include <iostream> 

using namespace std;

/*
    Trick to swap two numbers :
    temp = a;
    a = b;
    b = temp;
*/

class Bvar;

class Avar{
    int value;
    public:
        void setData (int data){
            value = data;
        }
        void display(){
            cout<<"The value is "<<value<<endl;
        }

        friend void Swap (Avar &,Bvar &);
};

class Bvar{
    int num;
    public:
        void setData (int data){
            num = data;
        }
        void display(){
            cout<<"The num is "<<num<<endl;
        }

        friend void Swap (Avar &,Bvar &);
};

void Swap (Avar &a1, Bvar &b1){
    int temp = a1.value;
    a1.value = b1.num;
    b1.num = temp; 
}


int main(){

    Avar x;
    Bvar y;

    x.setData(30);
    x.display();

    y.setData(70);
    y.display();

    Swap(x,y);

    x.display();
    y.display();


     
    return 0;
}