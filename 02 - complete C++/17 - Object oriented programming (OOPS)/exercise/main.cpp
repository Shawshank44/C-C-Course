#include <iostream>

using namespace std;

// Constants

const double PI = 3.14159265358979323846;

#include <cmath> // For trigonometric functions

class SimpleCalculation
{
public:
    int add(int num1, int num2) { return num1 + num2; }
    int sub(int num1, int num2) { return num1 - num2; }
    int multiply(int num1, int num2) { return num1 * num2; }
    int divide(int num1, int num2) { return num1 + num2; }
};

class ScientificCalculation
{
public:
    double toRadians(double degrees)
    {
        return degrees * (PI / 180.0);
    }

    double factorial(int n)
    {
        double result = 1.0;
        for (int i = 1; i <= n; ++i)
        {
            result *= i;
        }
        return result;
    }

    double sinTaylor(double radians)
    {
        double sum = 0.0;
        for (int n = 0; n < 10; ++n)
        {
            double term = (n % 2 == 0 ? 1.0 : -1.0) * (pow(radians, 2 * n + 1) / factorial(2 * n + 1));
            sum += term;
        }
        return sum;
    }

    double cosTaylor(double radians)
    {
        double sum = 0.0;
        for (int n = 0; n < 10; ++n)
        {
            double term = (n % 2 == 0 ? 1.0 : -1.0) * (pow(radians, 2 * n) / factorial(2 * n));
            sum += term;
        }
        return sum;
    }

    double tanTaylor(double radians)
    {
        double sine = sinTaylor(radians);
        double cosine = cosTaylor(radians);
        return (cosine != 0) ? (sine / cosine) : 0; // Avoid division by zero
    }

    // Function to calculate cosecant
    double cosecTaylor(double radians)
    {
        double sine = sinTaylor(radians);
        return (sine != 0) ? (1 / sine) : 0; // Avoid division by zero
    }
};

class Calculator : public SimpleCalculation, public ScientificCalculation
{
public:
    void SimpleDisplay(int num1, int num2, char signOperator)
    {
        switch (signOperator)
        {
        case '+':
            cout << "By adding : " << add(num1, num2)<<endl;
            break;
        case '-':
            cout << "By subtracting : " << sub(num1, num2)<<endl;
            break;
        case ('*'):
            cout << "By multiplying : " << multiply(num1, num2)<<endl;
            break;
        case '/':
            cout << "By dividing : " << divide(num1, num2)<<endl;
            break;
        default:
            cout << "invalid operations" << endl;
            break;
        }
    }

    void ScientificDisplay(int num1, string scienOperator)
    {
        double radians1 = toRadians(num1);
        // Using if-else instead of switch
        if (scienOperator == "sin")
        {
            std::cout << "You selected sine operation. "<<sinTaylor(radians1)<<endl;
            
        }
        else if (scienOperator == "cos")
        {
            std::cout << "You selected cosine operation. "<<cosTaylor(radians1)<<endl;
            cosTaylor(radians1);
        }
        else if (scienOperator == "tan")
        {
            std::cout << "You selected tangent operation. "<<tanTaylor(radians1)<<endl;
            tanTaylor(radians1);
        }
        else if (scienOperator == "cosec")
        {
            std::cout << "You selected cosec operation. "<<cosecTaylor(radians1)<<endl;
           
        }
        else
        {
            std::cout << "Unknown operator!\n";
        }
    }
};

int main()
{

    Calculator c1;

    c1.SimpleDisplay(10,30,'+');
    c1.SimpleDisplay(10,30,'-');
    c1.SimpleDisplay(10,30,'*');
    c1.SimpleDisplay(10,20,'/');

    cout<<"********************************"<<endl;

    c1.ScientificDisplay(10,"sin");
    c1.ScientificDisplay(10,"cos");
    c1.ScientificDisplay(10,"tan");
    c1.ScientificDisplay(10,"cosec");


    return 0;
}