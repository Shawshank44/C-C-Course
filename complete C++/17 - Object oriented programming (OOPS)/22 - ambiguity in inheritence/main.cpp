#include <iostream> 

using namespace std;

class Base_1 {
    public:
        void greet(){
            cout<<"Good Morning !!!"<<endl;
        }
};

class Base_2{
    public:
        void greet(){
            cout<<"shuboday !!!"<<endl;
        }
};

class Derived : public Base_1, public Base_2{
    public:
        void greet(){
            Base_2::greet(); // ambiguity resolution
        }
};

int main(){

    Derived d1;
    d1.greet();
     
    return 0;
}