#include <iostream> 

using namespace std;

class Employee{
    private :
        int id;
        int salary;
    public : 
        void setId(){
            salary = 122;
            cout<<"Enter the Id of employee"<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"the id of this employee is"<<id<<endl;
        }
};

int main(){

    Employee emp[4];
    
    for (int i = 0; i < 4; i++)
    {
        emp[i].setId();
        emp[i].getId();
    }

    return 0;
}