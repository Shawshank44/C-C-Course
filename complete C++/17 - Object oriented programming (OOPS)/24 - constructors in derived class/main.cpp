#include <iostream> 

using namespace std;

/*
    Order of execution By constructors
    Case : 1

    Class B : public A{
        // order of execution by contructor -> first A() then B()
    }

    Class A : public B, public C{
        // order of execution by contructor -> first B() then C() and then A();
    }

    Class A : public B, virtual public C{
        // order of execution by contructor -> first virtual C() then B() and then A();
    }

*/

class Base1 {
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout <<"Base1 class contructor called"<<endl;
        }

        void printDataBase1(){
            cout<<"the value of data is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout <<"Base2 class contructor called"<<endl;
        }

        void printDataBase2(){
            cout<<"the value of data is "<<data2<<endl;
        }

};
                // 1st order  2nd order(if virtual it will called first)
class Derived : public Base2, public virtual Base1{ 
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d):Base1(a),Base2(b){
            derived1 = c;
            derived2 = d;
            cout <<"Derived  class contructor called"<<endl;
        }
        void printDerived(){
            cout<<"the value of derived1 is "<<derived1<<endl;
            cout<<"the value of derived2 is "<<derived2<<endl;
        }
};

int main(){

    Derived d(1,10,3,4);
     d.printDataBase1();
    return 0;
}