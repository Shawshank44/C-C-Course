#include <iostream> 

using namespace std;

/*
    Key Points About Constructors:

    constructor must be always public.
    
    Same name as the class: The constructor has the same name as the class in which it is defined.
    No return type: Constructors do not have a return type, not even void.

    Automatically invoked: A constructor is automatically called when an object of the class is instantiated.

    Default constructor: A constructor that takes no arguments. If you don't provide any constructor, 
    the compiler generates a default constructor.

    Parameterized constructor: A constructor that takes arguments to initialize objects with specific values.
    Constructor overloading: You can define multiple constructors with different parameters.

    Copy constructor: A constructor that initializes an object using another object of the same class.
*/




class Complex {
    int a, b;
    public:
    Complex(void){ // this is a default constructor with no parameters
       a = 10;
       b = 20;
    }

    void printdata(){
        cout<<"the value of a and b is "<<a<<", "<<b<<endl;
    }
};

int main(){

    Complex c1;
    c1.printdata();
     
    return 0;
}