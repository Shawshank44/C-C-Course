#include <iostream> 

using namespace std;

class Student{
    protected:
        int rollNumber;
    public:
        void setrollNumber(int num){
            rollNumber = num;
        }
        void getrollNumber(){
            cout<<"The Roll number is : "<<rollNumber<<endl;
        }
};

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float marks, float marks2){
            maths = marks;
            physics = marks2;
        }
        void getMarks(){
            cout<<"The marks obtained in maths are : "<<maths<<endl;
            cout<<"The marks obtained in maths are : "<<physics<<endl;
        }
};

class Result : public Exam{
    float percentage;
    public:
        void display(){
            getrollNumber();
            getMarks();
            cout<<"Your percentage is "<<(maths+physics)/2<<endl;
        }
};

int main(){

    Result S1;
    S1.setrollNumber(420);
    S1.setMarks(94,90);
    S1.display();

     
    return 0;
}