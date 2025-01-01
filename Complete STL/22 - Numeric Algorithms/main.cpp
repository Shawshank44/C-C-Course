#include <iostream>
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;


int main(){

    // Sample vector
    std::vector<int> v = {1, 2, 3, 4, 5};
    // 1. std::accumulate
    int sum = std::accumulate(v.begin(), v.end(), 0); // Sum of elements
    int product = std::accumulate(v.begin(), v.end(), 1, [](int a, int b) { return a * b; }); // Product of elements

    std::cout << "Accumulate (Sum): " << sum << "\n";
    std::cout << "Accumulate (Product): " << product << "\n";

    // 2. std::inner_product
    std::vector<int> v2 = {5, 4, 3, 2, 1};
    int innerProd = std::inner_product(v.begin(), v.end(), v2.begin(), 0); // Dot product
    std::cout << "Inner Product: " << innerProd << "\n";

    /*
        Let’s say v = {1, 2, 3, 4, 5} + v2 = {5, 4, 3, 2, 1}.
        0+(1×5)+(2×4)+(3×3)+(4×2)+(5×1)
        0+5+8+9+8+5=35
    */

     // 3. std::partial_sum
    std::vector<int> partialSums(v.size());
    std::partial_sum(v.begin(), v.end(), partialSums.begin());
    std::cout << "Partial Sums: ";
    for (int x : partialSums) std::cout << x << " ";
    std::cout << "\n";

    /*
        The expression partialSums(v.size()); is not a function. Instead, it is a way of initializing a std::vector with a specified size. Here's what it means in the given context:

        Explanation
        partialSums is a std::vector<int> declared earlier.
        v.size() is the size of another vector v. The size of partialSums is set to match v using this constructor.
        Purpose
        The line ensures that partialSums has enough space to store the partial sums of the vector v. Without this initialization, the partial_sum algorithm would not have a pre-allocated space to store its results.

        Here’s the breakdown:
        partialSums[0] = v[0] = 1
        partialSums[1] = v[0] + v[1] = 1 + 2 = 3
        partialSums[2] = v[0] + v[1] + v[2] = 1 + 2 + 3 = 6
    
    */

    // 4. std::adjacent_difference
    std::vector<int> adjDiff(v.size());
    std::adjacent_difference(v.begin(), v.end(), adjDiff.begin());
    std::cout << "Adjacent Differences: ";
    for (int x : adjDiff) std::cout << x << " ";
    std::cout << "\n";
    
    /*
     Explanation:
     The first element (10) is just copied.
     The second element is 20 - 10 = 10.
     The third element is 30 - 20 = 10, and so on.
    */

   
    // 5. std::iota : (adds sequence of numbers)
    std::vector<int> sequence(5);
    std::iota(sequence.begin(), sequence.end(), 10); // Starts from 10 Fills: {10, 11, 12, 13, 14}
    std::cout << "Iota (Sequential Values): ";
    for (int x : sequence) std::cout << x << " ";
    std::cout << "\n";
     
    return 0;
}