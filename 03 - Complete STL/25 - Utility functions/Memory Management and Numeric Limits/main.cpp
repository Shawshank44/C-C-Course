#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;




int main(){

    // Allocator :
    allocator<int> alloc;

    // Allocate memory for 5 integers
    int* arr = alloc.allocate(5);

    for (int i = 0; i < 5; ++i) {
        alloc.construct(&arr[i], i * 10); // Initialize arr[i] = i * 10
    }

    // Display values
    std::cout << "Allocated and constructed values:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // Destroy and deallocate memory
    for (int i = 0; i < 5; ++i) {
        alloc.destroy(&arr[i]);
    }
    alloc.deallocate(arr, 5);


    // numeric_limits it is defined in the <limits> header.

    // Integer limits
    std::cout << "Integer Limits:\n";
    std::cout << "Min: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Max: " << std::numeric_limits<int>::max() << "\n";

    // Float limits
    std::cout << "\nFloating-Point Limits:\n";
    std::cout << "Min: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Max: " << std::numeric_limits<float>::max() << "\n";
    std::cout << "Epsilon: " << std::numeric_limits<float>::epsilon() << "\n";

    // Double limits
    std::cout << "\nDouble Limits:\n";
    std::cout << "Lowest: " << std::numeric_limits<double>::lowest() << "\n";
    std::cout << "Infinity: " << std::numeric_limits<double>::infinity() << "\n";

     
    return 0;
}