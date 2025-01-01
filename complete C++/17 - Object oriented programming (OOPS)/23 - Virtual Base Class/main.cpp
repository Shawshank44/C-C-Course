#include <iostream> 

using namespace std;

/*
    Virtual Inheritance
    Virtual inheritance solves this problem by ensuring that only one instance of the common base class is 
    inherited by the most derived class, even if the base class is inherited through multiple paths.

    Student is the base class and below example Test and Sports are giving multiple instances to result
    which causes ambiguity. so thats why we use virtual keyword as inherting reference of a base class.

    Virtual Inheritance:
    Both Test and Sports inherit from Student using the virtual keyword to 
    avoid having two separate instances of Student in the Result class. This solves the diamond problem, 
    where a single instance of Student is shared between the two paths of inheritance (Test and Sports).
    Multiple Inheritance:
    The Result class inherits from both Test and Sports. 
    Thanks to virtual inheritance, 
    it has only one instance of the Student class, 
    preventing ambiguity when calling methods like print_number().

*/

class Student{
    protected:
        int roll_no;
    public:
        void setRoll_no(int a){
            roll_no = a;
        }
        void print_number(){
            cout << "Your roll Number is : "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public :
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(){
            cout<<"Your Results are :"<<endl
            <<"Maths : "<<maths<<endl
            <<"physics : "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public :
        void set_score(int sc){
            score = sc;
        }

        void print_score(){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float Total;
    public :
        void display(){
            Total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is : "<<Total<<endl;
        }
};


int main(){

    Result  r1;
    r1.setRoll_no(1023);
    r1.set_marks(65.5,43.12);
    r1.set_score(9);
    r1.display();
     
    return 0;
}