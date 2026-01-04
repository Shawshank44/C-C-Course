#include <stdio.h>

int main(){
    int age;

    // if(age>60){
    //     printf("You can drive and you are a senior citizen");
    // }
    // else if(age>40){
    //     printf("You can drive and you are elder");
    // } 
    // else if(age>18){
    //     printf("You can drive");
    // }
    // else{
    //     printf("You cannot drive");
    // }

    printf("enter the age : ");
    scanf("%d",&age);

    if (age >= 18 && age < 21)
    {
        printf("You are eligible to drive only motor cycle");
    }else if (age >= 21)
    {
        printf("you can drive both car and motorcycle");
    }else{
        printf("you are too young please grow up");
    }
    
    
    return 0;
}