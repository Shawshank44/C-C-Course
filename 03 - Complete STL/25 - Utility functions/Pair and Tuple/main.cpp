#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;


int main(){

    // Pair :
    auto p = make_pair("John",26);
    cout << "First: " << p.first << ", Second: " << p.second << "\n";
    pair<int, int> p1 = {1, 2}, p2 = {3, 4};
    std::cout << "Before swap:\n";
    std::cout << "p1: {" << p1.first << ", " << p1.second << "}, "
              << "p2: {" << p2.first << ", " << p2.second << "}\n";

    std::swap(p1, p2);

    std::cout << "After swap:\n";
    std::cout << "p1: {" << p1.first << ", " << p1.second << "}, "
              << "p2: {" << p2.first << ", " << p2.second << "}\n";

    // Tuple :
    auto t = make_tuple(1,"Jack",78);
    cout << get<0>(t) << "\n";
    cout << get<1>(t) << "\n";
    cout << get<2>(t) << "\n";

    constexpr size_t tupleSize = tuple_size<decltype(t)>::value;

    std::cout << "Size of tuple: " << tupleSize << "\n";

    using SecondType = std::tuple_element<1, decltype(t)>::type;

    std::cout << "Type of first element: " << typeid(t).name() << "\n"; // Output: int


    // Define two tuples
    std::tuple<int, double, std::string> t1(1, 3.14, "Hello");
    std::tuple<int, double, std::string> t2(2, 2.71, "World");

    std::cout << "Before swap:\n";
    std::cout << "t1: (" << std::get<0>(t1) << ", " << std::get<1>(t1) << ", " << std::get<2>(t1) << ")\n";
    std::cout << "t2: (" << std::get<0>(t2) << ", " << std::get<1>(t2) << ", " << std::get<2>(t2) << ")\n";

    // Swap the tuples
    std::swap(t1, t2);

    std::cout << "\nAfter swap:\n";
    std::cout << "t1: (" << std::get<0>(t1) << ", " << std::get<1>(t1) << ", " << std::get<2>(t1) << ")\n";
    std::cout << "t2: (" << std::get<0>(t2) << ", " << std::get<1>(t2) << ", " << std::get<2>(t2) << ")\n";


    std::tuple<int, double> tu1(1, 3.14);
    std::tuple<char, std::string> tu2('A', "Hello");
    std::tuple<float> tu3(2.71f);

    // Concatenating tuples t1, t2, and t3
    auto result = std::tuple_cat(tu1, tu2, tu3);

    // Accessing the concatenated tuple's elements
    std::cout << "Resulting tuple: (" 
              << std::get<0>(result) << ", " 
              << std::get<1>(result) << ", " 
              << std::get<2>(result) << ", " 
              << std::get<3>(result) << ", " 
              << std::get<4>(result) << ")\n";

     
    return 0;
}