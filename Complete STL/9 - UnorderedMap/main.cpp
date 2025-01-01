#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

template <typename Key, typename Value>
void unorderedMap(const unordered_map<Key, Value>& myunordered_map){
    std::cout << "{\n";
    for (const auto& pair : myunordered_map) {
        cout << "  " << pair.first << ": " << pair.second << "\n";
    }
    cout << "}\n";
}

int main(){

    unordered_map <string,int> age;

    // inserting :
    age["Tracy"] = 30;
    age.insert({"john",35});
    age.emplace("jack",32);
    age.emplace("gary",40);

    unorderedMap(age);


     // Searching
    string key = "Tracy";

    // Using find() to locate the key
    auto it = age.find(key);

    if (it != age.end()) {
        // Key found, print value
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    } else {
        // Key not found
        cout << "Key \"" << key << "\" not found in the unordered_map." << endl;
    }

    // Erasing:
    age.erase("Tracy");

    unorderedMap(age);

    //size :
    cout<<"The size of the unordered map is : "<<age.size()<<endl;

    if (age.empty()) {
        cout << "The unordered_map is empty." << endl;
    } else {
        cout << "The unordered_map is not empty." << endl;
    }


    // accessing :

    string keys = "gary";
    // if (age.count(keys)) {
    //     cout << "Key \"" << keys << "\" exists with age " << age[keys] << "." << endl;
    // } else {
    //     cout << "Key \"" << keys << "\" does not exist." << endl;
    // }

    if (age.at(keys))
    {
        cout << "Key \"" << keys << "\" exists with age " << age[keys] << "." << endl;
    }else {
        cout << "Key \"" << keys << "\" does not exist." << endl;
    }
    
    // clear the unordered map
    age.clear();



    unorderedMap(age);


     
    return 0;
}