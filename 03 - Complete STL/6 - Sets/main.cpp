#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;

template <typename S>
S printSet(const set<S>& mySet){
    for (const auto& elem : mySet) {
        cout << elem << " ";
    }

}

int main(){
    
    set <int> mySet;

    // inserting inside the set:
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);

    // iterator :
    // for (auto it = mySet.begin(); it != mySet.end(); ++it)
    // {
    //     cout<<"Prints using iterator : "<<*it<<endl;
    // }

    // Reverse iterator:
    // for (auto it = mySet.rbegin(); it != mySet.rend(); ++it)
    // {
    //     cout<<"Prints using iterator : "<<*it<<endl;
    // }

    // Count :
    // if (mySet.count(40)) {
    //     cout <<"exists in the set.\n";
    // } else {
    //     cout <<"does not exist in the set.\n";
    // }

    // erase :
    mySet.erase(40);

    //find:
    auto it = mySet.find(40);

    if (it != mySet.end()) {
        cout <<"exists in the set.\n";
    } else {
        cout <<"does not exist in the set.\n";
    }


    //empty :
    if (mySet.empty()) {
        cout << "The set is empty.\n";
    } else {
        std::cout << "The set is not empty.\n";
    }


    // Bound check:
    auto itlb = mySet.lower_bound(100);

    if (itlb != mySet.end()) {
        cout << "The first element not less than " << 100 << " is " << *it << ".\n";
    } else {
        cout << "No elements are not less than " << 100 << ".\n";
    }
    
    mySet.upper_bound(25);

    cout<<"The of the Set is : "<<mySet.size()<<endl;

    // clears set
    mySet.clear();

    printSet(mySet);
     
    return 0;
}