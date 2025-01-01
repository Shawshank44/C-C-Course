#include <iostream> 

using namespace std;

class Y;

class X {
    int data;

    public:
        void setValue(int value){
            data = value;
        }

        friend void add (X,Y);

};

class Y {
    int num;

    public:
        void setValue(int value){
            num = value;
        }

        friend void add (X,Y);
};

void add (X o1,Y o2){
    cout<<"By summing up both the objects "<<o1.data + o2.num<<endl;
}



int main(){

    X x1;
    x1.setValue(3);

    Y y1;
    y1.setValue(2);

    add(x1,y1);
     
    return 0;
}