#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates


using namespace std;

// Define all the bitwise functors
struct BitwiseAND {
    int operator()(int a, int b) const {
        return a & b;
    }
};

struct BitwiseOR {
    int operator()(int a, int b) const {
        return a | b;
    }
};

struct BitwiseXOR {
    int operator()(int a, int b) const {
        return a ^ b;
    }
};

struct BitwiseNOT {
    int operator()(int a) const {
        return ~a;
    }
};


int main(){

    BitwiseAND andOp;
    BitwiseOR orOp;
    BitwiseXOR xorOp;
    BitwiseNOT notOp;

    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    std::cout << "Bitwise AND: " << andOp(a, b) << "\n"; // 0101 & 0011 = 0001 -> 1
    std::cout << "Bitwise OR: " << orOp(a, b) << "\n";   // 0101 | 0011 = 0111 -> 7
    std::cout << "Bitwise XOR: " << xorOp(a, b) << "\n"; // 0101 ^ 0011 = 0110 -> 6
    std::cout << "Bitwise NOT: " << notOp(a) << "\n";    // ~0101 = 1010 -> -6 (two's complement)

     
    return 0;
}