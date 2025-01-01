#include <iostream> 

using namespace std;

int main(){

    int *ptr = new int(40);
    cout << "The value at address p is " << *(ptr) << endl;

    int *arr = new int[3];
    *arr = 10; // by default 0'th index
    *(arr + 1) = 30; // we can write in this way as well
    arr[2] = 40;
    
    cout << "Before deletion:" << endl;
    cout << "The value stored at arr[0]: " << arr[0] << endl;
    cout << "The value stored at arr[1]: " << arr[1] << endl;
    cout << "The value stored at arr[2]: " << arr[2] << endl;
    
    // Free the memory
    delete[] arr;
    
    // After deleting, avoid accessing freed memory
    arr = nullptr; // Set pointer to nullptr to avoid accidental use

    return 0;
}
