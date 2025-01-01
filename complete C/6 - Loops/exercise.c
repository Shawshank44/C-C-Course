#include<stdio.h> 

int main(){
    int n, num, i = 0, sum = 0;
    printf("Enter the Number of elements : ");
    scanf("%d",&n);

    do
    {
        printf("Enter the %d : ", i + 1);
        scanf("%d",&num);
        sum += num;
        i++;
        
    } while (i<n);

    printf("Sum : %d \n",sum);
    
     
    return 0;
}