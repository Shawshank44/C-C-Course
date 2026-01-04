#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;

int generateNumber() {
    static int num = 1; // static ensures the value persists across calls
    return num++;
}

bool isEven(int num) {
    return num % 2 == 0;
}

int main(){

    // **`std::generate`**
    std::vector<int> vec(5);
    std::generate(vec.begin(), vec.end(), generateNumber);

    for (int val : vec) {
        std::cout << val << " ";
    }

    cout<<endl;

    //**`std::shuffle`** 
    std::vector<int> vec1 = {1, 2, 3, 4, 5};

    // Custom shuffle using std::random_shuffle and rand
    auto randomGen = [](int n) { return rand() % n; };

    std::random_shuffle(vec1.begin(), vec1.end(), randomGen);

    for (int val : vec1) {
        std::cout << val << " ";
    }

    cout<<endl;

    // **`std::partition`**
     std::vector<int> vec2 = {1, 2, 3, 4, 5, 6};

    std::partition(vec2.begin(), vec2.end(), isEven);

    for (int val : vec2) {
        std::cout << val << " ";
    }

     
    return 0;
}
