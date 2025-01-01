#include <iostream>
#include <string.h>  // For strlen function

using namespace std;

/*
    Function overloading is a feature in C++ (and some other programming languages) 
    that allows multiple functions to have the same name but different parameters. 
    These functions can differ by the number of parameters, the type of parameters, 
    or both. The compiler determines which version of the 
    function to call based on the arguments passed during the function call.

*/

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}



int main(){
    
    cout << "Sum of 3 and 4 (int): " << add(3, 4) << endl;
    cout << "Sum of 3.5 and 4.5 (float): " << add(3.5f, 4.5f) << endl;
    cout << "Sum of 3, 4, and 5 (int): " << add(3, 4, 5) << endl;

    return 0;
}