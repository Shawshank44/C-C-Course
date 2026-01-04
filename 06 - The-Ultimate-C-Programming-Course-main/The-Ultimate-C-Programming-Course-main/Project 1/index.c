#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));

    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random Number: %d \n", randomnumber);

    

    do
    {
        printf("Guess the number : ");

        scanf("%d", &guessed);

        if (guessed > randomnumber)
        {
            printf("lower number please \n");

        } else if (guessed < randomnumber) {

            printf("Higher number please \n");

        }else{
            printf("congrats ");
        }
        no_of_guesses++;

    } while (guessed != randomnumber);

    printf("you guessed th number in %d guesses", no_of_guesses);
    
    
    return 0;
}