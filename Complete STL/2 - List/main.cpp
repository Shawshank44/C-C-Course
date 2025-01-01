#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;

template <typename L>
L PrintList(const list<L> & lis){
    for (const auto &element : lis) { // Use a range-based for loop for simplicity
        cout << element << " ";
    }
    std::cout << std::endl;
}


int main(){

    list <int> lis {1,2,3,4,5};

    PrintList(lis);

    // Iterartor :
    // cout<<"Using the iterator"<<endl;
    // for (auto it = lis.begin() ; it != lis.end(); ++it)
    // {
    //     cout<<*it<<endl;
    // }

    // cout<<"Using the reverse iterator"<<endl;
    // for (auto it = lis.rbegin() ; it != lis.rend(); ++it)
    // {
    //     cout<<*it<<endl;
    // }

    // Adding and inserting the elements 
    lis.push_back(6); // adds element at end of the list
    lis.push_front(0); // adds element at the front of the list

    // auto Iit = lis.begin(); // iterator
    // advance(Iit, 3); // Move the iterator to the third element (utility funtion)
    // lis.insert(Iit, 25); // inserts at the specific function
    
    // PrintList(lis);

    // erasing and removing the elements
    lis.pop_back(); // removes an element at the end of the list
    lis.pop_front(); // removes the first element from the list
    // Declare the iterator once and use it later
    auto it = lis.begin(); // iterator
    std::advance(it, 2); // Move iterator to the third element (25)
    lis.erase(it);  // Remove the third element (25)

    // PrintList(lis);

    // capacity and size:
    cout<<"The size of List is "<<lis.size()<<endl;

    if (lis.empty()) {
        cout << "list is empty." << endl;
    } else {
        cout << "list is not empty." << endl;
    }


    // Sort 

    auto Iit = lis.begin(); // iterator
    advance(Iit, 3); // Move the iterator to the third element (utility funtion)
    lis.insert(Iit, 25); // inserts at the specific function

    lis.sort();

    PrintList(lis);
    

     
    return 0;
}