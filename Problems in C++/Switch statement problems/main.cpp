#include <iostream> 

using namespace std;


int main(){

    /*
        Write a program to make a simple calculator to Add, Subtract, Multiply or divide using switch case.
        The program should takes an arithmatic operator (+,-,*,/) and two operands from a user and performs
        the operations on those two depending upon the operator entered by the user. 
    */
    // char op;
    // float num1, num2;
    
    // cout<<"Enter the operator (+,-,/,X) : ";
    // cin>>op;
    // cout<<"Enter first number : ";
    // cin>>num1;
    // cout<<"Enter second number : ";
    // cin>>num2;

    // switch (op)
    // {
    // case '+':
    //     cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
    //     break;
    // case '-':
    //     cout<<num1<<" - "<<num2<<" = "<<(num1-num2)<<endl;
    //     break;
    // case 'X':
    //     cout<<num1<<" X "<<num2<<" = "<<(num1*num2)<<endl;
    //     break;
    // case '/':
    //     cout<<num1<<" / "<<num2<<" = "<<(num1/num2)<<endl;
    //     break;
    
    // default:
    //     cout<<"Invalid expression or number ";
    //     break;
    // }


    /*
        2. Write a program to give feedback to the student based on examination grade. 
        Take 4 inputs parameters and one default parameter. take input from user.
    */
    char grade;
    cout<<"Enter the grade of the student (A,B,C,F) : "<<endl;
    cin>>grade;

    switch (grade)
    {
    case 'A':
        cout<<"You have secured A grade...Excellent work";
        break;
    case 'B':
        cout<<"You have secured B grade...Good work";
        break;
    case 'C':
        cout<<"You have secured C grade...satisfactory work";
        break;
    case 'F':
        cout<<"You have secured C grade...U ARE FAILED";
        break;
    
    default:
        cout<<"Invaild grade system. ARE U EVEN STUDENT :(";
        break;
    }
     
    return 0;
}