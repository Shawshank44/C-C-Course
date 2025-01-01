#include<stdio.h> 
#include<string.h>

/*
A union in C is a user-defined data type that allows you to store different types of data in the same memory location. 
Unlike a struct, where each member has its own memory location, the members of a union share the same memory location. 
This means that a union can hold only one of its members at any given time.

Key Characteristics of a Union:
Shared Memory: All members of the union share the same memory location, 
so the size of the union is determined by the size of its largest member.
Mutually Exclusive Members: Only one member can contain a value at any given time. 
Writing to one member will overwrite the value of the previous member.
*/

typedef union
{
    int a;
    float b;
    char str[20];

} Data;


int main(){

    Data data;

    data.a = 10;
    printf("data.a : %d\n", data.a);

    data.b = 220.5;
    printf("data.b : %f\n", data.b);

    strcpy(data.str, "Hello");
    printf("data.str : %s\n", data.str);


    return 0;
}