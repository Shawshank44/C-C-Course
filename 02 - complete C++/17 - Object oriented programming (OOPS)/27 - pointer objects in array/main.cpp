#include <iostream> 

using namespace std;

class Shop{
    private:
        int id;
        int price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout << "The id of the item is : "<<id<<endl;
            cout << "The Price of the item is : "<<price<<endl;
        }

};

int main(){
    int size = 2;
    Shop *ptr = new Shop[size];

    for (int i = 0; i < size; i++)
    {
        int itemid;
        float itemprice;
        cout << "Enter the Item ID and price for item " << i + 1 << ": "<<endl;
        cin >> itemid >> itemprice;
        (ptr + i)->setData(itemid, itemprice);  // Accessing objects using pointer arithmetic
    }
    

    for (int i = 0; i < size; i++) {
        cout << "Details of item " << i + 1 << ": " << endl;
        (ptr + i)->getData();
    }

    // Free dynamically allocated memory
    delete[] ptr;  // Free the array of objects

     
    return 0;
}