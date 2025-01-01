#include <iostream>
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;
template <typename V>
void printVector(const vector<V>& vec) {

   for (auto it = vec.begin(); it != vec.end(); ++it)
   {
        cout<<*it<<endl;
   }
   
}

//`all_of` | Checks if all elements satisfy a predicate :
vector<int> getEvenNumbers(const vector<int>& numbers) {
    // Check if all elements are even
    bool all_even = all_of(numbers.begin(), numbers.end(), [](int x) {
        return x % 2 == 0;
    });
    // If not all elements are even, return only the even ones
    vector<int> evens;
    if (!all_even) {
        for (int num : numbers) {
            if (num % 2 == 0) {
                evens.push_back(num);
            }
        }
    } else {
        // If all elements are even, return the entire container
        evens = numbers;
    }

    return evens;
}

// `any_of` | Checks if any element satisfies a predicate|
void checkIfAnyEven(const vector<int>& numbers) {
    if (any_of(numbers.begin(), numbers.end(), [](int num) { return num % 2 == 0; })) {
        cout << "There is at least one even number.\n";
    } else {
        cout << "There are no even numbers.\n";
    }
}

// `find` | Finds the first occurrence of a value in a range.
template <typename T>
void findValueInVector(const vector<T>& vec, T value) {
    auto it = find(vec.begin(), vec.end(), value);
    
    if (it != vec.end()) {
        cout << "Found " << *it << " at position " << (it - vec.begin()) << endl;
    } else {
        cout << "Value not found!" << endl;
    }
}

// `find_if`(\/)| Finds the first element satisfying a predicate.
int findFirstEven(const vector<int>& numbers) {
    auto it = std::find_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });

    if (it != numbers.end()) {
        return *it;  // Return the first even number
    }
    return -1;  // Return -1 if no even number is found
}

//`count` | Counts the occurrences of a value in a range.
int countOccurrences(const vector<int>& vec, int value) {
    return count(vec.begin(), vec.end(), value);
}

// `for_each`| Applies a function to each element.
void printElements(const vector<int>& vec) {
    for_each(vec.begin(), vec.end(), [](int num) {
        cout << num << " ";
    });
    cout << endl;
}

// `search` | Finds first occurrence of a subsequence
template <typename T>
int findSubsequence(const std::vector<T>& sequence, const std::vector<T>& subsequence) {
    auto it = search(sequence.begin(), sequence.end(), subsequence.begin(), subsequence.end());

    if (it != sequence.end()) {
        return std::distance(sequence.begin(), it);  // Return the index of the subsequence
    } else {
        return -1;  // Return -1 if subsequence is not found
    }
}

int main(){

    vector <int> v = {1,2,3,4,5,6,7,8,9,10,2,4,5,8,6,1,8};
    vector<int> evens = getEvenNumbers(v);
    

    cout<<"all of Below are the even numbers : "<<endl;
    printVector(evens);
    checkIfAnyEven(v);

    findValueInVector(v, 4);

    int result = findFirstEven(v);

    if (result != -1) {
        std::cout << "First even number: " << result << std::endl;
    } else {
        std::cout << "No even number found" << std::endl;
    }


    int count_of_2 = countOccurrences(v, 2);
    
    std::cout << "The number 2 appears " << count_of_2 << " times." << std::endl;


    printElements(v);

    vector<int> subsequence = {3, 4};
    int index = findSubsequence(v, subsequence);

    if (index != -1) {
        std::cout << "Subsequence found at index: " << index << std::endl;
    } else {
        std::cout << "Subsequence not found." << std::endl;
    }
    
    return 0;
}