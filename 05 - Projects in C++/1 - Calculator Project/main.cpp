#include <iostream> 
#include <vector>
using namespace std;

void Addition (const vector <double> &numbers){
    if (numbers.empty()) return;
    double result = 0;
    for (double num : numbers)
    {
        result += num;
    }
    cout<< "Result : "<<result<<endl;
}

void Subtraction(const vector<double>&numbers){
    if (numbers.empty()) return;
    double result = numbers[0];
    for (auto i = 1; i < numbers.size(); ++i)
    {
        result -= numbers[i];
    }
    cout<<"Result : "<<result<<endl;
}

void multiply(const vector<double>&numbers){
    if (numbers.empty()) return;
    double result = 1;
    for (double num : numbers)
    {
        result *= num;
    }
    cout<<"Result : "<<result<<endl;
}

void divide(const vector<double> &numbers){
    if(numbers.empty()) return;
    double result = numbers[0];
    for (auto i = 1; i < numbers.size(); ++i)
    {
        if (numbers[i] == 0)
        {
            cout<<"Error Division by zero!"<<endl;
            return;
        }
        result /= numbers[i];
    }
    cout<<"Result : "<<result<<endl;
}

int main(){
    
    char operation;

    // Ask for operation until a valid input is given
    while (true) {
        cout << "Choose operation (+, -, *, /): ";

        // Check if the user pressed Enter (newline as first character)
        if (cin.peek() == '\n') {
            cout << "Input is empty. Please enter a valid operator (+, -, *, /)." << endl;
            cin.ignore(); // Ignore the newline
            continue;     // Restart loop
        }

        cin >> operation;

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            break; // Valid input
        } else {
            cout << "Invalid operator! Please enter one of (+, -, *, /)." << endl;
            cin.clear();           // Clear error flag
            cin.ignore(100, '\n'); // Ignore invalid input until newline
        }
    }

    vector<double> numbers;
    double num;

    cout << "Enter numbers (enter '=' to calculate): " << endl;
    while (true) {
        string input; // User input taken as string
        cin >> input;

        if (input == "=") break;

        try {
            num = stod(input); // String to double conversion
            numbers.push_back(num);
        } catch (...) {
            cout << "Invalid input. Try again." << endl;
        }
    }

    // Perform the operation
    switch (operation) {
        case '+': Addition(numbers); break;
        case '-': Subtraction(numbers); break;
        case '*': multiply(numbers); break;
        case '/': divide(numbers); break;
    }


    return 0;
}