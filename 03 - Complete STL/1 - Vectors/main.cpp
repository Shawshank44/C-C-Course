#include <iostream>
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;

template <typename V>
void printVector(const vector<V>& vec) {

    // for (auto value : vec) {  // Range-based for loop
    //     std::cout << value << " ";
    // }
    // std::cout << std::endl;

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    
    // ########### Contructor ###########:

    vector <int> vec {1,2,3,4,5,6};

    // printVector(vec);

    // ########### iterators (for accessing elements) ###########:
    // vector <int> :: iterator it;
    // for (auto it = vec.begin(); it != vec.end(); ++it) // same as for loop but using iterator
    // {
    //    cout << *it << " ";
    // }
    // cout<<endl;

    // ########### reverse iterator ########### :
    // for (auto it = vec.rbegin(); it != vec.rend(); ++it) // same as for loop but using iterator which returns elements in reverse
    // {
    //    cout << *it << " ";
    // }
    // cout<<endl;

    //########### Adding and Modifing elements in vector ########### :

    // vec.push_back(7); // adds element at the end of the vector
    // vec.push_back(8);
    // printVector(vec);

    // vec.pop_back(); // removes element from the end of the vector
    // printVector(vec);

    vec.insert(vec.begin() + 0 ,11);// add elemnts at the specific index
    vec.insert(vec.begin() + 0 ,12);
    vec.insert(vec.begin() + 5 ,13);
    vec.insert(vec.end() + 0 ,22); // adds at the end the of the vector 
    // printVector(vec);

    vec.erase(vec.begin() + 5); // removes the element from the partcular index
    // printVector(vec);

    // modifiers
    vec[3] = 300;
    vec.at(4) = 400;

    //########### Accessing elements ########### :
    printVector(vec);
    cout<<vec[3]<<endl;
    cout<<vec.at(4)<<endl;


    //########### capacity and size elements ########### :
    cout << "The size of the vector is: " << vec.size() << endl;
    
    if (vec.empty()) {
        cout << "vec is empty." << endl;
    } else {
        cout << "vec is not empty." << endl;
    }


    // Clear all elements from the vector
    vec.clear();

    cout << "The size of the vector is: " << vec.size() << endl;
    




    








    return 0;
}