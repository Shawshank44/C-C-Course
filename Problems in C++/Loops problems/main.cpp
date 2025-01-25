#include <iostream>
#include <cmath>

using namespace std;


int main(){

    // 1. Write a program to calculate the sum of the first N natural numbers (here value of N is entered by the user).
    // int num;
    // int sum = 0;
    // cout<<"Enter the number : ";
    // cin>>num;

    // for (int i = 1; i < num; i++)
    // {
    //     sum = sum + i;
    // }

    // cout<<"the sum obtained is "<<sum<<endl;

    // 2. write a program to find the factorial of a given number N (N is entered by the user).
    // int num;
    // int fact = 1;

    // cout<<"Enter the number : ";
    // cin>>num;

    // for (int i = 1; i <= num; i++)
    // {
    //     fact = fact*i;
    // }
    
    // cout<<"the factorial is : "<<fact<<endl;

    // 3. write a program to generate a multiplication table of a number (entered by the user) using a for loop.
    // int num;
    // cout<<"Enter the number to print the table : ";
    // cin>>num;

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<num<<" X "<<i<<" = "<<(num*i)<<endl;
    // }


    // 4. Write a program to display fibonacci series upto certain number n (n is entered by the user).(I)
    // int num, first_num, sec_num, next;
    // first_num = 0;
    // sec_num = 1;
    // cout<<"Enter the number : ";
    // cin>>num;
    // if (num>=1)
    // {
    //     cout<<first_num<<" ";
    // }
    // if (num >=2)
    // {
    //     cout<<sec_num<<" ";
    // }

    // for (int i = 3; i <= num; i++)
    // {
    //     next = first_num+sec_num;
    //     cout<<next<<" ";
    //     first_num=sec_num;
    //     sec_num=next;
    // }

    // cout<<" "<<endl;

    // 5. Write a Program to display sum of all digits of a given number N by user.(I)
    // int num, rem;
    // int sum = 0;
    // cout<<"Enter the number : ";
    // cin>>num;

    // while (num!=0)
    // {
    //     rem = num %10;
    //     sum = sum + rem;
    //     num = num / 10;
    // }

    // cout<<"Sum of the digits is "<<sum<<endl;
    
    // 6. Write a program to reverse a given number N by user.
    // long int num;
    
    // cout<<"Enter a number : ";
    // cin>>num;

    // int rev_num = 0;

    // while (num>0)
    // {
    //     rev_num = rev_num*10 + num%10;
    //     num = num/10;
    // }

    // cout<<"Reverse of the given number is : "<<rev_num<<endl;

    // 7. Write a program to calculate power of a number using inbuilt pow() function by taking two inputs from users as base and exponent respectively.
    // int base, exp, result;

    // cout<<"Enter the value of the base : "<<endl;
    // cin>>base;
    // cout<<"Enter the value of the exponent : "<<endl;
    // cin>>exp;

    // result = pow(base,exp);

    // cout<<base<<"^"<<exp<<" = "<<result<<endl;

    // 8. Write a program to calculate power of a number without using inbuilt pow() function by taking two inputs from users as base and exponent repectively.
    // int base, exp;
    // int result = 1;

    // cout<<"Enter the base : ";
    // cin>>base;
    // cout<<"Enter the exponent : ";
    // cin>>exp;

    // for (int i = 0; i < exp; i++)
    // {
    //     result = result*base;
    // }

    // cout<<base<<"^"<<exp<<" = "<<result<<endl;

    // 9. Write a program to check whether a number N entered by the user is palindrome or Not.
    // int num,rem,temp;
    // int reverse = 0;
    // cout<<"Enter the number : ";
    // cin>>num;
    // temp=num;

    // while (temp!=0)
    // {
    //     rem=temp%10;
    //     reverse = reverse*10+rem;
    //     temp=temp/10;
    // }
    // if (num==reverse)
    // {
    //     cout<<num<<" is a palindrome number "<<endl;
    // }else{
    //     cout<<num<<" is not a palindrome number "<<endl;
    // }


    // 10. Write a program to check whether a number is prime or Not
    // int num;
    // cout<<"Enter the number "<<endl;
    // cin>>num;

    // bool isprime = true;
    // for (int i = 2; i < num; i++)
    // {
    //     if (num%i==0)
    //     {
    //         isprime = false;
    //         break;
    //     }
    // }

    // if (isprime == false)
    // {
    //     cout<<"It is not a prime number"<<endl;
    // }else{
    //     cout<<"It is a prime number"<<endl;
    // }

    // 11. Create fahrenheit to celsius table using while loop 
    // double farh, cel, start, end;
    // int step;
    // cout<<"Enter the start value "<<endl;
    // cin>>start;
    // cout<<"Enter the end value "<<endl;
    // cin>>end;
    // cout<<"Enter the step value "<<endl;
    // cin>>step;
    // cout<<"\n Fahrenheit \t Celcius\n";
    // farh = start;

    // while (farh <= end)
    // {
    //     cel=(farh-32.0)*5.0/9.0;
    //     cout<<farh<<"\t\t"<<cel<<endl;
    //     farh = farh + step;
    // }

    // 12. Write a program to check whether a number entered by the user is an Armstrong number or not
    // int num, rem, temp;
    // int sum = 0;
    // cout<<"Enter the number : ";
    // cin>>num;
    // temp=num;

    // while (temp>0)
    // {
    //     rem = temp%10;
    //     sum=sum+(rem*rem*rem);
    //     temp=temp/10;
    // }

    // if (num == sum)
    // {
    //     cout<<sum<<" is the armstrong number"<<endl;
    // }else{
    //     cout<<num<<" it is not a armstrong number"<<endl;
    // }

    // 13. Write a program to find the GCD and HCF of two numbers entered by the user.
    // int num1, num2, gcd;
    // cout<<"Enter the first number : ";
    // cin>>num1;
    // cout<<"Enter the second number : ";
    // cin>>num2;

    // for (int i = 1; i <= num1; i++)
    // {
    //     if (num1 % i == 0 && num2 % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }

    // cout<<gcd<<" is the GCD of the given numbers"<<endl;
    
    // 14. Write a program to find the LCM of two numbers entered by user
    // int num1, num2, lcm, gcd;
    // cout<<"Enter the first number : ";
    // cin>>num1;
    // cout<<"Enter the second number : ";
    // cin>>num2;

    // for (int i = 1; i <= num1; i++)
    // {
    //     if (num1 % i == 0 && num2 % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }

    // lcm = num1*num2 / gcd;

    // cout<<"The LCM of the given number is "<<lcm<<endl;


    // 15. Write a program to display all factors of a number entered by the user.
    // int num;
    // cout<<"Enter the number : ";
    // cin>>num;
    // for (int i = 1; i <= num ; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         cout<<i<<" ";
    //     }
        
    // }
    

    
    
    return 0;
}