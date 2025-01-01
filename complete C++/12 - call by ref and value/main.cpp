#include <iostream> 

using namespace std;

int Sum (int a, int b){ // call by value
    return a+b;
}

int Swap(int* a, int* b){ // call reference with pointers
    int temp = *a;
    *a = *b;
    *b = temp;
}


int SwapVar(int &a, int &b){ // call by reference using reference variables.
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    // cout<<"The Sum is "<<Sum(4,5)<<endl;

    int x , y;
    x = 30;
    y = 50;
    // cout<<"Before : "<<x<<"="<<y<<endl;
    // Swap(&x,&y);
    // cout<<"After : "<<x<<"="<<y<<endl;

    cout<<"Before : "<<x<<"="<<y<<endl;
    SwapVar(x,y);
    cout<<"After : "<<x<<"="<<y<<endl;



     
    return 0;
}