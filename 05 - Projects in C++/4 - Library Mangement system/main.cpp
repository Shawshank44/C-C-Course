#include <iostream> 
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Book {
    int id;
    string name;
    string author;
};

vector <Book> books;
const string FILE_NAME = "library_data.txt";

void loadBooks(){
    ifstream file(FILE_NAME);
    if (!file) return;
    Book b;
    while (file >> b.id)
    {
        file.ignore();
        getline(file,b.name);
        getline(file,b.author);
        books.push_back(b);
    }
    file.close();
    
}

void saveBooks(){
    ofstream file(FILE_NAME);
    for (const auto &b : books)
    {
        file<<b.id<<'\n'<<b.name<<'\n'<<b.author<<'\n';
    }
    file.close();
}

void addBook(){
    Book b;
    cout<<"Enter the Book ID : ";
    cin>>b.id;
    cin.ignore();
    cout<<"Enter Book Name : ";
    getline(cin,b.name);
    cout<<"Enter Author : ";
    getline(cin,b.author);
    books.push_back(b);
    saveBooks();
    cout<< "Book added successfully!"<<endl;
}

void searchBook(){
    cout<<"Search by (1) ID or (2) NAME : ";
    int choice;
    cin>>choice;
    cin.ignore();
    if (choice == 1)
    {
        int id;
        cout <<"Enter ID : ";
        cin>> id;
        for (const auto &b : books)
        {
            if (b.id == id )
            {
                cout<<"Found : "<<b.name<<" by "<<b.author<<endl;
                return;
            }
            
        }
    }else {
        string name;
        cout << "Enter Name: ";
        getline(cin, name);
        for (const auto &b : books) {
            if (b.name == name) {
                cout << "Found: " << b.name << " by " << b.author << "\n";
                return;
            }
        }
    }
    cout<<"Book not found !"<<endl;
}

void updateBook(){
    int id;
    cout <<"Enter ID to update : ";
    cin>>id;

    for (auto &b : books)
    {
        if (b.id == id)
        {
            cin.ignore();
            cout<<"Enter New Name : ";
            getline(cin,b.name);
            cout<<"Enter New Author : ";
            getline(cin,b.author);
            saveBooks();
            cout<<"Book Updated"<<endl;
            return;
        }
    }
    cout<<"Book Not found"<<endl;
}

void deleteBook(){
    int id;
    cout<<"Enter ID to delete : ";
    cin>>id;
    for (auto it = books.begin(); it != books.end(); ++it)
    {
        if (it->id == id)
        {
            books.erase(it);
            saveBooks();
            cout<<"Book deleted"<<endl;
            return;
        }
        
    }
    cout<<"Book Not found!"<<endl;
}

void Menu(){
    int choice;
    while (true)
    {
        cout<<"Library mangement system"<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. search Book"<<endl;
        cout<<"3. Update Book"<<endl;
        cout<<"4. Delete Book"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter the choice : ";
        cin>>choice;
        cin.ignore();
        switch (choice){
            case 1: addBook(); break;
            case 2: searchBook(); break;
            case 3: updateBook(); break;
            case 4: deleteBook(); break;
            case 5: return;
            default: cout<<"Invalid choice try again"<<endl;
        }
    }
    
}
int main(){
    loadBooks();
    Menu();


     
    return 0;
}