#include<stdio.h>

int sum (int a, int b){

    return a+b;
}

int ExecuteSum(int(*callbacks)(int,int)){
    return callbacks(4,5);
}

int main(){

    printf("The sum of two numbers : %d", ExecuteSum(sum));
     
    return 0;
}