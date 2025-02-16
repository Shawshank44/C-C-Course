#include <iostream> 

using namespace std;


int main(){

    // 1.Basic pointers :
    // int num = 42;  
    // int *ptr = &num;
    // cout << "Value of num: " << num << endl;
    // cout << "Address of num: " << &num << endl;
    // cout << "Value using pointer: " << *ptr << endl;
    // cout << "Pointer address: " << ptr << endl;

    // 2.Swaping numbers using pointers :
    // int a = 10, b = 20;

    // cout << "Before swap: a = " << a << ", b = " << b << endl;

    // int *aptr = &a, *bptr = &b;
    // int temp = *aptr;
    // *aptr = *bptr;
    // *bptr = temp;
    
    // cout << "after swap: a = " << a << ", b = " << b << endl;

    // 3. Pointer Arithmatic:
    // int num = 10;
    // int *ptr = &num;

    // (increment ++) :
    // cout<<*ptr<<endl;
    // (*ptr)++;
    // cout<<*ptr<<endl;

    // using for loop:
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<(*ptr)++<<endl;
    // }

    // (decrement --) :
    // cout<<*ptr<<endl;
    // (*ptr)--;
    // cout<<*ptr<<endl;

    // using for loop:
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<(*ptr)--<<endl;
    // }

    // distance problem: 
    // int arr[] = {5, 10, 15, 20, 25};
    // int *start = arr; 
    // int *end = arr + 4; // Points to last element

    // cout << "Distance between start and end: " << (end - start) << endl;

    // Iteration through array using pointer arithmatic :
    // int arr[] = {2, 4, 6, 8, 10};
    // int *ptr = arr;

    // for (int i = 0; i < 5; i++) {
    //     cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic
    // }


    // Dynamic memory allocation :
    // int n;
    // cout << "Enter the number of elements: ";
    // cin >> n;

    // // Dynamically allocate memory for the array
    // int* arr = new int[n];

    // cout << "Enter " << n << " numbers:\n";
    // for (int i = 0; i < n; i++) {
    //     std::cin >> arr[i];
    // }

    // // Initialize largest and smallest with the first element
    // int largest = arr[0], smallest = arr[0];

    // // Traverse the array to find largest and smallest elements
    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > largest) {
    //         largest = arr[i];
    //     }
    //     if (arr[i] < smallest) {
    //         smallest = arr[i];
    //     }
    // }

    // cout << "Largest number: " << largest << std::endl;
    // cout << "Smallest number: " << smallest << std::endl;

    // // Free the allocated memory
    // delete[] arr;
    
    return 0;
}