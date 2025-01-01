#include <iostream>

#include <vector> // include the header file

using namespace std;



int main(){

    vector <int> vec = {1,2,3,4};

    vec.push_back(5); //Adds an element to the end of the vector.

    vec.pop_back(); //Removes the last element from the vector.

    cout<<"the memory used : "<<vec.capacity()<<endl; // Returns the amount of memory allocated for the vector 
    // (useful for understanding how much it can hold before needing to allocate more space).

    cout<<"The element at the index is : "<<vec.at(2)<<endl; //Provides safe access to elements with bounds checking.

    vec.insert(vec.begin(),0); // inserts the element in the begining of the array

    vec.insert(vec.end(),55); // inserts the element at end of the array.

    vec.insert(vec.begin() + 1, 11); // inserts the element at the specific directed index.

    vec.erase(vec.begin() + 6); // removes the specfic element present on the index.

    vec.clear(); //Removes all elements from the vector.

    for (int i = 0; i < vec.size(); i++) //size(): Returns the number of elements in the vector.
    {
        cout<<"["<<vec[i]<<"]";
    }
    

     
    return 0;
}