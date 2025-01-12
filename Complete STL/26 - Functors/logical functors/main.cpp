#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;


int main(){

    bool a = true, b = false;

    // Logical AND
    std::logical_and<bool> logicalAnd;
    std::cout << "Logical AND (true && false): " << logicalAnd(a, b) << "\n";

    // Logical OR
    std::logical_or<bool> logicalOr;
    std::cout << "Logical OR (true || false): " << logicalOr(a, b) << "\n";

    // Logical NOT
    std::logical_not<bool> logicalNot;
    std::cout << "Logical NOT (!true): " << logicalNot(a) << "\n";

     
    return 0;
}