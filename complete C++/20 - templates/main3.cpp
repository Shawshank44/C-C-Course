#include <iostream> 

using namespace std;

template <class T1, class T2> // can also add multiple parameters 

class Base{
    private:
        T1 a;
        T2 b;
    public:
        Base(T1 a,T2 b){
            this->a = a;
            this->b = b;
        }

        void Display(){
            cout <<this->a<<endl<<this->b<<endl;
        }
};

int main(){

    Base <int,float> B1(12,18.45);
    Base <string,int> B2("shashank.BR ",44);
    B1.Display();
    B2.Display();


     
    return 0;
}