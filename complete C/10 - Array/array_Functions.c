#include<stdio.h> 

int Array_func(int size);

void printArray(int arr[], int size);

void reverseArray(int arr[], int size);


int main(){

    // Array_func(4);

    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // printArray(arr, size);


    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // reverseArray(arr, size);

    // printf("Reversed array: ");
    // for (int i = 0; i < size; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

     
    return 0;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}


int Array_func(int size){
    int arr[size];

    printf("Enter the %d elements in the array \n",size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the Value for the %d index : ", i);
        scanf("%d",&arr[i]);
    }

    int arrsize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrsize ; i++)
    {
        printf("The elements of array %d \n",arr[i]);
    }
}