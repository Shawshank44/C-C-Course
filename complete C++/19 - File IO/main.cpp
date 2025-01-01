#include <iostream>
#include <fstream>

using namespace std;

/*
    The Useful Classes for working with files in c++ are:
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
*/

// In order work with the files in c++, you will have to open it. primarily, there are 2 ways to open a file:
// 1. using the constructor.
// 2. using the member functions open() of the class.

int main(){

    // string st = "Hello this is a new file ";
    // ofstream write("Sample.txt");// writing operations you can name anything 
    // write<<st;
    // write.close();

    // ifstream read("Sample.txt");
    // string st1;
    // getline(read,st1); // read string
    // read>>st1;
    // cout<<st1;

    // other ways with open():
    // ofstream out;
    // out.open("Sample.txt");
    // out<<"This are the other ways to write"<<endl;
    // out<<"This is first line"<<endl;
    // out<<"This is second line"<<endl;
    // out<<"This is third line"<<endl;
    // out.close();

    ifstream in;
    string st;
    in.open("Sample.txt");
    // getline(in,st);
    // cout<<st;

    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    

    in.close();
     
    return 0;
}