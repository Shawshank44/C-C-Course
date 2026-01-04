#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;

template <typename V>
void printVector(const vector<V>& vec) {

    for (auto &value : vec) {  // Range-based for loop
        std::cout << *value << " ";
    }
    std::cout << std::endl;

}


int main(){

    // std::unique_ptr
    vector <unique_ptr <int>> vec;

    // Add elements to the vector
    vec.push_back(std::make_unique<int>(10));
    vec.push_back(std::make_unique<int>(20));
    vec.push_back(std::make_unique<int>(30));

    printVector(vec);


    // std::shared_ptr
    std::vector<std::shared_ptr<int>> vec1;

    // Add shared pointers to the vector
    auto ptr1 = std::make_shared<int>(10);
    auto ptr2 = std::make_shared<int>(20);
    auto ptr3 = std::make_shared<int>(30);

    vec1.push_back(ptr1);
    vec1.push_back(ptr2);
    vec1.push_back(ptr3);

    printVector(vec1);


    // std::weak_ptr :
    // Create a vector of weak_ptr to integers
    std::vector<std::weak_ptr<int>> weakVec;

    // Create shared_ptr objects
    auto shared1 = std::make_shared<int>(10);
    auto shared2 = std::make_shared<int>(20);
    auto shared3 = std::make_shared<int>(30);

    // Add weak_ptr objects to the vector
    weakVec.push_back(shared1);
    weakVec.push_back(shared2);
    weakVec.push_back(shared3);

    // Display the values using lock()
    std::cout << "Vector elements: ";
    for (const auto& weak : weakVec) {
        if (auto shared = weak.lock()) { // Check if the shared_ptr is still valid
            std::cout << *shared << " ";
        } else {
            std::cout << "(expired) ";
        }
    }
    std::cout << std::endl;

    // // Reset one of the shared_ptrs
    shared2.reset();

    // Display the elements again after resetting
    std::cout << "After resetting one shared_ptr, vector elements: ";
    for (const auto& weak : weakVec) {
        if (auto shared = weak.lock()) { // Check if the shared_ptr is still valid
            std::cout << *shared << " ";
        } else {
            std::cout << "(expired) ";
        }
    }
    std::cout << std::endl;

     
    return 0;
}