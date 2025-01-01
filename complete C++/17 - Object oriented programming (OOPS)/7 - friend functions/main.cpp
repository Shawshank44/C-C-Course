#include <iostream> 

using namespace std;

/*
    A friend function in C++ is a function that is not a member of a class but has access to its private and protected members. 
    It is useful when you need to allow a non-member function to access a class's private data.
*/

class Box {
    private: 
        int length;
        int width;
        int height;
    public: 
        friend int calculateVolume(Box b);

        void setDimensions(int l, int w, int h) {
            length = l;
            width = w;
            height = h;
        }
};

int calculateVolume(Box b) { // this is not a member of class
    return b.length * b.width * b.height;  // Accessing private members directly
}

int main(){

    Box box;

    // Setting dimensions using a public member function
    box.setDimensions(5, 6, 7);

    // Calling the friend function to calculate volume
    cout << "The volume of the box is: " << calculateVolume(box) << endl;

     
    return 0;
}