#include<stdio.h> 

int main(){

    // While loop:
    int i = 1, num;
    printf("Enter the Number for tables : ");
    scanf("%d",&num);

    
    while (i<=10)
    {
        printf("%d X %d = %d \n",num,i,num*i);
        i ++;
    }
    
     
    return 0;
}