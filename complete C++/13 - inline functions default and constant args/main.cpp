#include <iostream> 

using namespace std;

inline int SUM (int a, int b){
    /*
        An inline function in C++ is a function that is expanded in line when it is called, 
        which means the compiler replaces the function call with the function's code. 
        This can eliminate the overhead associated with a regular function call, 
        such as jumping to the function's location in memory, passing parameters, 
        and returning control to the caller.
    */
    return a*b;
}

// Static variables :
void countCalls() {
    /*
        A static variable in C++ is a variable that retains its value across multiple function calls and is initialized only once, 
        the first time the function is called. 
        Static variables can be used within functions (local static variables) or at the class level (static member variables).

        Note : do not use static variables in inline functions.
    */
    static int count = 0;  // Static variable, initialized only once
    count++;
    cout << "Function called " << count << " times." << endl;
}


float Multiplier(int amount, float factor = 1.04){ // default agruements
    return amount * factor;
}

int strlen(const char *p){ // constant arguements

   return * p;

}

int main(){

    // cout<< "The sum of a and b is : "<<SUM(4,5)<<endl;

    // countCalls();  // Output: Function called 1 times.
    // countCalls();  // Output: Function called 2 times.
    // countCalls();  // Output: Function called 3 times.
    // int amount = 100000;
    // cout<<"The value after investing "<<amount<<" for 1 year is "<<Multiplier(amount)<<endl;

     
    return 0;
}