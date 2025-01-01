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


// `std::sort`** | Sorts elements in ascending order by default or based on a comparator.
void sortVector(std::vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
}

//`std::stable_sort`**   | Sorts elements while maintaining the relative order of equivalent elements.
void stableSortVector(std::vector<int>& numbers) {
    std::stable_sort(numbers.begin(), numbers.end());
}

//`std::partial_sort`**  | Partially sorts the range so that the smallest \(k\) elements are sorted.
void partialSortSmallest(std::vector<int>& numbers, size_t k) {
    if (k > numbers.size()) {
        std::cerr << "Error: k is larger than the size of the array.\n";
        return;
    }
    std::partial_sort(numbers.begin(), numbers.begin() + k, numbers.end());
}

// `std::nth_element`** | Rearranges elements so that the \(n\)-th element is in its sorted position.
void nthElementInSortedPosition(vector<int>& vec, size_t n) {
    // Ensure the index is valid
    if (n >= vec.size()) {
        std::cerr << "Invalid index!" << std::endl;
        return;
    }
    
    // Use std::nth_element to rearrange the vector
    std::nth_element(vec.begin(), vec.begin() + n, vec.end());
}


// `std::is_sorted`** | Checks if a range is sorted in ascending order (or based on a comparator).
void check_if_sorted(const std::vector<int>& vec) {
    if (std::is_sorted(vec.begin(), vec.end())) {
        std::cout << "The vector is sorted in ascending order.\n";
    } else {
        std::cout << "The vector is not sorted.\n";
    }
}

int main(){

    vector <int> v = {5,2,4,1,3,6,9,7,10,8};

    // cout<<"Before sorting the vector : ";
    // PrintVector(v);
    // sortVector(v);
    // cout<<"after sorting the vector : ";
    // PrintVector(v);

    // stableSortVector(v);
    // PrintVector(v);

    // partialSortSmallest(v,6);
    // PrintVector(v);

    // nthElementInSortedPosition(v,3);
    // PrintVector(v);

    // sortVector(v);
    // check_if_sorted(v);


    
     
    return 0;
}