#include <iostream> 

using namespace std;


int main(){

    int command;

    cout << "Enter a command (1-4):\n";
    cout << "1: Start\n";
    cout << "2: Stop\n";
    cout << "3: Pause\n";
    cout << "4: Exit\n";
    cin >> command;

    switch(command) {
        case 1:
            cout << "Starting...\n";
            cout<<"clicked 1 entered !"<<endl;
            break;
        case 2:
            cout << "Stopping...\n";
            cout<<"clicked 2 entered !"<<endl;
            break;
        case 3:
            cout << "Pausing...\n";
            cout<<"clicked 3 entered !"<<endl;
            break;
        case 4:
            cout << "Exiting...\n";
            cout<<"clicked 4 entered !"<<endl;
            break;
        default:
            cout << "Invalid command!\n";
            break;
    }
     
    return 0;
}