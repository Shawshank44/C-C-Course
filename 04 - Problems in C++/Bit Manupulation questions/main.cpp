#include <iostream>
#include <math.h>

using namespace std;


int main(){

    // 1. Count the number of set bits in a number. where if n = 6 then output should be be 2 binary representation of 6 is 110
    // which has 2 set bits.
    // int num = 21;
    // int count = 0;
    // while (num)
    // {
    //     count=count+(num&1);
    //     num=num>>1;
    // }
    // cout<<"Number of set bits are "<<count<<endl;

    // 2. Extract ith bit of the number.
    // int num = 27;
    // int i = 3;
    // int mask = 1 <<i;
    // int result = num&mask;

    // if (result>0)
    // {
    //     cout<<"The "<<i<<"th term of "<<num<<" is 1"<<endl;
    // }else{
    //     cout<<"The "<<i<<"th terms of "<<num<<" is 0"<<endl;
    // }
    
    // 3. check if the number is even or odd using and operation.
    // int num;
    // cout<<"Enter the number : ";
    // cin>>num;
    // if ((num & 1) == 0)
    // {
    //     cout<<"The "<<num<<" is even"<<endl;
    // }else{
    //     cout<<"The "<<num<<" is odd"<<endl;
    // }

    // 4.swap numbers using xor operation.
    // int a, b;
    // a = 10;
    // b = 5;
    // cout<<"The value of 'a' before swaping is"<<a<<endl;
    // cout<<"The value of 'b' before swaping is"<<b<<endl;
    // a=a^b;
    // b=a^b;
    // a=a^b;
    // cout<<"The value of 'a' after swaping is"<<a<<endl;
    // cout<<"The value of 'b' after swaping is"<<b<<endl;

    // 5. Decimal to binary.
    // int n;
    // cout<<"Enter the decimal number : ";
    // cin>>n;
    // int ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n&1;
    //     ans=bit*pow(10,i) + ans;
    //     n = n>>1;
    //     i++;
    // }
    // cout<<"Answer is "<<ans<<endl;

    // 6. Binary to decimal:
    // int n;
    // cout<<"Enter the number "<<endl;
    // cin>>n;
    // int i = 0;
    // int ans = 0;
    // while (n != 0)
    // {
    //     int digit = n%10;
    //     if (digit == 1)
    //     {
    //         ans=ans+pow(2,i);
    //     }
    //     n = n/10;
    //     i++;
    // }
    
    // cout<<"The answer obtained is "<<ans<<endl;


     
    return 0;
}