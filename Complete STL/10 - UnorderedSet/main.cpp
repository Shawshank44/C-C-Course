#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates'

using namespace std;

template <typename US>
US printSet(const unordered_set<US>& myunordered_set){
    for (const auto& elem : myunordered_set) {
        cout << elem << " "<<endl;
    }

}

int main(){

    unordered_set<int> us;

    // insertion and deletion
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(40);
    us.insert(50);
    us.emplace(60);

    us.erase(60);

    printSet(us);

    // searching 
    int key = 30;

    // Use find() to search for an element
    auto it = us.find(key);

    if (it != us.end()) {
        std::cout << "Element " << key << " found in the unordered_set.\n";
    } else {
        std::cout << "Element " << key << " not found in the unordered_set.\n";
    }

    if (us.count(key) > 0) {
        std::cout << "Element " << key << " exists in the unordered_set.\n";
    } else {
        std::cout << "Element " << key << " does not exist in the unordered_set.\n";
    }

    // capacity :
    cout<<"The size of the unordered set is "<<us.size()<<endl;

    if (us.empty()) {
        cout << "The unordered_set is empty.\n";
    }else{
        cout << "the unordered set is not empty"<<endl;
    }

    // iterator:
    for (auto it = us.begin(); it != us.end(); ++it)
    {
        cout<<"Iterator method "<<*it<<endl;
    }

    //memory allocations
    us.reserve(10);
    cout << "Initial bucket count: " << us.bucket_count() << "\n";

    printSet(us);    

    // clear set :
    us.clear();

    cout<<"The size of the unordered set is "<<us.size()<<endl;



     
    return 0;
}