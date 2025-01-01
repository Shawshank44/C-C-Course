#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;

template <typename MS>
MS printSet(const multiset<MS>& myMultiSet){
    for (const auto& elem : myMultiSet) {
        cout << elem << " ";
    }

}

int main(){

    multiset<int> mset;

    // insertion :
    mset.insert(10);
    mset.insert(20);
    mset.insert(20);
    mset.insert(30);
    mset.insert(50);
    mset.insert(30);

    mset.emplace(60);

    //accessing :
    int value = 100;
    auto it = mset.find(value);

    if(it != mset.end()){
        cout << "First occurrence of " << value << " found at: " << *it << endl;
    }else {
        cout << value << " not found in the multiset." << endl;
    }

    // Count :
    int cvalue = 20;
    std::cout << "The count of " << cvalue << " is: " << mset.count(cvalue) << std::endl;

    
    // Deletion :
    mset.erase(20);

    cout<<"The size of the multiset is : "<<mset.size()<<endl;

    if (mset.empty()) {
        cout << "The multiset is empty." << endl;
    }else{
        cout << "The multiset is not empty."<<endl;
    }

    // iterator :
    for (auto it = mset.begin(); it != mset.end(); ++it)
    {
        cout<<"Using iterator : "<<*it<<endl;
    }

    // bound check:
    int lbvalue = 20;
    auto itlb = mset.lower_bound(lbvalue);

    if (itlb != mset.end()) {
        cout << "The lower bound of " << lbvalue << " is: " << *itlb << endl;
    } else {
        cout << "No element not less than " << lbvalue << " found in the multiset." << endl;
    }

    // range :
    int rvalue = 20;
    auto range = mset.equal_range(rvalue);

    cout << "Elements equal to " << rvalue << ": ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;



    printSet(mset);
    
     
    return 0;
}