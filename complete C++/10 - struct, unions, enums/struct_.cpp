#include <iostream> 

using namespace std;


/*
    Structures in C++ are a way to group different types of variables under a single name. 
    They are similar to structures in C but come with additional features in C++.
*/


struct Employee
{
    int eId;
    char grade;
    float salary;
};



int main(){
    struct Employee shashank, jack;
    shashank.eId = 1;
    shashank.grade = 'A';
    shashank.salary = 120.45789;

    jack.eId = 2;
    jack.grade = 'S';
    jack.salary = 116.45789;

    cout<<"The details is "<<shashank.eId<<endl;
    cout<<"The details is "<<shashank.grade<<endl;
    cout<<"The details is "<<shashank.salary<<endl;

    cout<<"The details is "<<jack.eId<<endl;
    cout<<"The details is "<<jack.grade<<endl;
    cout<<"The details is "<<jack.salary<<endl;

     
    return 0;
}