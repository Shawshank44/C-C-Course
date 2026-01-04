#include <iostream> 

using namespace std;


int main(){

    // 1.Write a program to check whether the number is even or odd.

    // int num;
    // cout<<"Enter the number to check (odd or even) : ";
    // cin>>num;

    // if (num %2==0)
    // {
    //     cout<<"You have entered an even number"<<endl;
    // }else{
    //     cout<<"You have entered an odd number"<<endl;
    // }

    // 2.Write a program to check whether a character is vowel or consonant.
    // char ch, isLowerVowel, isUpperVowel;
    // cout<<"Enter the alphabet"<<endl;
    // cin>>ch;

    // isLowerVowel = (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'|| ch == 'u');
    // isUpperVowel = (ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'|| ch == 'U');

    // if (isLowerVowel || isUpperVowel)
    // {
    //     cout<<"it is vowel"<<endl;
    // }else if(!isalpha(ch)){
    //     cout<<"Invalid type"<<endl;
    // }else{
    //     cout<<"It is a consonant"<<endl;
    // }

    // 3. Write a program to find the largest number among three numbers entered by users.
    // int num1,num2,num3;
    // cout<<"Enter the first number"<<endl;
    // cin>>num1;
    // cout<<"Enter the second number"<<endl;
    // cin>>num2;
    // cout<<"Enter the third number"<<endl;
    // cin>>num3;

    // if (num1 > num2 && num1 > num3)
    // {
    //     cout<<num1<<" is the greatest" <<endl;
    // }else if(num2 > num1 && num2 > num3){
    //     cout<<num2<<" is the greatest" <<endl;
    // }else{
    //     cout<<num3<<" is the greatest" <<endl;
    // }
    

    // 4. Write a program to check whether a year entered by user is leap year or not.
    long int year;
    cout<<"Enter the year : " <<endl;
    cin>>year;

    if (year%4 == 0)
    {
        cout<<year<<" it is a leap year."<<endl;
    }else{
        cout<<year<<" it is a not a leap year."<<endl;
    }
    

     
    
     
    return 0;
}