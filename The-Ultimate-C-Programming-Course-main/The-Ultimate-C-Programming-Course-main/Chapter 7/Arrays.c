#include<stdio.h> 

int main(){

    int marks[5];

    
    
    for (int i = 0; i < 5; i++)
    {
        printf("please enter the 5 numbers : ");
        scanf("%d",&marks[i]);
    }

    for (int s = 0; s < 5; s++)
    {
        printf("the value of numbers at index %d is %d \n",s,marks[s]);
    }
    
    


     
    return 0;
}