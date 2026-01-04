#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates'

using namespace std;

template <typename UMS>
UMS printSet(const unordered_multiset<UMS>& myunordered_multiset){
    for (const auto& elem : myunordered_multiset) {
        cout << elem << " "<<endl;
    }

}

int main(){

    unordered_multiset <int> ums;

    // insertion :
    ums.insert(10);
    ums.insert(10);
    ums.insert(20);
    ums.insert(30);
    ums.insert(10);
    ums.insert(40);
    ums.insert(10);
    ums.emplace(60);
    ums.emplace(70);

    // Deletion :
    ums.erase(70);

    // accessing the elements
    auto it = ums.find(20);

    if (it != ums.end()) {
        std::cout << "Element found: " << *it << "\n";
    } else {
        std::cout << "Element not found\n";
    }

    int count = ums.count(10);
    cout << "Number of occurrences of 20: " << count << "\n";

    printSet(ums);

    // Range :
    // Use equal_range to get all occurrences of 10
    auto range = ums.equal_range(10);

    std::cout << "All occurrences of 10:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " "<<endl;
    }


    // capacity :
    cout<<"The size of the Unordered multi set is : "<<ums.size()<<endl;

    if (ums.empty()) {
        std::cout << "The unordered_multiset is empty.\n";
    } else {
        std::cout << "The unordered_multiset is not empty.\n";
    }


    // iterator :
    for (auto it = ums.begin() ; it != ums.end(); ++it)
    {
        cout<<"displaying elements using iterator : "<<*it<<endl;
    }
    

    // clear :
    ums.clear();
    cout<<"The size of the Unordered multi set is : "<<ums.size()<<endl;

     
    return 0;
}