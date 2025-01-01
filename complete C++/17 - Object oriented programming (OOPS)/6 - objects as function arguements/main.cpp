#include <iostream> 

using namespace std;

class Rectangle {
public:
    int length;
    int width;
    // Function to calculate the area of the rectangle
    int area() {
        return length * width;
    }

    // Function to calculate the perimeter of the rectangle
    int perimeter() {
        return 2 * (length + width);
    }
};

// void printec(){ // we cannot access like this 
//     Rectangle.area()
// }

void printArea(Rectangle rect) {
    cout << "Area of the rectangle: " << rect.area() << endl;
}



int main(){

    // Create a Rectangle object
    Rectangle myRect;

    // Assign values to the length and width
    myRect.length = 10;
    myRect.width = 5;

    // Pass the object to the function
    printArea(myRect);

     
    return 0;
}