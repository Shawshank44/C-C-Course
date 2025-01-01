#include<stdio.h> 

int main(){

    int age ;
    printf("Enter the Age : ");
    scanf("%d",&age);

    if (age >= 18){
        printf("Bro you can drive the motorcycle but not car");
    }if (age >= 21){
        printf(" Bro you can drive both car and Motorcycle no restriction");
    }else{
        printf("Bro First growup and be adult");
    }
    
    return 0;
}