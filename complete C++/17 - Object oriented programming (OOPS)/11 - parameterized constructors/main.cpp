#include <iostream> 

using namespace std;

class Complex {
    int a, b;
    public :
        Complex(int num1, int num2){
            a = num1;
            b = num2;
        }

        void printdata(){
            cout<<"the value of a and b is "<<a<<", "<<b<<endl;
        }
};

int main(){

    //implicit call.
    Complex a(30,40);
    a.printdata();

    // explicit call.
    Complex b = Complex(5,7);
    b.printdata();
     
    return 0;
}