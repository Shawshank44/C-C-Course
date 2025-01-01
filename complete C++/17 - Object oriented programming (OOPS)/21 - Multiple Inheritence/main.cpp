#include <iostream> 

using namespace std;

class Base {
    protected:
        int base1Int;
    public:
        void set_Int(int a){
            base1Int = a;
        }
};

class Base2 {
    protected:
        int base2Int;
    public:
        void set_Int2(int a){
            base2Int = a;
        }
};

class Derived : public Base, public Base2{
    public:
        void show(){
            cout<<"the value of Base 1 is "<<base1Int<<endl;
            cout<<"the value of Base 2 is "<<base2Int<<endl;
            cout<<"the value of Base 1 + Base 2 is "<<base1Int + base2Int<<endl;
        }
};




int main(){

    Derived d1;

    d1.set_Int(30);
    d1.set_Int2(70);
    d1.show();
    
     
    return 0;
}