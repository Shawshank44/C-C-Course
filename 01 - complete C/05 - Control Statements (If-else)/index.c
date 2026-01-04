#include<stdio.h> 

int main(){

    int age;
    printf("please enter your age : ");
    scanf("%d", &age);

    // if else :
    // if (age >= 18)
    // {
    //     printf("You can Drive");
    // }else{
    //     printf("You cannot Drive");
    // }

    // else if :
    if (age >= 18 && age < 21)
    {
        printf("you can only ride Motor cycle");
    }else if (age >= 21){
        printf("you can drive both Motorcycle and Car");
    }else{
        printf("You cannot drive you are not adult");
    }

    

    return 0;
}