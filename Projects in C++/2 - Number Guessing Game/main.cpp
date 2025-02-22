#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

void PlayGame(int maxtries, int range){
    srand(time(0));
    int SecretNumber = rand() % range + 1;
    int guess, attempts = 0;

    cout<<"Guess the number between 1 and "<<range<<endl;

    while (attempts < maxtries)
    {
        cout<<"Attempts "<<attempts + 1 <<" / "<<maxtries<<": Enter your guess : ";
        cin>>guess;
        attempts++;

        if (guess == SecretNumber)
        {
            cout<<"Congratulations! you guessed the numbers in "<<attempts<<" attempts."<<endl;
            return;
        }else if (guess < SecretNumber){
            cout<<"Too low! try again."<<endl;
        }else{
            cout<<"Too high! try again"<<endl;
        }
        
    }
    cout<<"Game over! The correct number was "<<SecretNumber<<endl;

}

int main(){
    int maxtries = 5, range = 10;
    char playagain;

    do
    {
        PlayGame(maxtries,range);
        cout<<"Do you want to play the game once again? (y/n) : ";
        cin>>playagain;
    } while (playagain == 'y' || playagain == 'Y');
    
    cout<<"Thanks for playing!"<<endl;
     
    return 0;
}