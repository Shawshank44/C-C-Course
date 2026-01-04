#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates'

using namespace std;

template <typename Key, typename Value>
void PrintUnorderedMultiMap(const unordered_multimap<Key, Value>& myunordered_multimap){
    std::cout << "{\n";
    for (const auto& pair : myunordered_multimap) {
        cout << "  " << pair.first << ": " << pair.second << "\n";
    }
    cout << "}\n";
}

int main(){

    unordered_multimap<string,int> age;

    // insertion:
    age.insert({"Jacky", 31});
    age.insert({"Jacky", 29});
    age.insert({"Jeremy", 27});
    age.insert({"gary",29});
    age.emplace("chris",25);
    age.emplace("Jacky", 54);

    // Deletion :
    age.erase("chris");

    // Search :
    auto it = age.find("gary");

    if (it != age.end()) {
        std::cout << "Found key : " << it->first << " -> " << it->second << "\n";
    } else {
        std::cout << "Key not found.\n";
    }

    //Range elements :
    auto range = age.equal_range("Jacky");

    cout << "Elements with key 'Jacky':\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    // count
    int appleCount = age.count("Jacky");
    std::cout << "Number of elements with key 'apple': " << appleCount << "\n";

    //capacity
    cout<<"The size of the unordered multimap is : "<<age.size()<<endl;

    if (age.empty()) {
        std::cout << "The unordered_multimap is empty.\n";
    } else {
        std::cout << "The unordered_multimap is not empty.\n";
    }

    PrintUnorderedMultiMap(age);


    //iterator :
    for (auto it = age.begin(); it != age.end(); ++it)
    {
        cout<<"Using Iterator : "<<it->first<< " -> "<<it->second<<endl;
    }


    // Clear :
    age.clear();


    cout<<"The size of the unordered multimap is : "<<age.size()<<endl;



     
    return 0;
}