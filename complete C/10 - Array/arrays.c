#include<stdio.h> 


int main(){

    // int marks[3]; // initialization

    // marks[0] = 34; // declartions
    // marks[1] = 54;
    // marks[2] = 60;

    // printf("the marks of student %d \n", marks[0]);
    // printf("the marks of student %d \n", marks[1]);
    // printf("the marks of student %d \n", marks[2]);

    // int arr[5] = {1,2,3,4,5}; // initialization with declaration.

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The items in the arr is %d \n",arr[i]);
    // }

    // printf("The size of arr array is %d \n", sizeof(arr)); // determine the size of arr
    
    // int sizearr = sizeof(arr) / sizeof(arr[0]); // determine the number of elements in the arr

    // /*By dividing the total size of the array by the size of a single element, you get the number elements in the array */
    
    // printf("Number of elements in the array: %d\n", sizearr);

    /*
        The sizeof operator in C returns the size, in bytes, 
        of the object or type specified. When used with an array name, 
        it returns the total size in bytes of the entire array. For example, 
        if arr is an array of 5 integers, and each integer is 4 bytes, 
        then sizeof(arr) will return 20 bytes (5 integers * 4 bytes each).
    */


    // int studentMarks[5];

    // int size = sizeof(studentMarks) / sizeof(studentMarks[0]);
    // for (int i = 0; i < size ; i++)
    // {
    //     printf("Enter the Value of %d element of the array : ", i);
    //     scanf("%d",&studentMarks[i]);
    // }

    // for (int i = 0; i < size ; i++)
    // {
    //     printf("the Value of elements Entered in the array is %d \n", studentMarks[i]);
    // }



    // 2 dimentional array - 2D array:

    // int Arr2D[2][4] = {{3,6,7,8},
    //                   {36,40,20,13}};  // 2 rows and 4 columns
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("The value of %d,%d element of the array is %d \n",i,j,Arr2D[i][j]);
    //     }
        
    // }

    // // matrix form :
    // printf("*********** Matrix *********** \n");
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d ",Arr2D[i][j]);
    //     }
    //     printf("\n");
    // }


    return 0;
}