#include <iostream> 

using namespace std;

class Patient {
    string name;
    int age;
    string address;
    string Disease; 
    string bloodgroup;
    char grade;

    public:
        Patient(void){
            grade = 'A';
            cout<<"grade of the patient is "<<grade<<endl;
            
        }

        Patient(string setname, int setage, string setaddress){
            name = setname;
            age = setage;
            address = setaddress;
            cout<<"Name of the patient : "<<name<<endl;
            cout<<"age of the patient : "<<age<<endl;
            cout<<"address of the patient : "<<address<<endl;
        }

        Patient(string setDisease, string setbloodgroup){
            Disease = setDisease;
            bloodgroup = setbloodgroup;
            cout<<"Disease of the patient : "<<Disease<<endl;
            cout<<"bloodgroup of the patient : "<<bloodgroup<<endl;
        }

};

int main(){

    Patient p;
    Patient p1("John",22,"texas");
    Patient p2("fever","A+");

     
    return 0;
}