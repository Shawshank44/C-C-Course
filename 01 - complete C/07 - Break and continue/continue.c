#include<stdio.h> 

int main(){

    int i = 1;

    // The continue statement in your code will cause an infinite loop because when i equals 7, 
    // the continue statement will skip the rest of the loop's body, 
    // including the i++ increment. Thus, i will never increase past 7, causing the loop to run indefinitely.
    // To fix this, you need to move the i++ increment before the continue statement. Here’s the corrected code:

    // continue:
    while (i < 10)
    {
        if (i == 7)
        {
            i++;
            continue;
        }
        printf("%d \n",i);
        i++;
    }
    
    return 0;
}

