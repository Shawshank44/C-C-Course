#include<stdio.h> // denotes by angle brackets fetch from standard system directory.
#include "currents.c"// denotes by double quotes say to look in current directory.

#define PI 3.14 // this is used to define preprocessor variable.

#define MAX(a, b) ((a) > (b) ? (a) : (b)) // macros is similar to functions




int main(){

    printf("the sum of both a and b is : %d\n",Sum(20,60));
    printf("the greater number between two numbers is %d",MAX(45,70));

     
    return 0;
}