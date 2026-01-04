#include <iostream>
#include <iomanip> 

using namespace std;


int main(){

    // constants:
    const int a = 45; // the value cannot be changed or modified

    //Manupulators:
    // cout<<"The set with endl : "<<a<<endl;
    // cout<<"The setW : "<<setw(4)<<a<<endl; // sets width

    // operator precedence:
    int x,y,z;
    x = 45;
    y = 65;
    z = ((x*5)+y)-45+87;

    cout<<z<<endl;

    return 0;
}