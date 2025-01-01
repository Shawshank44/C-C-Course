#include <iostream> 
#include<string>

using namespace std;

const int MAX_SCORE = 100;

int main(){

    int a,b; // declaration
    a = 56, b = 40; // Initialization.

    // cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    // cout<<"This is constant variable it cannot be changed : "<<MAX_SCORE<<endl;

    int age = 25;          // Integer variable
    float height = 5.9f;   // Floating-point variable
    char grade = 'A';      // Character variable
    bool isPassed = true;  // Boolean variable
    double two_double = 2.5435445; // stores double the float.


    // cout<<"Age "<<age<<endl; // we can write like this as well by "using namespace std;"
    // std::cout << "Age: " << age << std::endl;
    // std::cout << "Height: " << height << std::endl;
    // std::cout << "Grade: " << grade << std::endl;
    // std::cout << "Passed: " << std::boolalpha << isPassed << std::endl;
    // cout<<"ispassed "<<isPassed<<endl;
    // cout<<"the double number is : "<<two_double<<endl;

    // modifiers for varables in C++ :
    // signed / unsigned: Used with integer types to specify whether they can hold negative values

    signed int num0 = -34; // (int num = 34;) default every variable is signed
    unsigned int num1 = -34;

    // cout<<"The value of signed int is : "<<num0<<endl; // this can hold the negative value.
    // cout<<"The value of unsigned int is : "<<num1<<endl; // this can hold only positive value.

    // **Note unsigned int will return a garbage value if there is a negative value stored in the varable **.

    long int bigNumber = 1000000;
    // cout<<"the bid number is : "<<bigNumber<<endl;


    // String varaible:
    string name = "John";
    cout<<"My name is : "<<name<<endl;

     
    return 0;
}