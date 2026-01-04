#include <iostream> 
#include <math.h>

using namespace std;


int main(){

    // 1. Reverse an array:
    // int num;
    // cout<<"Enter the number of elements "<<endl;
    // cin>>num;
    // if (num<=0)
    // {
    //     cout<<"Please enter valid positive number "<<endl;
    // }

    // int elements[100];
    // for (int i = 0; i < num; i++)
    // {
    //     cout<<"Enter the elements "<<i+1<<" : ";
    //     cin>>elements[i];
    // }
    // int start = 0;
    // int end = num-1;
    // while (start < end)
    // {
    //     int temp = elements[start];
    //     elements[start] = elements[end];
    //     elements[end] = temp;
    //     start++;
    //     end--;
    // }
    // cout<<"Reversed array : ";
    // for (int i = 0; i < num; i++)
    // {
    //     cout<<elements[i]<<" ";
    // }
    // cout<<endl;
    

    // 2. Write a program that takes n element from user and displays the largest element of an array.
    // int num;
    // cout<<"Enter the number of elements : ";
    // cin>>num;
    // if (num<=0)
    // {
    //     cout<<"Please enter a positive number";
    // }

    // int elements[100];
    // for (int i = 0; i < num; i++)
    // {
    //     cout<<"Enter element"<<i+1<<" : ";
    //     cin>>elements[i];
    // }

    // int largest = elements[0];
    // for (int i = 0; i < num; i++)
    // {
    //     if (elements[i]>largest)
    //     {
    //         largest = elements[i];
    //     }
        
    // }
    // cout<<"The largest element in the array is "<<largest<<endl;

    
    // 3. Write a program that calculates the standard deviation of 10 data using arrays.
    // int n = 10;
    // double data [n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Enter the data points "<<i+1<<" : ";
    //     cin>>data[i];
    // }
    // double sum = 0.0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + data[i];
    // }
    // double mean = sum/n;
    // double squaredDifferencesSum = 0.0;
    // for (int i = 0; i < n; i++)
    // {
    //     squaredDifferencesSum = squaredDifferencesSum += pow(data[i]-mean,2);
    // }
    
    // double variance = squaredDifferencesSum/n;
    // double StardardDeviation = sqrt(variance);
    // cout<<"The Standard deviation obtained is "<<StardardDeviation<<endl;
    
    
    // 4. Finding repeating elements in a array
    // int arr[] = {10,20,30,20,10,50,100,50};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // for (int i = 0; i < n; i++)
    // {
    //     bool isduplicate = false;
    //     for (int j = i + 1; j<n ; j++)
    //     {
    //         if (arr[i]==arr[j])
    //         {
    //             isduplicate = true;
    //             break;
    //         }
            
    //     }
    //     if (isduplicate)
    //     {
    //         cout<<arr[i]<<" ";
    //     } 
    // }

    // 5. Write a program that takes N elements (max value of N is 100) and N is the float number specified by user) 
    // from user, stores data in an array and calculate the average of those numbers.
    // int num;
    // int element[10];
    // cout<<"Enter the number of elements ";
    // cin>>num;

    // if (num <= 0 || num > 100)
    // {
    //     cout<<"Please enter the value between 1 to 100";
    // }

    // for (int i = 0; i < num; i++)
    // {
    //     cout<<"Enter the "<<i+1<<" : ";
    //     cin>>element[i];
    // }

    // double sum = 0.0;
    // for (int i = 0; i < num; i++)
    // {
    //     sum=sum+element[i];
    // }
    // double average = sum/num;
    // cout<<"Average of the given numbers is "<<average<<endl;


    // 6. Write a program that adds two matrices using multi-dimentional arrays where the number of rows r and columns
    // int r,c;
    // cout<<"Enter the number of rows and columns : ";
    // cin>>r>>c;
    // int matrix1[r][c],matrix2[r][c];
    // int result[r][c];
    // cout<<"Enter the elemnts of the first matrix "<<endl;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cin>>matrix1[i][j];
    //     }
    // }

    // cout<<"Enter the elements of second matrix "<<endl;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cin>>matrix2[i][j];
    //     }
    // }

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         result[i][j] = matrix1[i][j] + matrix2[i][j];
    //     }
    // }

    // cout<<"Addition of the 2 matrix is : "<<endl;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout<<result[i][j]<<endl;
    //     }
    //     cout<<endl;
    // }


    /*
        7. write a program takes two matrices of order r1c1 and r2c2 respectively. then the program multiples these two matrices
        (if possible) and displays it on the screen.
    */
    // int r1, r2, c1, c2;
    // cout << "Enter the number of rows and columns for the first matrix: ";
    // cin >> r1 >> c1;
    // cout << "Enter the number of rows and columns for the second matrix: ";
    // cin >> r2 >> c2;

    // // Check if matrix multiplication is possible
    // if (c1 != r2) {
    //     cout << "Matrix multiplication is not possible" << endl;
    //     return 0; // Exit the program
    // }

    // // Declare matrices
    // int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2] = {0};

    // // Input for the first matrix
    // cout << "Enter the elements of the first matrix:" << endl;
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c1; j++) {
    //         cin >> matrix1[i][j];
    //     }
    // }

    // // Input for the second matrix
    // cout << "Enter the elements of the second matrix:" << endl;
    // for (int i = 0; i < r2; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         cin >> matrix2[i][j];
    //     }
    // }

    // // Initialize the result matrix to zero
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         result[i][j] = 0;
    //     }
    // }

    // // Perform matrix multiplication
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         for (int k = 0; k < c1; k++) {
    //             result[i][j] += matrix1[i][k] * matrix2[k][j];
    //         }
    //     }
    // }

    // // Output the resultant matrix
    // cout << "Resultant matrix obtained after multiplication is:" << endl;
    // for (int i = 0; i < r1; i++) {
    //     for (int j = 0; j < c2; j++) {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    

    // 8. write a program that takes a matrix of order r*c from the user and computes the transpose of the matrix.
    // int r, c;
    // cout << "Enter the number of rows and columns: " << endl;
    // cin >> r >> c;

    // int matrix[r][c], transpose[c][r];

    // // Input the elements of the matrix
    // cout << "Enter the elements of the matrix: " << endl;
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }

    // // Calculate the transpose
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         transpose[j][i] = matrix[i][j];
    //     }
    // }

    // // Display the original matrix
    // cout << "Original matrix:" << endl;
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // Display the transpose of the matrix
    // cout << "Transpose of the given matrix is:" << endl;
    // for (int i = 0; i < c; i++) { // Note: Loop dimensions are swapped
    //     for (int j = 0; j < r; j++) {
    //         cout << transpose[i][j] << " "; // Use correct dimensions
    //     }
    //     cout << endl;
    // }


    // 9. program that calculate and display the sum of the diagonal elements in a square matrix.
    // int size;
    // cout<<"Enter the square size of the square matrix ";
    // cin>>size;
    // int matrix[size][size];
    // cout<<"Enter the elements of the matrix "<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cin>>matrix[i][j];
    //     }
    // }

    // cout<<"printing the matrix"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // int diagonalsum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     diagonalsum = diagonalsum + matrix[i][i];
    // }

    // cout<<"Sum of the diagonal elements is : "<<diagonalsum<<endl;
    
    

    
    return 0;
}