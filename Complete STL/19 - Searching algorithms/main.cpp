#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;

template <typename V>
void PrintVector(const vector<V> & vec){
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

//`find` | Finds the first occurrence of a value in a range.
template<typename T>
void findValue(const vector<T>& vec, T value) {
    auto it = find(vec.begin(), vec.end(), value);
    
    if (it != vec.end()) {
        cout << "Found " << *it << " at position " << (it - vec.begin()) << endl;
    } else {
        cout << "Value not found!" << endl;
    }
}

// binary_search`  | Checks if a value exists in a **sorted range**.
bool isValueInRange(const std::vector<int>& vec, int value) {
    return std::binary_search(vec.begin(), vec.end(), value);
}

// `std::lower_bound` | Finds the first position where the value can be inserted without breaking sorting.
int findInsertionPosition(const std::vector<int>& vec, int value) {
    // Using std::lower_bound to find the insertion position
    auto it = std::lower_bound(vec.begin(), vec.end(), value);
    return it - vec.begin();  // Returns the index of the position
}

// `std::upper_bound`   | Finds the position where the value would go if inserted **after all equal elements**. 
void findUpperBoundPosition(const std::vector<int>& vec, int value) {
    // Find the position where the value would go if inserted after all equal elements
    auto it = std::upper_bound(vec.begin(), vec.end(), value);
    std::cout << "The value " << value << " would be inserted at position: " 
              << std::distance(vec.begin(), it) << std::endl;
}

// `std::equal_range`  | Finds the range of all elements equal to a given value in a sorted container.
template <typename T>
void printEqualRange(const std::vector<T>& vec, const T& value) {
    // Find the range of elements equal to 'value'
    auto result = std::equal_range(vec.begin(), vec.end(), value);

    // Print the range
    std::cout << "Range of elements equal to " << value << ": ";
    for (auto it = result.first; it != result.second; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// std::search	Finds the first occurrence of a subsequence within a range.
template <typename T>
void findSubsequence(const std::vector<T>& mainVec, const std::vector<T>& subVec) {
    auto it = std::search(mainVec.begin(), mainVec.end(),
                          subVec.begin(), subVec.end());

    if (it != mainVec.end()) {
        std::cout << "Subsequence found starting at index: "
                  << std::distance(mainVec.begin(), it) << std::endl;
    } else {
        std::cout << "Subsequence not found" << std::endl;
    }
}



int main(){

    vector <int> v = {1,2,2,2,3,4,5,6};

    // Call the function to find 30
    
    // findValue(v,3);


    // int target = 4;

    // if (isValueInRange(v, target)) {
    //     std::cout << target << " found in the vector." << std::endl;
    // } else {
    //     std::cout << target << " not found in the vector." << std::endl;
    // }


    // int value = 35;
    // int position = findInsertionPosition(v, value);
    
    // std::cout << "The value " << value << " can be inserted at index: " << position << std::endl;
    
    // findUpperBoundPosition(v, 4);

    // printEqualRange(v, 2);


    // vector<int> mainVec = {1, 2, 3, 4, 5, 6};
    // vector<int> subVec = {3, 4};

    // findSubsequence(mainVec, subVec);

     
    return 0;
}