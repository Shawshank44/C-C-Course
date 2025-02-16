#include <iostream>
#include <memory>

using namespace std;

int add(int a, int b) {// 5. question function
    return a + b;
}

int subtract(int a, int b) {// 5. question function
    return a - b;
}

int multiply(int a, int b) {// 5. question function
    return a * b;
}

void operate(int x, int y, int (*funcPtr)(int, int)) {// 5. question function
    cout << "Result: " << funcPtr(x, y) << endl;
}

void printArray(int *arr, int size) {// 6. question function
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";  
    }
    cout << endl;
}

void reverseArray(int *arr, int size) { // 8. question function
    int *left = arr, *right = arr + size - 1;
    while (left < right) {
        swap(*left, *right);
        left++;
        right--;
    }
}

struct Student {// 9. Question struct
    string name;
    int age;
};


struct Node {//10. Question struct
    int data;
    Node* next;
};

void insert(Node*& head, int value) {//10. Question function
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void deleteNode(Node*& head, int value) {//10. Question function
    Node* temp = head, *prev = nullptr;
    
    if (temp != nullptr && temp->data == value) {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) return;

    prev->next = temp->next;
    delete temp;
}

void display(Node* head) {//10. Question function
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

class Identity { //11. Question class
    public:
        string name;
        Identity(string n) : name(n) {
            cout << name << " created.\n";
        }
        ~Identity() {
            cout << name << " destroyed.\n";
        }
};



int main(){

    // 1.Basic pointers :
    // int num = 42;  
    // int *ptr = &num;
    // cout << "Value of num: " << num << endl;
    // cout << "Address of num: " << &num << endl;
    // cout << "Value using pointer: " << *ptr << endl;
    // cout << "Pointer address: " << ptr << endl;

    // 2.Swaping numbers using pointers :
    // int a = 10, b = 20;

    // cout << "Before swap: a = " << a << ", b = " << b << endl;

    // int *aptr = &a, *bptr = &b;
    // int temp = *aptr;
    // *aptr = *bptr;
    // *bptr = temp;
    
    // cout << "after swap: a = " << a << ", b = " << b << endl;

    // 3. Pointer Arithmatic:
    // int num = 10;
    // int *ptr = &num;

    // (increment ++) :
    // cout<<*ptr<<endl;
    // (*ptr)++;
    // cout<<*ptr<<endl;

    // using for loop:
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<(*ptr)++<<endl;
    // }

    // (decrement --) :
    // cout<<*ptr<<endl;
    // (*ptr)--;
    // cout<<*ptr<<endl;

    // using for loop:
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<(*ptr)--<<endl;
    // }

    // distance problem: 
    // int arr[] = {5, 10, 15, 20, 25};
    // int *start = arr; 
    // int *end = arr + 4; // Points to last element

    // cout << "Distance between start and end: " << (end - start) << endl;

    // Iteration through array using pointer arithmatic :
    // int arr[] = {2, 4, 6, 8, 10};
    // int *ptr = arr;

    // for (int i = 0; i < 5; i++) {
    //     cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic
    // }


    // 4.Dynamic memory allocation :
    // int n;
    // cout << "Enter the number of elements: ";
    // cin >> n;

    // // Dynamically allocate memory for the array
    // int* arr = new int[n];

    // cout << "Enter " << n << " numbers:\n";
    // for (int i = 0; i < n; i++) {
    //     std::cin >> arr[i];
    // }

    // // Initialize largest and smallest with the first element
    // int largest = arr[0], smallest = arr[0];

    // // Traverse the array to find largest and smallest elements
    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > largest) {
    //         largest = arr[i];
    //     }
    //     if (arr[i] < smallest) {
    //         smallest = arr[i];
    //     }
    // }

    // cout << "Largest number: " << largest << std::endl;
    // cout << "Smallest number: " << smallest << std::endl;

    // // Free the allocated memory
    // delete[] arr;


    // Intermediate Problems :
    // 5.Pointer to Function
    // int a = 10, b = 5;
    // operate(a, b, add);
    // operate(a, b, subtract);
    // operate(a, b, multiply);

    // 6.Array pointer :
    // int arr[] = {10, 20, 30, 40, 50};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // printArray(arr, size);

    // 7. Pointer to Pointer :
    // int num = 100;
    // int *ptr1 = &num;
    // int **ptr2 = &ptr1;

    // cout << "Value of num: " << num << endl;
    // cout << "Value using ptr1: " << *ptr1 << endl;
    // cout << "Value using ptr2: " << **ptr2 << endl;
    
    // cout << "Address of num: " << &num << endl;
    // cout << "Address stored in ptr1: " << ptr1 << endl;
    // cout << "Address stored in ptr2: " << ptr2 << endl;

    // 8. Reversing of the array :
    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // cout << "Original array: ";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // reverseArray(arr, size);

    // cout << "Reversed array: ";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // Advance level :
    // 9. Pointer Structure :
    // Student *stuPtr = new Student;  

    // cout << "Enter student name: ";
    // cin >> stuPtr->name;
    // cout << "Enter student age: ";
    // cin >> stuPtr->age;

    // cout << "\nStudent Details:" << endl;
    // cout << "Name: " << stuPtr->name << endl;
    // cout << "Age: " << stuPtr->age << endl;

    // delete stuPtr;  


    //10.Singly Linked List Using Pointers :
    // Node* head = nullptr;

    // insert(head, 10);
    // insert(head, 20);
    // insert(head, 30);

    // cout << "Linked List: ";
    // display(head);

    // deleteNode(head, 20);
    // cout << "After deletion: ";
    // display(head);

    // 11. Smart PointersL:
    // unique_ptr<Identity> stu1 = make_unique<Identity>("Alice");
    
    // shared_ptr<Identity> stu2 = make_shared<Identity>("Bob");
    // shared_ptr<Identity> stu3 = stu2;  

    // cout << "Shared count: " << stu2.use_count() << endl;

    // 12. 2D Dynamic Array Using Pointers
    // int rows = 3, cols = 3;
    // int **matrix = new int*[rows];

    // for (int i = 0; i < rows; i++) {
    //     matrix[i] = new int[cols];
    // }

    // cout << "Enter matrix elements:\n";
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }

    // cout << "\nMatrix:\n";
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < rows; i++) {
    //     delete[] matrix[i];
    // }
    // delete[] matrix;

    
    return 0;
}