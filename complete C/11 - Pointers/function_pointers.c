#include<stdio.h> 

void printArray(int *arr, int size);

void modifyArray(int *arr, int size);

int Sum(int a ,int b){
    return a+b;
}



void Arr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("The value at index %d is %d\n", i, arr[i]);
    }

    /*
        if you change any value inside the array function it will be reflected in the main function.
    */

   arr[0] = 387; // this will convert the array into pointer.

}

int main(){

    int (*fptr)(int,int);
    fptr = &Sum;
    int d = (*fptr)(10,6);
    printf("the value of d is : %d",d); // pointer pointing to a function.

    // int array[5] = {1, 2, 3, 4, 5};
    // int size = sizeof(array) / sizeof(array[0]);
    // printf("%d",size);

    // printf("Original array: ");
    // printArray(array, size);  // Output: 1 2 3 4 5

    // modifyArray(array, size);  // Pass the array to the function

    // printf("Modified array: ");
    // printArray(array, size);  // Output: 11 12 13 14 15

    // printf("The value at the 0 index is %d \n", array[0]);
    // Arr(array, size);
    // printf("The value at the 0 index is %d \n",array[0]);


    return 0;
}


void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Access each element using pointer arithmetic
    }
    printf("\n");
}

void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10;  // Modify each element
    }
}



