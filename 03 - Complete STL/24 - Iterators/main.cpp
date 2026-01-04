#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates
using namespace std;


int main(){

    // **Input Iterator**
    // std::cout << "Enter integers (type a non-integer to stop):\n";
    // // Create an input stream iterator for std::cin
    // std::istream_iterator<int> inputIt(std::cin);
    // std::istream_iterator<int> endOfStream; // Default constructor represents end of stream

    // // Store the integers into a vector using a for loop
    // std::vector<int> numbers;
    // for (; inputIt != endOfStream; ++inputIt) {
    //     numbers.push_back(*inputIt); // Dereference the iterator to get the value
    // }

    // // Display the collected numbers
    // std::cout << "\nYou entered:\n";
    // for (const int& num : numbers) {
    //     std::cout << num << " ";
    // }

    // **Output Iterator**
    // std::vector<int> numbers = {10, 20, 30, 40, 50};

    // std::cout << "Output using std::ostream_iterator:\n";

    // // Create an output stream iterator for std::cout
    // std::ostream_iterator<int> outputIt(std::cout, " "); // " " is the delimiter

    // // Use a for loop to write each element to the output stream
    // for (const int& num : numbers) {
    //     *outputIt = num; // Write value to iterator
    //     ++outputIt;      // Advance the iterator
    // }


    //**Forward Iterator** 
    // std::forward_list<int> numbers = {10, 20, 30, 40, 50};

    // std::cout << "Elements in the forward_list:\n";

    // // Using a Forward Iterator in a for loop
    // for (std::forward_list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    //     std::cout << *it << " "; // Dereference the iterator to access the element
    // }

    // std::cout << "\n";

    // // Modifying elements using the Forward Iterator
    // for (std::forward_list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    //     *it += 10; // Increment each element by 10
    // }

    // std::cout << "Modified elements in the forward_list:\n";
    // for (const int& num : numbers) {
    //     std::cout << num << " "; // Range-based for loop to display updated elements
    // }

    // **Bidirectional Iterator**
    // std::list<int> numbers = {10, 20, 30, 40, 50};

    // // Forward traversal using a Bidirectional Iterator
    // std::cout << "Forward traversal:\n";
    // for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    //     std::cout << *it << " "; // Dereference the iterator to access the element
    // }

    // std::cout << "\n";

    // // Backward traversal using a reverse iterator
    // std::cout << "Backward traversal:\n";
    // for (std::list<int>::reverse_iterator rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
    //     std::cout << *rit << " "; // Dereference the reverse iterator
    // }

    // std::cout << "\n";

    // // Modifying elements using Bidirectional Iterator
    // for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    //     *it *= 2; // Double each element
    // }

    // std::cout << "Modified elements after forward traversal:\n";
    // for (const int& num : numbers) {
    //     std::cout << num << " "; // Range-based for loop to display updated elements
    // }


    //**Random Access Iterator** 
    // std::vector<int> numbers = {10, 20, 30, 40, 50};

    // // Forward traversal using Random Access Iterator
    // std::cout << "Forward traversal:\n";
    // for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    //     std::cout << *it << " "; // Dereference the iterator to access the element
    // }

    // std::cout << "\n";

    // // Backward traversal using Random Access Iterator
    // std::cout << "Backward traversal:\n";
    // for (std::vector<int>::reverse_iterator rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
    //     std::cout << *rit << " "; // Dereference the reverse iterator
    // }

    // std::cout << "\n";

    // // Random access operations
    // std::cout << "Random access operations:\n";
    // std::vector<int>::iterator it = numbers.begin();
    // std::cout << "Element at index 2: " << *(it + 2) << "\n"; // Access 3rd element
    // *(it + 3) = 100; // Modify 4th element
    // std::cout << "Modified element at index 3: " << numbers[3] << "\n";

    // // Using `std::vector` indices (array-like syntax)
    // std::cout << "Using array-style access:\n";
    // for (size_t i = 0; i < numbers.size(); ++i) {
    //     std::cout << numbers[i] << " ";
    // }


    // **Const Iterator**
    // std::vector<int> numbers = {10, 20, 30, 40, 50};

    // // Using a const_iterator to traverse the vector
    // std::cout << "Elements in the vector (read-only access):\n";
    // for (std::vector<int>::const_iterator it = numbers.cbegin(); it != numbers.cend(); ++it) {
    //     std::cout << *it << " "; // Read-only access to elements
    // }
    // std::cout << "\n";

    // Attempting to modify elements through const_iterator (Uncomment to see the error)
    // for (std::vector<int>::const_iterator it = numbers.cbegin(); it != numbers.cend(); ++it) {
    //     *it = *it + 10; // Error: const_iterator does not allow modification
    // }

    // // Modifying the vector with a non-const iterator
    // for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    //     *it += 10; // Modification is allowed with non-const iterators
    // }

    // std::cout << "Modified elements in the vector:\n";
    // for (const int& num : numbers) { // Range-based loop for simplicity
    //     std::cout << num << " ";
    // }

    // **Reverse Iterator**
    // std::vector<int> numbers = {10, 20, 30, 40, 50};

    // // Reverse traversal using reverse_iterator
    // std::cout << "Elements in the vector in reverse order:\n";
    // for (std::vector<int>::reverse_iterator rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
    //     std::cout << *rit << " "; // Dereference to access the element
    // }
    // std::cout << "\n";

    // // Modifying elements using reverse_iterator
    // std::cout << "Modified elements in reverse order:\n";
    // for (std::vector<int>::reverse_iterator rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
    //     *rit += 10; // Increment each element by 10
    // }

    // // Displaying the modified elements after reverse traversal
    // for (const int& num : numbers) { // Range-based loop for simplicity
    //     std::cout << num << " ";
    // }

    // **Stream Iterator**
    // std::cout << "Enter integers (Ctrl+D to end input):\n";

    // std::istream_iterator<int> inputIt(std::cin); // Begin reading from std::cin
    // std::istream_iterator<int> eof; // End-of-stream iterator
    // std::vector<int> numbers;

    // // Using for loop with stream iterator to read integers from input stream
    // for (; inputIt != eof; ++inputIt) {
    //     numbers.push_back(*inputIt); // Store the input value in vector
    // }

    // // Display the elements using std::ostream_iterator
    // std::cout << "You entered the following numbers:\n";
    // std::ostream_iterator<int> outputIt(std::cout, " "); // Delimited output
    // for (const int& num : numbers) {
    //     *outputIt = num;  // Write each number to std::cout
    //     ++outputIt;       // Move the output iterator
    // }

    // std::cout << "\n";
     
    return 0;
}