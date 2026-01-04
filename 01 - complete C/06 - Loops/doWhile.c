#include<stdio.h> 

int main(){

    // Do while loop :

    int i = 1, num;
    printf("Enter the Number for tables : ");
    scanf("%d",&num);

    do{  
        printf("%d X %d = %d \n",num,i,num*i);
        i ++;
    }while (i<=10);

    int number;

    // do-while loop  Exercise:
    // do {
    //     printf("Please enter a positive number: ");
    //     scanf("%d", &number);

    //     if (number <= 0) {
    //         printf("That's not a positive number. Try again.\n");
    //     }
    // } while (number <= 0);

    // printf("Thank you! You entered a positive number: %d\n", number);

    return 0;
}