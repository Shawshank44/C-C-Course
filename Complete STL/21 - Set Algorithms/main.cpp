#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;

void print(const std::vector<int>& vec, const std::string& message) {
    std::cout << message << ": ";
    for (int n : vec)
        std::cout << n << " ";
    std::cout << "\n";
}


int main(){

    // Input sorted ranges
    vector<int> v1 = {1, 2, 4, 6};
    vector<int> v2 = {2, 3, 4, 7};

    // Containers to store results
    vector<int> union_result;
    vector<int> intersection_result;
    vector<int> difference_result;
    vector<int> symmetric_difference_result;

     // Perform set_union
    set_union(v1.begin(), v1.end(), v2.begin(), v2.end(),
                   std::back_inserter(union_result));
    print(union_result, "Union");

    // Perform set_intersection
    std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),
                          std::back_inserter(intersection_result));
    print(intersection_result, "Intersection");

    // Perform set_difference (v1 - v2)
    std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),
                        std::back_inserter(difference_result));
    print(difference_result, "Difference (v1 - v2)");

     // Perform set_symmetric_difference
    std::set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),
                                  std::back_inserter(symmetric_difference_result));
    print(symmetric_difference_result, "Symmetric Difference");

    // Check if v2 is a subset of v1
    if (includes(v1.begin(), v1.end(), v2.begin(), v2.end()))
        std::cout << "v2 is a subset of v1\n";
    else
        std::cout << "v2 is not a subset of v1\n";

     
    return 0;
}