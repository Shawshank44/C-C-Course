#include <iostream>
using namespace std;

// Function template to swap two values of any type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    double m = 5.5, n = 9.9;

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "m = " << m << ", n = " << n << endl;

    // Using template to swap integers
    swapValues(x, y);

    // Using template to swap doubles
    swapValues(m, n);

    cout << "\nAfter swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "m = " << m << ", n = " << n << endl;

    return 0;
}
