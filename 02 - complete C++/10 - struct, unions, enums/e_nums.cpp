#include <iostream>
using namespace std;

enum Days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    Days today;

    today = Monday;
    cout << "Today is day number: " << today << endl;

    today = Friday;
    cout << "Today is day number: " << today << endl;

    return 0;
}