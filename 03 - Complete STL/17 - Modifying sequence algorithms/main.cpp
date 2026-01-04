#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;

template <typename V>
void printVector(const vector<V>& vec) {

   for (auto it = vec.begin(); it != vec.end(); ++it)
   {
        cout<<*it<<endl;
   }
   
}

//`std::copy` | Copies elements from one range to another.
void copyAndDisplay(const vector<int>& source) {
    vector<int> destination(source.size()); // Ensure destination has enough space

    // Copy elements from source to destination
    copy(source.begin(), source.end(), destination.begin());

    // Display copied elements
    cout << "Destination: ";
    for (int elem : destination) {
        std::cout << elem << " ";
    }
    cout << endl;
}

// `std::copy_if`  | Copies elements that satisfy a condition.
void copyAndDisplayIf(const std::vector<int>& source, bool (*condition)(int)) {
    std::vector<int> destination;
    destination.resize(source.size()); // Reserve space for the destination vector

    // Copy elements satisfying the condition
    auto end = std::copy_if(source.begin(), source.end(), destination.begin(), condition);

    // Resize the destination vector to remove unused space
    destination.resize(std::distance(destination.begin(), end));

    // Display the copied elements
    std::cout << "Filtered elements: ";
    for (int elem : destination) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

bool isEven(int n) {
    return n % 2 == 0;
}

// `std::copy_n` | Copies a specific number of elements.
void copyAndDisplayN(const std::vector<int>& source, int n) {
    if (n > source.size()) {
        std::cout << "Error: n exceeds the size of the source vector." << std::endl;
        return;
    }

    std::vector<int> destination(n); // Reserve space for n elements

    // Copy the first n elements
    std::copy_n(source.begin(), n, destination.begin());

    // Display the destination
    std::cout << "Copied " << n << " elements: ";
    for (int elem : destination) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}


// `std::move` | Moves elements (instead of copying) to another range.
void moveAndDisplayElements(std::vector<int>& source, std::vector<int>& destination) {
    // Move elements from source to destination
    std::move(source.begin(), source.end(), std::back_inserter(destination));

    // Optionally clear the source after moving the elements
    source.clear();

    // Display the destination vector
    std::cout << "Destination after move: ";
    for (int elem : destination) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if source is empty after move
    std::cout << "Source after move (should be empty): ";
    for (int elem : source) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// `std::transform`  | Applies a function to each element in a range.
void squareElements(std::vector<int>& vec) {
    std::transform(vec.begin(), vec.end(), vec.begin(), [](int x) { return x * x; });
}

// `std::swap_ranges`  | Swaps elements between two ranges.
void swapAndPrint(std::vector<int>& vec1, std::vector<int>& vec2) {
    // Print the vectors before swapping
    std::cout << "Before swap_ranges:\n";
    std::cout << "vec1: ";
    for (int val : vec1) std::cout << val << " ";
    std::cout << "\nvec2: ";
    for (int val : vec2) std::cout << val << " ";
    
    // Swapping the elements between vec1 and vec2
    std::swap_ranges(vec1.begin(), vec1.end(), vec2.begin());
    
    // Print the vectors after swapping
    std::cout << "\n\nAfter swap_ranges:\n";
    std::cout << "vec1: ";
    for (int val : vec1) std::cout << val << " ";
    std::cout << "\nvec2: ";
    for (int val : vec2) std::cout << val << " ";
}

// `std::fill` | Assigns a specific value to all elements in a range.
void fillVector(std::vector<int>& vec, int value) {
    std::fill(vec.begin(), vec.end(), value);
}

// `std::fill_n`  | Assigns a specific value to a fixed number of elements.
void fillVector(std::vector<int>& vec, size_t n, int value) {
    if (n <= vec.size()) {
        std::fill_n(vec.begin(), n, value);
    } else {
        std::cerr << "Error: n exceeds the size of the vector." << std::endl;
    }
}

//`std::replace` | Replaces all occurrences of a value with another.
void replaceValue(std::vector<int>& vec, int oldValue, int newValue) {
    // Replacing all occurrences of oldValue with newValue
    std::replace(vec.begin(), vec.end(), oldValue, newValue);
}

// `std::replace_if`   | Replaces elements that satisfy a condition.
void replaceEvenWithNegativeOne(std::vector<int>& numbers) {
    std::replace_if(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; }, -1);
}

//`std::remove`  | Removes all occurrences of a value (logical removal).
void removeValue(std::vector<int>& numbers, int value) {
    // Remove all occurrences of the value
    auto new_end = std::remove(numbers.begin(), numbers.end(), value);

    // Erase the "removed" elements
    numbers.erase(new_end, numbers.end());
}

// `std::remove_if`    | Removes elements satisfying a condition.
void removeIfGreaterThan(std::vector<int>& numbers, int threshold) {
    // Remove elements greater than the threshold
    auto new_end = std::remove_if(numbers.begin(), numbers.end(), [threshold](int n) {
        return n > threshold;
    });

    // Erase the "removed" elements
    numbers.erase(new_end, numbers.end());
}

// `std::unique` | Removes consecutive duplicates from a range.
void removeConsecutiveDuplicates(std::vector<int>& numbers) {
    // Remove consecutive duplicates
    auto new_end = std::unique(numbers.begin(), numbers.end());

    // Erase the "removed" elements
    numbers.erase(new_end, numbers.end());
}

int main(){

    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    vector<int> des;
    copyAndDisplay(v);

    copyAndDisplayIf(v,isEven);

    copyAndDisplayN(v, 4);

    // moveAndDisplayElements(v, des);
    // printVector(v);
    // cout<<endl;
    // printVector(des);

    // squareElements(v);
    // printVector(v);


    // vector<int> vec1 = {1,2,3,4,5};
    // vector<int> vec2 = {10,20,30,40,50};

    // swapAndPrint(vec1,vec2);

    // vector<int> vecfill(5, 0);
    // fillVector(vecfill,10);

    // printVector(vecfill);

    // vector<int> vecfilln(5, 0);  // Create a vector of size 5, initialized with 0

    // // Fill the first 3 elements with the value 7
    // fillVector(vecfilln, 3, 7);

    // printVector(vecfilln);

    // replaceValue(v,3,30);
    // printVector(v);

    // removeValue(v, 2);
    // printVector(v);
     

    // removeIfGreaterThan(v, 5);
    // printVector(v);

    // vector<int> numbers = {1, 1, 2, 3, 3, 4, 4, 4, 5};
    // removeConsecutiveDuplicates(numbers);
    // printVector(numbers);

    return 0;
}