#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Constructor with default arguments
    Box(int l = 1, int w = 1, int h = 1) {
        length = l;
        width = w;
        height = h;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Box box1;           // Uses all default values (1, 1, 1)
    Box box2(5);        // Uses default values for width and height (5, 1, 1)
    Box box3(5, 10);    // Uses default value for height (5, 10, 1)
    Box box4(5, 10, 15); // No default values used (5, 10, 15)

    box1.display();
    box2.display();
    box3.display();
    box4.display();

    return 0;
}
