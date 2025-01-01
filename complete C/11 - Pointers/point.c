#include<stdio.h> 

int main(){

    /*
        What is Pointer:
        variable which stores the address of another variable.

        Pointer is declared with * asterisk

        & is used to return the address of a variable
        * is the dereference operator(also called indirectional operator) to get the value of a given address.
    */

    int var = 10; // variable containing integer value
    int *ptr = &var; // ptr now holds the address of var
    // printf("The value of var is %d \n",var);
    // printf("The address of var is %d \n",ptr);
    // printf("The address of ptr is %d \n", &ptr);
    // printf("Generating the value of var by address stored in ptr is %d \n",*ptr);

    // Null Pointers:
    int * nullptr = NULL;
    // printf("the value of NULL pointer is %d", nullptr);

    return 0;
}