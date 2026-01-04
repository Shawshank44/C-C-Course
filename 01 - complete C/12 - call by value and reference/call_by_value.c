#include<stdio.h> 

void increment(int a) {
    a = a + 2;
}

int main(){

    int x = 5;
    increment(x);
    printf("x: %d\n", x);  // Output will be 5, because the formal parameter `a` is a copy of `x`
     
    return 0;
}