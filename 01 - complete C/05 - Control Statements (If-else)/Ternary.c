#include<stdio.h> 

int main(){

    // Conditional Ternary Operator :
    int age;
    printf("please enter your age : ");
    scanf("%d", &age);

    age >= 18 ? printf("You can Drive") : printf("You cannot drive");
     
    return 0;
}