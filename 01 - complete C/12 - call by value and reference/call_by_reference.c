#include<stdio.h> 

void increment(int *a) {
    *a = *a + 5;
}

int main() {
    int x = 5;
    increment(&x);  // Passing the address of x
    printf("x: %d\n", x); // Output will be 10, because `x` is modified through its address
    return 0;
}
