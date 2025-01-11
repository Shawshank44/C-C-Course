#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;


int main(){

    int a = 10, b = 5;

    // Using arithmetic functors
    std::plus<int> add;
    std::minus<int> subtract;
    std::multiplies<int> multiply;
    std::divides<int> divide;
    std::modulus<int> mod;
    std::negate<int> negate;

    std::cout << "Addition: " << add(a, b) << '\n';       // 10 + 5 = 15
    std::cout << "Subtraction: " << subtract(a, b) << '\n'; // 10 - 5 = 5
    std::cout << "Multiplication: " << multiply(a, b) << '\n'; // 10 * 5 = 50
    std::cout << "Division: " << divide(a, b) << '\n';    // 10 / 5 = 2
    std::cout << "Modulus: " << mod(a, b) << '\n';        // 10 % 5 = 0
    std::cout << "Negation: " << negate(a) << '\n';       // -10

     
    return 0;
}