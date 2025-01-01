#include<stdio.h> 

// factorial:
int Factorial(int number){
    if (number == 1 || number == 0)
    {
        return 1;
    }else{
        return(number * Factorial(number - 1));
    }
}

int Fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
    
}

int main(){

    int num;

    // printf("Enter the number you want the factorial of : ");
    // scanf("%d",&num);
    // printf("The factoral of %d is %d",num, Factorial(num));

    printf("Enter the positive integer : ");
    scanf("%d",&num);

    printf("Fibonacci series up to %d terms : \n",num);
    for (int i = 0; i < num; ++i)
    {
        printf("%d",Fibonacci(i));
    }
    printf("\n");
    

     
    return 0;
}