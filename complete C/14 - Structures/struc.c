#include<stdio.h> 
#include<string.h>

struct Employees
{
    int Emp_id;
    char name[20];
    char role[10];  // Increase the size to store longer roles
    char gender[10]; // Increase the size to store longer gender descriptions
    
}E1,E2,E3; // can be declared here as well

// struct Employees E1; // global can be accessed to all the functions.

int main(){

    // struct Employees E1; // local can only be accessed inside main only  

    E1.Emp_id = 39145;
    strcpy(E1.name,"Shashank.BR");
    strcpy(E1.gender,"male");
    strcpy(E1.role,"order mgt");

    printf("Employee ID: %d\n", E1.Emp_id);
    printf("Name: %s\n", E1.name);
    printf("Role: %s\n", E1.role);
    printf("Gender: %s\n", E1.gender);

     
    return 0;
}