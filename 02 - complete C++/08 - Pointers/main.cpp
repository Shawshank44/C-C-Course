#include <iostream> 

using namespace std;


int main(){
    /*
        What is pointer:
        a datatype which holds the address of other data types.

        & -> (address of) operator
        * -> dereferencing operator.
    */

    int a = 3;
    int *b = &a;
    int **c = &b; // pointer to pointer 
    cout<<"The address of a is "<<b<<endl; // to know the address
    cout<<"The value of address b is "<<*b<<endl; // to know the value
    cout<<"The pointer to pointer is "<<*c<<" and value is "<<**c<<endl; // stores the address of a pointer

    return 0;
}