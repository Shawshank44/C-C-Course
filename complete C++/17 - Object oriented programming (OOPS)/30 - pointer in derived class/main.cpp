#include <iostream> 

using namespace std;

class BaseClass {
    public:
        int var_base;
        void SetandDisplay(){
            cout<<"The value in var_base is : "<<var_base<<endl;
        }

};

class DerivedClass : public BaseClass {
    public:
        int var_derived;
        void SetandDisplay(){
            cout<<"The value in var_derived is : "<<var_derived<<endl;
        }
};

int main(){

    BaseClass * baseptr;
    BaseClass obj_base;
    DerivedClass obj_derived;

    baseptr = &obj_derived;

    baseptr->var_base = 34;
    baseptr->SetandDisplay();

    DerivedClass *derivedptr;
    derivedptr = &obj_derived;
    derivedptr->var_base = 78;
    derivedptr->var_derived = 98;
    derivedptr->SetandDisplay();
     
    return 0;
}


/*

The code demonstrates the concept of inheritance and polymorphism in C++. Here's an explanation of the key parts of your code:

BaseClass:

Contains an integer member var_base and a function SetandDisplay which displays the value of var_base.
DerivedClass:

Inherits from BaseClass and adds an additional integer member var_derived.
It also overrides the SetandDisplay method to display the value of var_derived.
Pointer baseptr:

You create a pointer of type BaseClass called baseptr and assign it the address of the object obj_derived (which is of type DerivedClass).
Since the type of baseptr is BaseClass, even though it points to an object of DerivedClass, only members of BaseClass can be accessed through this pointer.
So, when calling baseptr->SetandDisplay(), it will invoke the SetandDisplay function of BaseClass instead of DerivedClass, because the function is not virtual. This is an example of static binding.

Pointer derivedptr:
You create another pointer derivedptr of type DerivedClass and assign it the address of obj_derived.
Since the pointer type is DerivedClass, both var_base and var_derived can be accessed, and derivedptr->SetandDisplay() calls the DerivedClass version of SetandDisplay().
Code Behavior:
When baseptr->SetandDisplay() is called, the SetandDisplay() method of BaseClass is executed because the pointer is of type BaseClass, even though it points to a DerivedClass object.
When derivedptr->SetandDisplay() is called, the SetandDisplay() method of DerivedClass is executed, displaying var_derived's value.

*/