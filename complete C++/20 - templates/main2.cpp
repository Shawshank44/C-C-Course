#include <iostream> 

using namespace std;

template <class T>
class Temp {
    private:
        T a;
        T b;
    public :

        T add(T a, T b){
            this->a = a;
            this->b = b;

            return a + b;
        }
};

int main(){

    Temp <int> temp;
    cout<<"The sum of two numbers with int template : "<<temp.add(10,20)<<endl;

    Temp<float>temp1;
    cout<<"The sum of two numbers with float template : "<<temp1.add(2.45,40)<<endl;

    Temp <string> temp2;
    cout<<"The method for adding two strings "<<temp2.add("Hello"," world")<<endl;

    return 0;
}