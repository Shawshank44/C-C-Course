#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;

void PrintPriorityQueue(priority_queue <int> pq){
    cout << "Priority Queue elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main(){

    priority_queue <int> pq;

    // insertion :
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.emplace(50);

    // deletion :
    pq.pop();

    //accessing :
    cout<<"The Top most element of the priority queue is : "<<pq.top()<<endl;

    //capacity :
    cout<<"The size of the priority queue is : "<<pq.size()<<endl;

    if (pq.empty()) {
        cout << "\nThe priority queue is now empty." << endl;
    }else{
        cout<<"The priority queue is not empty"<<endl;
    }

    PrintPriorityQueue(pq);


     
    return 0;
}