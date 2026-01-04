#include <iostream> 

using namespace std;

template <class T1 = int, class T2 = float> // default parameters

class Base {
    public:
        T1 a;
        T2 b;
        Base(T1 a,T2 b){
            this->a = a;
            this->b = b;
        }
        void display(){
            cout<<this->a<<endl<<this->b<<endl;
        }
};

int main(){

    Base<> B(45,34.4);
    B.display();
    Base<string, char> B2("strings",'H');
    B2.display();

     
    return 0;
}