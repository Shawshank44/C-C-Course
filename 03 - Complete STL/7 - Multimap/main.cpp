#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;

template <typename Key, typename Value>
void printMultiMap(const multimap<Key, Value>& myMultiMap){
    std::cout << "{\n";
    for (const auto& pair : myMultiMap) {
        std::cout << "  " << pair.first << ": " << pair.second << "\n";
    }
    std::cout << "}\n";
}

int main(){

    multimap <string,int> age;

    // insertions
    age.insert({"John doe",24});
    age.insert({"Jacky",26});
    age.insert({"Jenny",30});
    age.insert({"henry",36});
    age.insert({"henry",40});

    age.emplace("kigler",46);

    // accessing the element
    string key = "Jacky";

    auto itf = age.find(key);

    if (itf != age.end()) {
        std::cout << "First occurrence of key '" << key << "' is: "
                  << itf->first << " => " << itf->second << std::endl;
    } else {
        std::cout << "Key '" << key << "' not found." << std::endl;
    }

    printMultiMap(age);

    // delete
    age.erase("kigler");

    printMultiMap(age);


    // capacity:
    cout<<"The size of the multimap is : "<<age.size()<<endl;

    if (age.empty()) {
        std::cout << "The multimap is empty.\n";
    } else {
        std::cout << "The multimap is not empty.\n";
    }


    // iterator:
    cout<<"by using iterator : "<<endl;
    for (auto it = age.begin(); it != age.end(); ++it)
    {
        cout<<it->first<< " : " <<it->second<<endl;
    }

    // Count
    string skey = "henry";
    size_t counts = age.count(skey);
    cout << "The key '" << skey << "' appears " << counts << " times in the multimap.\n";

    // range of elements :
    // Key to search
    string ekey = "henry";

    // Get the range of elements with the specified key
    auto range = age.equal_range(ekey);

    // Print the range of elements
    std::cout << "Elements with key '" << ekey << "':\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << " => " << it->second << "\n";
    }

    // clear:
    age.clear();

    cout<<"The size of the multimap is : "<<age.size()<<endl;

     
    return 0;
}