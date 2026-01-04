#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;

void PrintQueue(queue <int> q){
    if (q.empty()) {
        std::cout << "Queue is empty.\n";
        return;
    }
    std::cout << "Queue elements: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop(); // Remove the front element
    }
    std::cout << "\n";
}

int main(){

    queue <int> q;

    // insertion :
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.emplace(60);

    // Deletion :
    q.pop();

    // Accessing :
    cout<<"The First element in the "<<q.front()<<endl;
    cout<<"The last element in the "<<q.back()<<endl;

    // capacity : 
    cout<<"The size of the queue is : "<<q.size()<<endl;

    if (q.empty()) {
        std::cout << "The queue is empty.\n";
    }else{
        std::cout << "The queue is not empty.\n";
    }

    PrintQueue(q);




     
    return 0;
}