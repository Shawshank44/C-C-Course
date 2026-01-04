#include <iostream>
#include <bits/stdc++.h> // includes all the STL templates


using namespace std;

template <typename Key, typename Value>
void printMap(const std::map<Key, Value>& myMap) {
    std::cout << "{\n";
    for (const auto& pair : myMap) {
        std::cout << "  " << pair.first << ": " << pair.second << "\n";
    }
    std::cout << "}\n";
}


int main(){

    // Creating a Map :
    map <string, int> age;

    // Insertion :
    age["John"] = 27; // using operator
    age.insert({"Mcklay",26}); // using insert
    age.emplace("fernandes",36); // using emplace

    printMap(age);

    // accessing :
    cout<<"Accessing John's Age with [] : "<<age["John"]<<endl;
    cout<<"Accessing Mcklay's age with at() : "<<age.at("Mcklay")<<endl;
    

    // ** find member function
    auto it = age.find("fernandes");
    if (it != age.end()) {
        std::cout << "fernandes's age: " << it->second << "\n";
    } else {
        std::cout << "fernandes not found\n";
    }


    cout<<"The Size of the Map is : "<<age.size()<<endl; // returns the Size of the map

    if (age.count("fernandes")) {
        cout <<"Key found\n";
    }else{
        cout<<"key not found"<<endl;
    }

    // Removing elements from the Map:
    age.erase("fernandes");

    // printMap(age);

    // Iterator :
    for (auto it = age.begin(); it != age.end(); ++it)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }
    

     if (age.empty()) {
        cout << "Map is empty." << endl;
    } else {
        cout << "Map is not empty." << endl;
    }

    age.clear();

    cout<<"The Size of the Map is : "<<age.size()<<endl;


     
    return 0;
}