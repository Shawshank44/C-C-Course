#include<stdio.h> 

// Declaration of function prototype :
int Sum(int a, int b); 

void Stars (int num);

int TakeNum();

void displayMessage(void);


int main(){

    // printf("The Sum is %d \n", Sum(10,2));

    // Stars(10);

    // printf("The Number entered is %d \n", TakeNum());

    // displayMessage();
     
    return 0;
}


int Sum (int a, int b){ // with arguements with return value
    return a+b;
}

void Stars (int num){ // with arguements without return value
    for (int i = 0; i < num; i++)
    {
        printf("%c", '*');
    }
}

int TakeNum(){// without arguements with return value
    int i ;
    printf("Enter the Number : ");
    scanf("%d",&i);

    return(i);

}

void displayMessage(void) { // without arguments and without a return value

    printf("Hello, this is a message.\n");

}