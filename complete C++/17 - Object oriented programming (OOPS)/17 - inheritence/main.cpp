#include <iostream> 

using namespace std;

/*
    Inheritance in C++ is a fundamental concept of Object-Oriented Programming (OOP)
    that allows a class (called a derived or child class) to inherit properties and behaviors 
    (i.e., data members and member functions) from another class (called a base or parent class). 
    This mechanism promotes code reuse and establishes a relationship between classes.
    Types of Inheritance in C++
    Single Inheritance: One class inherits from another.
    Multiple Inheritance: A class inherits from more than one class.
    Multilevel Inheritance: A class is derived from a class that is also derived from another class.
    Hierarchical Inheritance: Multiple classes inherit from a single base class.
    Hybrid Inheritance: A combination of two or more types of inheritance.

    Notes:
    default visblity mode is private in class of inheritence.

    Private visiblity mode : Public Members of the base class becomes private members of the derived class.

    public visiblity mode : Public Members of the base class becomes public members of the derived class.
    private members are never inherited.

    ************WE CANNOT ACCESS PRIVATE MEMEBERS OF THE BASE CLASS INSIDE THE DERIVED CLASS.************

    Public Inheritance:
    When a class is derived publicly, the access specifiers from the base class are inherited as follows:
    Public members of the base class remain public in the derived class.
    Private members of the base class remain inaccessible in the derived class 
    (they can only be accessed via public member functions of the base class, if any).

    Private Inheritance:
    When a class is derived privately, the access control changes:
    Public members of the base class become private in the derived class.
    Private members of the base class remain inaccessible in the derived class.

*/



class Employee{
    public:
        float salary;
        int id;
        string role;
        int hours;

        void WorkingHrs(){
            hours++;
            cout <<"the total hours worked is : "<<hours<<endl;
        }
};


class SalesSupport : public Employee{
    public:
        string name;
        string gender;
        double phoneNumber;

        SalesSupport(){};
        SalesSupport(string setname, string setgender, double setphonenumber, float setsalary, int setid, string setrole){
            name = setname;
            gender = setgender;
            phoneNumber = setphonenumber;
            salary = setsalary;
            id = setid;
            role = setrole;
        }

        void displayData(){
            cout<<"employee details are "<<endl;
            cout<<"employee name is : "<<name<<endl;
            cout<<"employee gender is : "<<gender<<endl;
            cout<<"employee phonenumber is : "<<phoneNumber<<endl;
            cout<<"employee salary is : "<<salary<<endl;
            cout<<"employee id is : "<<id<<endl;
            cout<<"employee role is : "<<role<<endl;
        }

};

int main(){

    SalesSupport E1("Shashi","male",9876543210,3600,401,"order mgt");
    E1.displayData();
    E1.WorkingHrs();
    
    

     
    return 0;
}