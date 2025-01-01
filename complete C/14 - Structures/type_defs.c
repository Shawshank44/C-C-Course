#include<stdio.h> 
#include<string.h>

typedef struct
{
    int Emp_id;
    char name[20];
    char role[10];  // Size increased to store longer roles
    char gender[10]; // Size increased to store longer gender descriptions
    
} Employees, Emp; // Typedef allows you to use Employees instead of struct Employees

Emp E1; // Global variable of type Employees

typedef int* IntPtr;  // 'IntPtr' is now an alias for 'int*'

int main(){

    // Employees E1; // Uncomment to make E1 local to main()

    E1.Emp_id = 39145;
    strcpy(E1.name,"Shashank.BR");
    strcpy(E1.gender,"male");
    strcpy(E1.role,"order mgt");

    // printf("Employee ID: %d\n", E1.Emp_id);
    // printf("Name: %s\n", E1.name);
    // printf("Role: %s\n", E1.role);
    // printf("Gender: %s\n", E1.gender);

    int x = 100;
    IntPtr p = &x;    // Equivalent to 'int* p = &x;'

    printf("Value of x = %d\n", *p);


    return 0;
}
