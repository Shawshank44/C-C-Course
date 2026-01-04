#include <iostream> 

using namespace std;

class Animal {
    protected:
        string category;
    public:
        Animal(string category){
            this->category = category;
        }
        virtual void Behaviour(){
            cout<<"A animal can either swim, fly, walk with their limbs and they are : "<<category<<endl;
        }
};

class Dog : public Animal{
    protected:
        string breed;
        string sound;
        string habitual;
        int limbs;
    public :
        Dog(string breed, string sound, string habitual, int limbs, string category):Animal(category){
            this->breed = breed;
            this->sound = sound;
            this->habitual = habitual;
            this->limbs = limbs;
            this->category = category;
        }
        void Behaviour() override {
            cout<<"The characterstics of a dog are :"<<endl
            <<"This Dog belongs to "<<breed<<" breed"<<endl
            <<"The Dog can vocally "<<sound<<endl
            <<"The diet is "<<habitual<<endl
            <<"the category is "<<category<<endl;
        }
};

class Cat : public Animal{
    protected:
        string breed;
        string sound;
        string habitual;
        int limbs;
    public :
        Cat(string breed, string sound, string habitual, int limbs, string category):Animal(category){
            this->breed = breed;
            this->sound = sound;
            this->habitual = habitual;
            this->limbs = limbs;
            this->category = category;
        }
        void Behaviour() override {
            cout<<"The characterstics of a Cat are :"<<endl
            <<"This Cat belongs to "<<breed<<" breed"<<endl
            <<"The Cat can vocally "<<sound<<endl
            <<"The diet is "<<habitual<<endl
            <<"the category is "<<category<<endl;
        }
};


int main(){
    // Create Dog object
    Dog dog("Golden Retriever", "bark", "carnivorous", 4, "mammal");
    
    // Create Cat object
    Cat cat("Persian", "meow", "carnivorous", 4, "mammal");

    // cout << "Dog's behavior:\n";
    // dog.Behaviour();
    // cout << endl;

    // cout << "Cat's behavior:\n";
    // cat.Behaviour();
    // cout << endl;

    Animal* animalPtr;
    // Animal pointer pointing to Dog object
    animalPtr = &dog;
    cout << "Polymorphic behavior (Dog):\n";
    animalPtr->Behaviour();
    cout << endl;


    // Animal pointer pointing to Cat object
    animalPtr = &cat;
    cout << "Polymorphic behavior (Cat):\n";
    animalPtr->Behaviour();
    cout << endl;
     
    return 0;
}

//Rules for the virtual  :
/*
    1. they cannot be static
    2. they are accessed by object pointers 
    3. virtual functions can be a friend of another class
    4. A virtual functions in a base class might not be used
    5. if a virtual function is defined in a base class, there is no necessity of redefineing it in the derived class
*/