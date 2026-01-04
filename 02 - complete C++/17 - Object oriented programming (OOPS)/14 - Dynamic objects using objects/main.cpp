#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    // Default constructor
    BankDeposit() {}

    // Constructor for interest rate in decimal (e.g., 0.04 for 4%)
    BankDeposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        interestRate = r;
        returnValue = principal;

        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    // Constructor for interest rate in percentage (e.g., 4 for 4%)
    BankDeposit(int p, int y, int r)
    {
        principal = p;
        years = y;
        interestRate = float(r) / 100; // Convert percentage to decimal
        returnValue = principal;

        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    void show()
    {
        cout << endl
             << "Principal amount was " << principal << endl
             << "Return value after " << years << " years is " << returnValue << endl;
    }
};

int main()
{
    BankDeposit b1;
    int p, y;
    float r;
    int R;

    cout << "Enter the principal amount, years, and interest rate (in decimal): " << endl;
    cin >> p >> y >> r;
    b1 = BankDeposit(p, y, r);
    b1.show();

    cout << "Enter the principal amount, years, and interest rate (in percentage): " << endl;
    cin >> p >> y >> R;
    b1 = BankDeposit(p, y, R);
    b1.show();

    return 0;
}
