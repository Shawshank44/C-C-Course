#include<stdio.h>


int Add ( int a, int b){
    
    int sum = a+b;

    return sum;

}

int Sub (int a, int b){

    int sum = a-b;

    return sum;

}




int main(){

    printf("the addition of both the numbers is %d \n",Add(30,40));

    printf("the subtraction of both the numbers is %d \n",Sub(50,40));

    return 0;
}