#include<stdio.h> 

int main(){
    // operators in C 
    // Arithmatic operators (+,-,*,/,%)
    int a,b;
    a = 8;
    b = 4;
    // printf("a + b = %d \n", a+b);
    // printf("a - b = %d \n", a-b);
    // printf("a x b = %d \n", a*b);
    // printf("a / b = %d \n", a/b);
    // printf("a  b = %d \n", a%b);

    // Relational operators (==,>,<,<=,>=,!=)
    // In C Non Zero values are always true means :
    /*
        0 in C is denoted as false in boolean
        1 in C is denoted as true in boolean
        1 is always 1st priority.
        0 is least priority.
    */
    // printf("a equal to b = %d \n", a==b);
    // printf("a greater than b = %d \n", a>b);
    // printf("a less than b = %d \n", a<b);
    // printf("a greater than equal to b = %d \n", a>=b);
    // printf("a less than equal to b = %d \n", a<=b);
    // printf("a Not equal to b = %d \n", a!=b);

    // Logical operators : (&&,||,!)

    // int aa = 0;
    // printf("if a AND aa = %d \n", a&&aa); // this will return false because aa is 0
    // printf("if a AND aa = %d \n", a&&b); // this will return true because a and b has non zero value.
    // printf("if a OR aa = %d \n", a||aa); // this will return true because a is non zero value.
    // printf("if a NOT %d \n", !a); // this will return false beacause a is non zero value.
    // printf("if aa NOT %d \n", !aa);// this will return true because aa is 0.

    /* ***************************************
    Note : ! not logical operator will return true if the value returned is 0. 
    ****************************************** */

   // Assignment Operators : (=, +=, -=, *=, /=)

    // int num = 8; // "=" assigns the value 8 to the variable
    // printf("num is assigned with %d \n", num);
    // printf("added 4 to num variable %d \n", num += 4);
    // printf("subtracted 4 to num variable %d \n", num -= 4);
    // printf("multiply 4 to num variable %d \n", num *= 4);
    // printf("divide 4 to num variable %d \n", num /= 4);

    return 0;
}