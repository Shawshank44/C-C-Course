#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){

    struct employee e1, e2;
    
    strcpy(e1.name, "shashank.BR");

    e1.salary = 71.62;

     
    return 0;
}