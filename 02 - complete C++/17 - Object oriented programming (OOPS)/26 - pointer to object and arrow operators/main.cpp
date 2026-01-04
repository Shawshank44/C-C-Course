#include <iostream> 

using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The Real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    Complex c;
    Complex *ptr = &c;
    c.setData(1,53);
    c.getData();

    // (*ptr).setData(2,54);
    // (*ptr).getData();
    // or 
    ptr->setData(24,106); // arrow operator
    ptr->getData();
     
    return 0;
}