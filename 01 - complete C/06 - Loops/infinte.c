#include<stdio.h> 

int main(){

    int num, sum = 0;

    printf("Enter numbers to sum (Enter -1 to exit) : \n");

    while (1)
    {
        printf("Enter number : ");
        scanf("%d",&num);

        if (num == -1)
        {
            break;
        }

        sum += num;
        
    }

    printf("Sum : %d \n",sum);
    
     
    return 0;
}