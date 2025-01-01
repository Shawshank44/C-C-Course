#include<stdio.h>
#include<stdlib.h>

int main(){

    int a = 334;
    int *ptr;// this is a wild pointer.
    // *ptr = 35; // this is not good behavior
    ptr = &a;
    printf("the value of a is %d\n",*ptr);

     
    return 0;
}