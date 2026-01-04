#include <iostream> 

using namespace std;

/*
    In C++, a union is a user-defined data type similar to a struct, 
    but with one key difference: all members of a union share the same memory location. 
    This means that a union can only store one of its members at a time,
    and the value of one member will overwrite the others.

*/

union Data {
    int i;
    float f;
    char c;
};


int main(){
     Data data;

    // Assigning a value to the integer member
    data.i = 10;
    cout << "data.i = " << data.i << endl;

    // Assigning a value to the float member (overwrites data.i)
    data.f = 220.5;
    cout << "data.f = " << data.f << endl;

    // Assigning a value to the char member (overwrites data.f)
    data.c = 'A';
    cout << "data.c = " << data.c << endl;

    // Note: Accessing other members will give unpredictable results
    cout << "data.i (unpredictable) = " << data.i << endl;
    cout << "data.f (unpredictable) = " << data.f << endl;
     
    return 0;
}