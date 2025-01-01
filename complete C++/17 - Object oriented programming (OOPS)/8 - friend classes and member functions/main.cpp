#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

class A {
private:
    int value;

public:
    // Member function to set value (without constructor)
    void setValue(int val) {
        value = val;
    }

    // Declaring class B as a friend class, so B can access A's private members
    friend class B;
};

class B {
public:
    // Member function of class B to access the private member of class A
    void displayValue(A& objA) {
        cout << "Value in class A: " << objA.value << endl;
    }

    // Another member function of class B to modify private member of class A
    void modifyValue(A& objA, int newVal) {
        objA.value = newVal;
    }
};

int main() {
    A objA;
    B objB;

    objA.setValue(100);  // Setting the value of class A's private member

    objB.displayValue(objA);  // Class B accessing class A's private member

    objB.modifyValue(objA, 200);  // Class B modifying class A's private member

    objB.displayValue(objA);  // Verifying the modification

    return 0;
}
