#include<stdio.h> 

int main(){
    // variables and datatypes.
    
    // variable is a basic datatype name to a memory location.
    /*  Rules of variables.
        1. Can contain alphabets, digits and underscore (_).
        2. A variable can start with an alphabet and underscore only.
        3. Can't Start with a digit.
        4. No Wide spaces and reserved keywords is allowed.
    */

    int a, b; // to store Integer (number)
    float c, d; // to store decimal point (number)
    char e, f; // single character ('word')
    double g,h; // to store large (numbers)

    // Integer: int 
    a = 4;
    b = 6;
    printf("The integers stored in a and b is %d and %d \n",a,b);

    //Floating point decimal : float
    c = 35.4;
    d = 65.7;
    printf("The floating numbers stored in c and d is %f and %f  \n", c,d);

    // character : char
    e = 'S';
    f = 'H';
    printf("The word stored in both e & f are %c and %c \n",e,f);

    //Double number : double
    g = 34.667;
    h = 56.887;
    printf("The double number stored in both g & h are %f and %f \n",g,h);

     
    return 0;
}