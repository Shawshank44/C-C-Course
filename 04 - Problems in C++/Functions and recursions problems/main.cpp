#include <iostream> 

using namespace std;


bool isPrimenum (int num){//1 and 2 questions function.
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++) { // Only check divisors up to sqrt(num)
        if (num % i == 0) { // If divisible, it's not a prime
            return false;
        }
    }
    return true;
    
}

void findPrimePairs(int n){// 2 question function
    cout<<"Prime pairs for "<<n<<endl;
    for (int i = 2; i <= n; i++)
    {
        if (isPrimenum(i)&&isPrimenum(n-i))
        {
            cout<<n<<" = "<< i <<" + "<<n-i<<endl;
        }
        
    }
    
}

int findsum(int n){ // 3. question function
    if (n == 1)
    {
        return 1;
    }

    return n + findsum(n-1);
}


int fibonacci(int n){// 4. question function
    if (n <= 0)
    {
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}

int GCD(int a, int b){// 5. question function
    if (b == 0)
    {
        return a;
    }

    return GCD(b,a%b);
    
}

bool isPalindrome(int num, int originalnumber, int reversednumber){// 6. question function
    if (num == 0)
    {
        return originalnumber == reversednumber;
    }
    int digit = num%10;
    reversednumber = reversednumber*10+digit;
    return isPalindrome(num/10,originalnumber,reversednumber);
}

bool checkPalindrome(int num){//6. question function
    if (num<0)
    {
        return false;
    }
    return isPalindrome(num,num,0);
}

int reverseNumber(int num, int reversednum){//7. question function
    if (num == 0)
    {
        return reversednum;
    }

    int digit = num%10;
    reversednum = reversednum*10+digit;
    return reverseNumber(num/10,reversednum);
    
}


int climbStairs(int n){// 8. question function
    if (n<=1)
    {
        return 1;
    }
    return climbStairs(n-1)+climbStairs(n-2);
}

void TowerOfHanoi(int n, char sources, char auxilary, char destination){// 9. question function
    if (n==1)
    {
        cout<<"Move disk 1 from "<<sources<<" to "<<destination<<endl;
        return;
    }
    TowerOfHanoi(n-1,sources,destination,auxilary);
    cout<<"Move disk "<<n<<" from "<<sources<<" to "<<destination<<endl;
    TowerOfHanoi(n-1,auxilary,sources,destination);
}


int main(){

    // 1. Write a program to display prime numbers between two intervals (entered by user) Using funtions.
    // int start, end;
    // cout<<"Enter the starting number : ";
    // cin>>start;
    // cout<<"Enter the end number : ";
    // cin>>end;

    // cout<<"Prime numbers between "<<start<<" and "<<end<<" is :";

    // for (int i = start; i <= end; i++)
    // {
    //     if (isPrimenum(i))
    //     {
    //         cout << i <<" ";
    //     }
        
    // }
    // cout<<endl;

    // 2. Write a program to check if an integer (entered by the user) 
    // can be expressed as the sum of two prime numbers, if yes then print all possible combinations with the use of functions.
    // int num;
    // cout<<"Enter the positive number : ";
    // cin>>num;
    // findPrimePairs(num);


    // 3. Write a program to find the sum of N natural numbers (entered by user) using recursion.
    // int num;
    // cout<<"Enter the number : "<<endl;
    // cin>>num;
    // if (num<=0)
    // {
    //     cout<<"Enter a positive number : "<<endl;
    // }else{
    //     int sum = findsum(num);
    //     cout<<"Sum of the best "<<num<<" Natural numbers is "<<sum<<endl;
    // }
    

    // 4. write a Program to calculate the fibonacci sequence of the number using recursion
    // int num;
    // cout<<"Enter the positive number : ";
    // cin>>num;
    // if (num < 0)
    // {
    //     cout<<"please enter the positive number";
    // }else{
    //     cout<<"Fibonacci sequence of "<<num<<" is :";
    //     for (int i = 0; i < num; i++)
    //     {
    //         cout<<fibonacci(i)<<" ";
    //     }
    // }

    // 5. Write a program to find GCD of two numbers entered by user using recursion.
    // int num1, num2;
    // cout<<"enter the first number : ";
    // cin>>num1;
    // cout<<"enter the second number : ";
    // cin>>num2;

    // if (num1 < 0 || num2 < 0)
    // {
    //     cout<<"please enter the positive number";
    // }else{
    //     int result = GCD(num1,num2);
    //     cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<result;
    // }
    

    // 6. create a recursive function to check if a given number is a palindrome
    // int num;
    // cout<<"Enter the number : ";
    // cin>>num;

    // if (checkPalindrome(num))
    // {
    //     cout<<num<<" is a palindrome number"<<endl;
    // }else{
    //     cout<<num<<" is not a palindrome number"<<endl;
    // }

    // 7. create a recursive function to reverse a number
    // int num;
    // cout<<"enter the number ";
    // cin>>num;
    // int reversed = reverseNumber(num,0);
    // cout<<"Reversed Number obtained is : "<<reversed<<endl;
    
    // 8. climb stairs problem
    // int n;
    // cout<<"Enter the number of stairs : ";
    // cin>>n;
    // int ways = climbStairs(n);
    // cout<<"Number of ways to climb "<<n<<" stairs is "<<ways <<endl;


    // 9. Tower of hanoi
    // int n;
    // cout<<"Enter the number of disks : ";
    // cin>>n;
    // TowerOfHanoi(n,'A','B','C');

     
    return 0;
}