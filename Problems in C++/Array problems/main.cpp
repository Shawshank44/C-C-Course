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
    
    return 0;
}