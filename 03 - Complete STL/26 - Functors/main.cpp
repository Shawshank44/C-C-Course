#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;

class Filter {
    int threshold;

    public:
    // Constructor to set the threshold
    Filter(int threshold) : threshold(threshold) {}

    // Overload operator() to return true if the condition is met
    bool operator()(int value) const {
        return value > threshold;
    }
};


class EvenOne{
    public :
        bool operator()(int num) const {
            return num % 2 == 0;
        }
};

int main(){

    vector<int> numbers = {1, 5, 8, 10, 3, 7, 2, 15};
    // Display the original numbers
    std::cout << "Original numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    int threshold = 7;

     // Create a Filter functor
    Filter filter(threshold);


    // Use std::remove_if to move unwanted elements to the end
    auto newEnd = std::remove_if(numbers.begin(), numbers.end(), filter);

    // Erase the unwanted elements
    numbers.erase(newEnd, numbers.end());

    // Display the filtered numbers
    std::cout << "Numbers greater than " << threshold << ": ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";


    // Creating Even functor
    vector <int> even;
    for(int num : numbers){
        if (EvenOne()(num))
        {
            cout<< num << " ";
        }
    }

    return 0;
}