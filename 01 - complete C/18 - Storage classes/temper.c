#include<stdio.h> 


extern int Sum (int a,int b){
    return a + b;
}


void RegisterFunction() {
    register int i;
    for (i = 0; i < 1000; i++) {
        printf("%d \n", i);
    }
}