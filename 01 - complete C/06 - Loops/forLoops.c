#include<stdio.h>

int main(){

    int num; 
    printf("Enter the numbers :");
    scanf("%d",&num);

    
    //For loop:
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n",num,i,num*i);
    }
    
     
    return 0;
}