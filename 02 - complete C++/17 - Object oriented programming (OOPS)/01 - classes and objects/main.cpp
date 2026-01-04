#include <iostream> 

using namespace std;

class Employee{
    private : // this can only be accessed by class functions
        int a,b,c;
    public :
        int d,e;

        void setData (int a1, int b1, int c1); // decleartion
        void Getdata (){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){

    Employee John ;

    John.setData(1,2,3);
    John.Getdata();
     
    return 0;
}