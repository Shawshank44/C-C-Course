#include <iostream> 

using namespace std;

class Number {
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        Number(Number &obj){
            cout<<"Copy contructor called"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"the number for this object is "<<a<<endl;
        }
};

int main(){
    Number x(45);
    x.display();

    Number z1(x); // copy contructor invoked
    z1.display();
    
     
    return 0;
}