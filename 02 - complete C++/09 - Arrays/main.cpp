#include <iostream> 

using namespace std;


int main(){

    int arr[4]; // Declaration of an array of 4 integers
    //initialization :
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    // Declaration and initialization :
    int nums[10] = {1,2,3,4,5,6,7,8,9,10};
    // nums[0] = 234; // changing the value of array

    // cout<<nums[0]<<endl;
    // cout<<nums[1]<<endl;
    // cout<<nums[2]<<endl;
    // cout<<nums[3]<<endl;

    int size = sizeof(nums) / sizeof(nums[0]); // to get the size of and array 
    // cout<<"The size of the array is "<<size<<endl;  

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"index "<<i<<" value "<<nums[i]<<endl;
    // }

    

    return 0;
}