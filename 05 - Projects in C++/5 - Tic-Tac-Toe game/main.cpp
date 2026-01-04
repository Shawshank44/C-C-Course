#include <iostream> 

using namespace std;

const int SIZE = 3;

char board[SIZE][SIZE] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void displayBoard(){
    cout<<"\n";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout<<" "<<board[i][j]<<" ";
            if (j < SIZE - 1)cout<<"|";
        }
        cout<<"\n";
        if(i<SIZE-1)cout<<"---|---|---\n";
    }
}

bool checkWin(char player){
    for (int i = 0; i < SIZE; i++)
    {
        // check rows and columns
        if ((board[i][0]==player && board[i][1] == player && board[i][2] == player )||(board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }
    
    return false;
    
}

bool isDraw(){
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j]>='1' && board[i][j]<= '9')
            {
                return false;
            }
        }
    }
    return true;
    
}

bool makeMove(char player){
    int move;
    cout<<"\n Player "<<player<<" , enter your move (1 - 9) : ";
    cin>>move;

    if (move < 1 || move > 9){
        cout<<"Invalid move! Try again. \n";
        return false;
    }

    int row = (move - 1)/SIZE;
    int col = (move - 1)%SIZE;

    if (board[row][col]== 'X' || board[row][col] == 'O')
    {
        cout<<"Cell Already occupied! try again. \n";
        return false;
    }
    board[row][col] = player;
    return true;
}

int main(){

    char currentPlayer = 'X';
    bool gameWon = false;

    displayBoard();

    while (!gameWon && !isDraw())
    {
        if (makeMove(currentPlayer))
        {
            displayBoard();
            if (checkWin(currentPlayer))
            {
                cout<<"\n Player "<<currentPlayer<<" wins!\n";
                gameWon = true;
            }else if (isDraw())
            {
                cout<<"\n It's a Draw! \n";
            }else{
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }
        
    }
    


     
    return 0;
}