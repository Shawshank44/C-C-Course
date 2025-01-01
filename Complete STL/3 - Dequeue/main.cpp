#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;

template <typename D>
D printDEQ(const deque <D> & deq ){
    for (const auto &element : deq) { // Use a range-based for loop for simplicity
        cout << element << " ";
    }
    std::cout << std::endl;
}



int main(){

    deque <int> deq {1,2,3,4,5};

    printDEQ(deq);

    // iterators 
    // cout<<"using iterators"<<endl;
    // for (auto it = deq.begin(); it != deq.end(); ++it)
    // {
    //     cout<<*it<<endl;
    // }
    // cout<<"using reverse iterators"<<endl;
    // for (auto it = deq.rbegin(); it != deq.rend(); ++it)
    // {
    //     cout<<*it<<endl;
    // }


    // adding and inserting the elements :
    deq.push_back(6); // inserts an element at the end of the deque
    deq.push_front(0);// inserts an element at the begining of the deque
    deq.insert(deq.begin() + 3, 25); // inserts an element at the specific index 
    // printDEQ(deq);

    // accessing and modifying a particular elemnt in the dequeue
    // Accessing :
    cout<<"accessing a particular element with [] operator : "<<deq[4]<<endl;
    cout<<"accessing a particular element with at() functions : "<<deq.at(3)<<endl;
    cout<<"Accessing the First element "<<deq.front()<<endl;
    cout<<"Accessing the last element "<<deq.back()<<endl;

    // Modifying :
    deq[0] = 11;
    deq.at(3) = 40;

    // printDEQ(deq);

    // Erasing and removing an element :
    deq.pop_back();
    deq.pop_front();
    deq.erase(deq.begin() + 2);

    cout<<"The size of the deque is : "<< deq.size()<<endl;

    if (deq.empty()) {
        cout << "deque is empty." << endl;
    } else {
        cout << "deque is not empty." << endl;
    }

    printDEQ(deq);

    
    
     
    return 0;
}