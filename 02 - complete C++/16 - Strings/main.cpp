#include <iostream> 
#include <string> // include the string header file

using namespace std;


int main(){

    // Initialization :
    // string str = "Hello world";
    // cout<<str<<endl;
    // string str1("How are you");
    // cout<<str1<<endl;
    // string str2;
    // str2 = "I'm initiaziling the string";
    // cout<<str2<<endl;

    // String Concatenation :
    // string firstname = "John";
    // string lastname  = "Doe";
    // string fullname = firstname + " " + lastname;
    // cout<<fullname<<endl;

    // Accessing Characters :
    // string msg = "Hello";
    // cout<<msg[0]<<endl;
    // cout<<msg.at(1)<<endl;

    // String Length :
    // string msg = "Hello how are you";
    // cout << "Length of string: " << msg.length() <<endl;

    // Substring :
    // string str = "Hello, World!";
    // cout<<str.substr(7,5)<<endl; 
    /*
        Starting Position (7): This is the index from where the substring extraction will begin. In this case, 
        7 refers to the 8th character in the string str (since indexing starts from 0). The character at index 7 is 'W'.
        Length of Substring (5): This specifies how many characters to extract starting from the 7th index. Here, 
        it means extracting 5 characters starting from 'W'.
    */


    // Comparision of string :
    // string str1 = "Hello";
    // string str2 = "Hello";

    // if (str1 == str2) {
    //     cout << "Strings are equal" << endl;
    // } else {
    //     cout << "Strings are not equal" << endl;
    //}

    // finding the string : 
    // string str = "Hello this is c++";
    // int pos = str.find("this");
    // cout<<pos<<endl;

    // Replacing Substrings :
    // string str1 = "hello world";
    // str1.replace(6,5,"c++");
    // cout<<str1<<endl;

    //appending in string :
    // string str = "Hello";
    // str.append(", World!");
    // cout<<str<<endl;

    // erasing is substring :
    // string str = "Hello, World!";
    // str.erase(5, 7);
    // cout<<str<<endl;

    // inserting substrings :
    // string str = "Hello, !";
    // str.insert(7, "World");
    // cout<<str<<endl;

    // Converting Strings to Numbers and Vice Versa
    // string numberStr = "12345";
    // int number = stoi(numberStr);
    // string anotherStr = to_string(6789);
    // cout<<numberStr<<endl;
    // cout<<anotherStr<<endl;

    // iteration of strings :
    // string str = "C++";
    // for (char ch : str) {
    //     cout<<ch;
    // }

    // user inputs of string
    // string word;
    
    // cout << "Enter a word: ";
    // cin >> word;  // Takes input until the first whitespacen
    
    // cout << "You entered: " << word << endl;


    // string sentence;
    
    // cout << "Enter a sentence: ";
    // getline(std::cin, sentence);  // Takes the entire line including spaces
    
    // cout << "You entered: " << sentence <<endl;
     
    return 0;
}