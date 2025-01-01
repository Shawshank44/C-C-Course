#include <iostream>

using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
    void SetData(void)
    {
        cout << "Enter the data : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "employee :" << count << endl;
        cout << "The id entered is : " << id << endl;
    }

    static void getcount (void){
        cout<<"The value count is : "<<count<<endl;
    }
};

int Employee ::count;

int main()
{

    Employee emp1, emp2, emp3;
    // static data members:
    emp1.SetData();
    emp1.getData();
    Employee::getcount();

    emp1.SetData();
    emp1.getData();
    Employee::getcount();

    emp1.SetData();
    emp1.getData();
    Employee::getcount();

    return 0;
}