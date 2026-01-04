#include <iostream> 

using namespace std;

// Note: We can access private members with the help of public member functions from base class

class Base { 
    int data; // private by default and is not inheritable
    public:
        int data2;
        void setdata(int d);
        int getdata();
        int getdata2();

};

void Base :: setdata(int d){
    data = d;
    data2 = 20;

}

int Base :: getdata(){
    return data;
}

int Base :: getdata2(){
    return data2;
}

class Derived : public Base{ // class derived publically
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    data3 = data2 * getdata();
}

void Derived :: display(){
    cout<<"Value of data 1 is "<<getdata()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;

}

int main(){

    Derived der;

    der.setdata(10);
    der.process();
    der.display();
     
    return 0;
}