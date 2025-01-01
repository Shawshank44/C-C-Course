#include<stdio.h> 

void Sum(int* a, int* b) {
    int sum = *a + *b;   // Add the values
    int diff = *a - *b;  // Subtract the values

    *a = sum;  // Assign the sum to a
    *b = diff; // Assign the difference to b
}

int main(){
    /*
        Given two numbers a and b, add them and subtract them,
        then assign the results to a and b using call by reference.
    */

   int x = 7;
   int y = 6;
   Sum(&x, &y);
   printf("The sum is assigned to x: %d, and the difference is assigned to y: %d\n", x, y);

    return 0;
}
