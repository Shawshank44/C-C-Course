#include <iostream>

using namespace std;

int main()
{

    int age;
    cout << "Enter the your age : ";
    cin >> age;

    if (age <= 0 || age > 100)
    {
        cout << "Invalid age" << endl;
    }
    else if (age >= 18 && age < 21)
    {
        cout << "Your age is " << age << " and you are eligible to drive only Two wheeler" << endl;
    }
    else if (age >= 21)
    {
        cout << "Your age is " << age << " and you are eligible to drive both Four wheeler and Two wheeler" << endl;
    }
    else
    {
        cout << "Your age is " << age << " and you can drive only cycle" << endl;
    }

    return 0;
}