#include <iostream> 

using namespace std;


int c = 23;

int main(){

    // int a, b, c;
    // cout<<"Enter the value of a : ";
    // cin>>a;
    // cout<<"Enter the value of b : ";
    // cin>>b;
    // c = a+b;
    // cout<<"The local c is "<<c<<endl;
    // cout<<"The global c is "<<::c<<endl; // use "::" to get the value of global variable.

    // size of :
    int a = 5;
    double b = 10.0;
    char c = 'A';
    float d = 39.14;

    // cout << "Size of a: " << sizeof(a) << " bytes" << endl;
    // cout << "Size of b: " << sizeof(b) << " bytes" << endl;
    // cout << "Size of c: " << sizeof(c) << " bytes" << endl;
    // cout << "Size of d: " << sizeof(d) << " bytes" << endl;

    // reference datatypes :
    float var = 455;
    float &y = var;

    // cout<<y<<endl;
    
    // typecasting in C++ 
    float fl = 26.56;
    cout<<int(fl)<<endl;


     
    return 0;
}