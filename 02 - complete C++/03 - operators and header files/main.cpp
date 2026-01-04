#include <iostream> // system header file
#include "test.h" // user defined header file

// there are two types of header files :
// 1. system header files : It comes with the compiler 
// 2. User defined header file : It writeen by the user.

using namespace std;


int main(){

    // Operators in c++
    // 1. Arithmatic operations:
    int a = 10, b = 14;
    // cout<<"The value of a + b is : "<<a+b<<endl;
    // cout<<"The value of a - b is : "<<a-b<<endl;
    // cout<<"The value of a * b is : "<<a*b<<endl;
    // cout<<"The value of a / b is : "<<a/b<<endl;
    // cout<<"The value of a % b is : "<<a%b<<endl; // modulus operator
    // cout<<"The value of a++ increment is : "<<a++<<endl;
    // cout<<"The value of a-- decrement is : "<<a--<<endl;
    // cout<<"The value of ++a increment is : "<<++a<<endl;
    // cout<<"The value of --a decrement is : "<<--a<<endl;

    // 2. Assignment operators
    int x = 10; // x is now 10
    // cout<<"Basic assisment operator : "<<x<<endl;

    // Compound Assignment Operators:
    // x += 2;
    // cout<<x<<endl;
    // x -= 2;
    // cout<<x<<endl;
    // x *= 2;
    // cout<<x<<endl;
    // x /= 2;
    // cout<<x<<endl;
    // x %= 2;
    // cout<<x<<endl;

    // comparision operators / relational operators:
    // cout<<"The value of a is equal to b : "<<boolalpha<<(a == b)<<endl;
    // cout<<"The value of a is not equal to b : "<<boolalpha<<(a != b)<<endl;
    // cout<<"The value of a is greater than equal to b : "<<boolalpha<<(a >= b)<<endl;
    // cout<<"The value of a is less than equal to b : "<<boolalpha<<(a <= b)<<endl;
    // cout<<"The value of a is less than to b : "<<boolalpha<<(a < b)<<endl;
    // cout<<"The value of a is greater than to b: "<<boolalpha<<(a > b)<<endl;

    // logical operators :
    // cout<<"The logical presentation of a and b is "<<boolalpha<<((a != b) && (a > b))<<endl;
    // cout<<"The logical presentation of a and b is "<<boolalpha<<((a != b) || (a > b))<<endl;
    // cout<<"The logical presentation of a and b is "<<boolalpha<<(!(a == b))<<endl;



    return 0;
}