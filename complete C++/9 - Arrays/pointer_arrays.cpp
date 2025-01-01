#include <iostream> 

using namespace std;


int main(){

    // pointer arithmetic :
    int ptrarr[] = {1,2,3,4};

    int * ptr = ptrarr;
    cout<<"the address of the array is : "<<ptr<<endl; // by default array returns as a pointer
   
    int size = sizeof(ptrarr) / sizeof(ptrarr[0]);
    
    cout<<"The size of the array "<<size<<endl;
    // cout<<"the value of marks "<<*ptr<<endl;
    // cout<<"the value of marks "<<*(ptr + 1)<<endl;
    // cout<<"the value of marks "<<*(ptr + 2)<<endl;
    // cout<<"the value of marks "<<*(ptr + 3)<<endl;
    // cout<<*(ptr++)<<endl; // first increments then prints
    // cout<<*(++ptr)<<endl; // first prints and then increments

    for (int i = 0; i < size; i++)
    {
        cout<<"The index "<<i<<" the value is "<<*(ptr + i)<<endl;
    }
    

    
    
    

     
    return 0;
}