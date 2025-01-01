#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;


int main(){

    vector<int> vec = {10, 20, 15, 30, 40};

    // Make a heap
    make_heap(vec.begin(), vec.end());
    cout << "Heap created: ";
    for (int v : vec) cout << v << " ";
    std::cout << '\n';

    // Push a new element
    vec.push_back(50);
    push_heap(vec.begin(), vec.end());
    cout << "After push_heap: ";
    for (int v : vec) cout << v << " ";
    std::cout << '\n';

    // Pop the largest element
    pop_heap(vec.begin(), vec.end());
    cout << "After pop_heap: ";
    for (int v : vec) cout << v << " ";
    std::cout << '\n';
    vec.pop_back(); // Remove the max element

    // Sort the heap
    sort_heap(vec.begin(), vec.end());
    cout << "After sort_heap: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << '\n';

    // Check if a range is a heap
    make_heap(vec.begin(), vec.end()); // Re-make the heap
    if (is_heap(vec.begin(), vec.end())) {
        cout << "vec is a heap\n";
    }
     
    // Find heap boundary
    auto it = is_heap_until(vec.begin(), vec.end());
    std::cout << "Heap property holds until index: "
              << distance(vec.begin(), it) << '\n';


    return 0;
}