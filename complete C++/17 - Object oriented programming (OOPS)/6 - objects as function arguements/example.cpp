#include <iostream> 

using namespace std;

class Student{
    private:
        int id;
        int age;
    public :
        void setStudent(){
            cout<<"enter the id : ";
            cin>>id;
            cout<<"enter the Age :";
            cin>>age;
        }
        int getId(){
            return id;
        }
        int getAge(){
            return age;
        }
};

void Getstudent (Student std[], int size, int minAge){
    cout << "People above " << minAge << " years old:" << endl;
    for (int i = 0; i < size; i++) {
        if (std[i].getAge() > minAge) {
            cout << std[i].getId() << " (" << std[i].getAge() << " years old)" << endl;
        }
    }
}

int main(){
    int size;
    cout<<"How many number of students you want to enter : ";
    cin>>size;

    Student stu[size];

    for (int i = 0; i < size; i++)
    {
        stu[i].setStudent();
    }

    Getstudent(stu,size,25);
    

     
    return 0;
}