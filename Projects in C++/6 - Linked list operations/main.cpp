#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class SinglyLinkedList
{
private:
    Node *head;

public:
    SinglyLinkedList() { head = nullptr; }

    void add(int value)
    {
        Node *newNode = new Node{value, nullptr};
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
    void remove(int value)
    {
        if (!head)
        {
            cout << "List is empty. \n";
            return;
        }
        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *temp = head;
        while (temp->next && temp->next->data != value)
            temp = temp->next;

        if (temp->next)
        {
            Node *toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
        else
        {
            cout << "Value not found. \n";
        }
    }
    void update(int oldValue, int newValue)
    {
        Node *temp = head;
        while (temp)
        {
            if (temp->data == oldValue)
            {
                temp->data = newValue;
                return;
            }
            temp = temp->next;
        }
        cout << "Value not found. \n";
    }
    bool search(int value)
    {
        Node *temp = head;
        while (temp)
        {
            if (temp->data == value)
                return true;
            temp = temp->next;
        }
        return false;
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL \n";
    }
    ~SinglyLinkedList()
    {
        Node *temp;
        while (head)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Doubly Linked List :
struct dNode
{
    int data;
    dNode *prev;
    dNode *next;
};

class DoublyLinkedList
{
private:
    dNode *head;

public:
    DoublyLinkedList() { head = nullptr; }

    void add(int value)
    {
        dNode *newNode = new dNode{value, nullptr, nullptr};
        if (!head)
        {
            head = newNode;
            return;
        }
        dNode *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    void remove(int value)
    {
        if (!head)
        {
            cout << "List is empty. \n";
            return;
        }
        dNode *temp = head;
        while (temp && temp->data != value)
            temp = temp->next;

        if (!temp)
        {
            cout << "Value not found. \n";
            return;
        }
        if (temp->prev)
            temp->prev->next = temp->next;
        if (temp->next)
            temp->next->prev = temp->prev;
        if (temp == head)
            head = temp->next;

        delete temp;
    }
    void update(int oldValue, int newValue)
    {
        dNode *temp = head;
        while (temp)
        {
            if (temp->data == oldValue)
            {
                temp->data = newValue;
                return;
            }
            temp = temp->next;
        }
        cout << "Value not found. \n";
    }
    bool search(int value)
    {
        dNode *temp = head;
        while (temp)
        {
            if (temp->data == value)
                return true;
            temp = temp->next;
        }
        return false;
    }
    void display()
    {
        dNode *temp = head;
        while (temp)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL \n";
    }

    void DisplayReverse()
    {
        if (!head)
        {
            cout << "List is empty. \n";
            return;
        }
        dNode *temp = head;
        while (temp->next)
            temp = temp->next;
        while (temp)
        {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }
    ~DoublyLinkedList()
    {
        dNode *temp;
        while (head)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{

    // Singly Linked :
    // SinglyLinkedList list;
    // list.add(10);
    // list.add(20);
    // list.add(30);
    // list.add(40);
    // list.add(50);
    // list.add(60);
    // list.add(70);
    // cout<<"Initial List : ";
    // list.display();

    // list.remove(20);
    // cout<<"after deletion List : ";
    // list.display();

    // list.update(30,80);
    // cout<<"after update List : ";
    // list.display();

    // int search = 40;
    // cout<<"Searching "<<search<<(list.search(40) ? " Found\n" : "Not Found\n");

    // Doubly Linked List :
    // DoublyLinkedList dlist;

    // dlist.add(10);
    // dlist.add(20);
    // dlist.add(30);
    // dlist.add(40);
    // dlist.add(50);
    // dlist.add(60);
    // dlist.add(70);
    // cout << "Initial List : ";
    // dlist.display();

    // dlist.remove(20);
    // cout << "after deleting List : ";
    // dlist.display();

    // dlist.update(30, 80);
    // cout << "after updating List : ";
    // dlist.display();

    // int search = 40;
    // cout << "Searching " << search << (dlist.search(40) ? " Found\n" : "Not Found\n");

    // cout << "Reversing Display : ";
    // dlist.DisplayReverse();

    return 0;
}