#include <iostream> 

using namespace std;

class Base {
    protected:
        int a = 0; // this can be inherited
    public :
        void display(){
            cout << "Protected variable in base class: " << a << endl;
        }
};

/*
    for a protected member:
                            public derivation   private derivation  protected derivation
    1. Private members      Not inherited       Not inherited       Not inherited
    2. Protected members    protected           private             Protected
    3. Public members       Public              private             protected
*/

class Derived : public Base {
    public:
        void changeValue(int change){
            a = change;
        }
};

int main(){

    Derived obj;
    obj.display();  // Accesses through the public method of Base
    obj.changeValue(20);
    obj.display();  // Shows the modified value

     
    return 0;
}