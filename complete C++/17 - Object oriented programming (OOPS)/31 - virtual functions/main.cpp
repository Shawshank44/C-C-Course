#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function
    virtual void show() {
        cout << "Base class show() function called.\n";
    }
    
    // Non-virtual function
    void display() {
        cout << "Base class display() function called.\n";
    }
};

class Derived : public Base {
public:
    // Overriding virtual function
    void show() override {
        cout << "Derived class show() function called.\n";
    }
    
    // Overriding non-virtual function (won't behave polymorphically)
    void display(){
        cout << "Derived class display() function called.\n";
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    
    basePtr = &derivedObj;
    
    // Virtual function, resolves at runtime
    basePtr->show();
    
    // Non-virtual function, resolves at compile time
    basePtr->display();
    
    return 0;
}
