#include <iostream> 

using namespace std;

int factorial(int n){
    if (n <= 1)
    {
       return 1;
    }
    return n * factorial(n-1);
}

int fibonacci(int n){
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n-2) +fibonacci(n-1);
    
}

int main(){

    // factorial of a number :
    // int a;
    // cout<<"Enter a number : ";
    // cin>>a;
    // cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;

    int f;
    cout<<"Enter the number";
    cin>>f;
    cout<<"The factorial of "<<f<< " is "<<fibonacci(f)<<endl;

     
    return 0;
}