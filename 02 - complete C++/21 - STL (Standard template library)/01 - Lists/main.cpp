#include <iostream> 
#include <list> // header file for list
using namespace std;


template <typename I>
I Display(list <I> lst){
    for(I elements : lst){
       cout << elements << " "<<endl;
    }
}


int main(){
    int display;
    list <int> myList = {10,15,20,25,30}; // creating a list
     // Adding elements to the list
    myList.push_back(40); // Adds element to the end
    myList.push_front(5); // Adds element to the front
    Display(myList);

    // Removing elements from the list
    myList.pop_back();  // Removes element from the end
    myList.pop_front(); // Removes element from the front

    // Inserting at a specific position (before the position)
    // The auto keyword will automatically deduce the correct data type based on the value it is assigned, 
    // which is especially useful when dealing with complex types like iterators.
    auto it = myList.begin(); // Iterator to the first element
    std::advance(it, 1);      // Move iterator forward by 1 position
    myList.insert(it, 15);    // Insert 15 before the second element

    // Removing specific elements
    myList.remove(20); // Removes all occurrences of 20

    // Display updated list
    cout<<"Updated list : "<<endl;
    Display(myList);

    

     
    return 0;
}