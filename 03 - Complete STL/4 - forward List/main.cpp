#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;

template <typename FL>
FL printForwardList(const forward_list <FL> & fl ){
    for (const auto &element : fl) { // Use a range-based for loop for simplicity
        cout << element << " ";
    }
    std::cout << std::endl;
}

int main(){

    forward_list <int> fl {1,2,3,4,5};
    printForwardList(fl);

    // Iterators :
    // cout<<"Using Iterator"<<endl;
    // for (auto it = fl.begin(); it != fl.end(); ++it)
    // {
    //     cout<<*it<<endl;
    // }

    // adding and inserting elements :
    fl.push_front(0); // adds element at the first position 

    auto it = fl.begin(); // iterator

    for(int i = 0; i < 3; i++) ++it; // iterator loop

    fl.insert_after(it, 10); //Insert elements after a specific position.

    printForwardList(fl);

    // removing elements :

    fl.pop_front();

    auto rit = fl.begin(); // iterator

    for(int i = 0; i < 0; i++) ++rit; // iterator loop

    fl.erase_after(rit); //removes elements after a specific position.

    fl.remove(10); // removes the specific element
    
    printForwardList(fl);

    if (fl.empty()) {
        cout << "forward list is empty." << endl;
    } else {
        cout << "forward list is not empty." << endl;
    }

    cout<<"the first element in forward list : "<<fl.front()<<endl;
    
    fl.reverse();
    printForwardList(fl);

    fl.clear();
    printForwardList(fl);
    



     
    return 0;
}