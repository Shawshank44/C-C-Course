#include<stdio.h> 

int main(){

    /*
        Note: Every Output will depend on archetecture size 
        2 bytes and 4 bytes.
    */

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // or int *ptr = &arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    // Accessing array elements using the pointer
    // printf("First element: %d\n", *ptr);       // Output: 10
    // printf("Second element: %d\n", *(ptr + 1)); // Output: 20
    // printf("Third element: %d\n", *(ptr + 2));  // Output: 30

    for (int i = 0; i < size ; i++)
    { //printf("%d ", ptr[i]); is same
        printf("in the arr the value %d is stored at the address of %d \n", *(ptr + i),(&arr[i]));
    }
    
    return 0;
}