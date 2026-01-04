#include<stdio.h> 

int main(){

    int var = 42;
    int *ptr = &var;

    // printf("Address of var: %p\n", ptr);
    printf("Address of var: %d\n", ptr);
    // printf("Value of var: %d\n", *ptr);

    // Increment the pointer (not very meaningful in this context)
    /*
        Pointer Increment (ptr++):
        The pointer is incremented, 
        moving it to the next memory location that would typically hold the next int (4 bytes away on most systems). 
        Since this pointer no longer points to var, 
        dereferencing it (*ptr) could lead to undefined behavior because 
        it’s pointing to a memory location that may not be allocated to your program.
    */
    ptr++;
    // printf("Address after ptr++: %p\n", ptr);
    printf("Address after ptr++: %d\n", ptr);
    // printf("Value at new address: %d\n", *ptr);

    /*
        Pointer Decrement (ptr--):
        We then decrement the pointer back to its original position, where it again correctly points to var.
    */
    ptr--;
    // printf("Address after ptr--: %p\n", ptr);
    printf("Address after ptr--: %d\n", ptr);
    // printf("Value at original address: %d\n", *ptr);

     
    return 0;
}