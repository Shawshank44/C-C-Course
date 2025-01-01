#include<stdio.h>

/*
    A null pointer in C is a pointer that doesn't point to any valid memory location. 
    It's typically used to signify that the pointer is not currently associated 
    with any data or to indicate that a particular operation failed or resulted in no object.
*/

int main(){

    int x = 10;
    int *p = NULL;
    p = &x;

    p != NULL ? printf("the Address of a is %d", *p) : printf("the pointer is null");

    
    return 0;
}