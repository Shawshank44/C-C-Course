#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;


int main(){

    // Examples using comparison functors
    std::less<int> lessFunctor;
    std::greater<int> greaterFunctor;
    std::less_equal<int> lessEqualFunctor;
    std::greater_equal<int> greaterEqualFunctor;
    std::equal_to<int> equalToFunctor;
    std::not_equal_to<int> notEqualToFunctor;


    int a = 10, b = 20;

    std::cout << "Comparing a = " << a << " and b = " << b << ":\n";

    std::cout << "std::less: " << lessFunctor(a, b) << " (a < b)\n";                 // true
    std::cout << "std::greater: " << greaterFunctor(a, b) << " (a > b)\n";           // false
    std::cout << "std::less_equal: " << lessEqualFunctor(a, b) << " (a <= b)\n";     // true
    std::cout << "std::greater_equal: " << greaterEqualFunctor(a, b) << " (a >= b)\n"; // false
    std::cout << "std::equal_to: " << equalToFunctor(a, b) << " (a == b)\n";         // false
    std::cout << "std::not_equal_to: " << notEqualToFunctor(a, b) << " (a != b)\n";  // true

     
    return 0;
}