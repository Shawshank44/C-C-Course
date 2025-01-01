#include <iostream> 

using namespace std;


int Sum (int,int); // function prototype


/*
    A void function in C++ is a function that does not return any value. The void keyword is used as the return type for such functions. 
    You typically use void functions when you want to perform a task without needing to return any result to the calling code.

*/

void printSum(int a, int b);

int main(){

    // int num1, num2;
    // cout<<"Enter the first number : ";
    // cin>>num1;
    // cout<<"Enter the second number : ";
    // cin>>num2;

    // cout<<"The sum is "<<Sum(num1,num2)<<endl; // actual parameters

    printSum(5, 10); // Call the void function with arguments

     
    return 0;
}

int Sum (int a, int b){ // formal parameters
    return a+b;
}

void printSum(int a, int b) { // void function
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
}