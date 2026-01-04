#include <iostream>

class Complex {
public:
    double real, imag;

    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the '+' operator
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display the complex number
    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0), c2(1.5, 2.5);
    Complex result = c1 + c2; // Uses the overloaded + operator
    result.display();         // Output: 4.5 + 4.5i
    return 0;
}
