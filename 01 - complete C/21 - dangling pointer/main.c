#include<stdio.h> 
#include<stdlib.h>

/*
    A dangling pointer in C is a pointer that still holds the address of a memory location after the memory has been freed or deallocated. 
    Accessing a dangling pointer can lead to undefined behavior, including program crashes, 
    data corruption, or other unpredictable results.

    this can cause problems in programs causing bugs

*/

int main(){

    int *ptr = (int *) malloc(7* sizeof(int));
    ptr [0] = 34;
    ptr [1] = 64;
    ptr [3] = 70;
    free(ptr);
    ptr = NULL; // prevent dangling pointer.


     
    return 0;
}