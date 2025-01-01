#include <iostream> 

using namespace std;

class modifier;

class Default{
    private:
        int num;
    public: 
        void setNum(int value){
            num = value;
        }
    friend class modifier;
};

class modifier {
    public:
    int displayData(Default &d){
        cout<<"The data present in default class is accessed "<<d.num<<endl;
    }
    int modifydata(Default &d,int value){
        d.setNum(value);
    }
};

int main(){

    Default d;
    modifier m;

    d.setNum(300);
    m.displayData(d);

    m.modifydata(d,600);
    m.displayData(d);

     
    return 0;
}