#include <iostream> 

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamic array allocation
    int* marks = new int[size];

    // Using pointer arithmetic to input elements
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> *(marks + i);  // Using pointer arithmetic instead of marks[i]
    }

    // Example usage: Printing the array using pointer arithmetic
    cout << "The array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << *(marks + i) << " ";  // Using pointer arithmetic instead of marks[i]
    }
    cout << endl;

    // Deallocate the dynamic array
    delete[] marks;
     
    return 0;
}
