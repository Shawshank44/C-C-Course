#include <iostream> 

using namespace std;

class Test {
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i),b(j)
        // Test(int i, int j) : a(i),b(i+j)
        // Test(int i, int j) : a(i),b(2*j)
        // Test(int i, int j) : a(i),b(a+j)
        // Test(int i, int j) : b(j),a(i+b) --> this will create a problem because a is initialized first
        Test(int i, int j) : a(i), b(j){
            cout<<"The value a is "<<a<<endl;
            cout<<"The value b is "<<b<<endl;
        }  
};


int main(){

    Test t(30,60);

     
    return 0;
}