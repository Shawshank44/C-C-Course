#include<stdio.h> 

int main(){
    /*
        A pointer to a pointer in C is a concept where you have a pointer that stores the address of another pointer. 
        This can be extended to multiple levels, creating multi-level pointers, 
        but typically you work with double pointers, which are pointers to pointers.
    */
    
    int var = 10;       // An integer variable
    int *ptr = &var;    // A pointer to an integer
    int **ptr_to_ptr = &ptr;  // A pointer to a pointer to an integer
    int ***ptr_to_ptr_from = &ptr_to_ptr;

    printf("Value of var: %d\n", var);                    // Output: 10
    printf("Value via ptr: %d\n", *ptr);                  // Output: 10
    printf("Value via ptr_to_ptr: %d\n", **ptr_to_ptr);   // Output: 10
    printf("Value via ptr_to_ptr_from: %d\n", ***ptr_to_ptr_from); // Output: 10
    // printf("The address of ptr_to_ptr_from %d \n",ptr_to_ptr_from);

    return 0;
}