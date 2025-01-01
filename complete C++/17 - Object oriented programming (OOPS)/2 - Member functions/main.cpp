#include <iostream> 

using namespace std;

class Calculator {
private:
    int add(int a, int b) {
        return a + b;
    }

    void displayResult(int result) {
        std::cout << "The result is: " << result << std::endl;
    }

public:
    void performCalculation(int a, int b) {
        int result = add(a, b);        // Call to another member function
        displayResult(result);        // Call to another member function
    }
};


int main(){

    Calculator sum;

    sum.performCalculation(10,15);

     
    return 0;
}