#include<stdio.h>
#include<stdlib.h>


/*
    A void pointer (void*) in C is a type of pointer that can point to any data type. 
    Unlike other pointers that are typed (e.g., int*, char*, float*), a void* does not have an associated data type, 
    making it a "generic" pointer.

    # it is not possible to dereference in void pointers
    # pointer arithmetic is not allowed in C standards with void pointers
    # hence it is not recommeded to use pointer arithmatic with void pointers
*/

void print_value(void* ptr, char type) {
    if (type == 'i') {
        printf("Integer: %d\n", *(int*)ptr);
    } else if (type == 'f') {
        printf("Float: %f\n", *(float*)ptr);
    } else if (type == 'c') {
        printf("Character: %c\n", *(char*)ptr);
    }
}


int main(){
    
    // int i = 845;
    // float f = 8.33;
    // char c = 'S';
    // void *ptr;
    // ptr = &i;

    // printf("The value of i is %d\n", *ptr); // extracting value from void pointer "ptr" is not supported.
    // printf("The value of i is %d\n", *(int*)ptr);

    int a = 101;
    float b = 5.5;
    char c = 'A';

    void* ptr;

    // Point to an integer
    ptr = &a;
    print_value(ptr, 'i');

    // Point to a float
    ptr = &b;
    print_value(ptr, 'f');

    // Point to a char
    ptr = &c;
    print_value(ptr, 'c');



    return 0;
}