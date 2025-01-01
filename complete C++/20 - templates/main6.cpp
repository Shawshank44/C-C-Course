#include <iostream>
using namespace std;

// Template function for adding two values
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Overloaded template function for adding three values
template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int sum1 = add(10, 20);            // Calls the two-parameter function
    int sum2 = add(10, 20, 30);        // Calls the three-parameter function

    cout << "Sum of 2 numbers: " << sum1 << endl;
    cout << "Sum of 3 numbers: " << sum2 << endl;

    return 0;
}
