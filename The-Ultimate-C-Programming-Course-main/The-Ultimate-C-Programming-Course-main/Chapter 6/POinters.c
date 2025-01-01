#include<stdio.h> 

int main(){

    int i = 72;
    int* j = &i; // pointer of i

    printf("the address of i is %p \n", *j);
    printf("the value of address of j is %d \n",*(&i));

    return 0;
}