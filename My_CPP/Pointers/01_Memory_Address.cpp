// Memory Address in C++

// When a variable is initialized, it is stored in the computer’s memory at a specific location.
// This location is called the memory address of the variable.

// Note: The '&' (address-of) operator is used to fetch or print the memory address of a variable.
// Memory addresses are usually represented in the hexadecimal number system.

#include<iostream>
using namespace std;

int main() {
    int a = 10;

    // Printing the memory address of variable 'a'
    cout << &a << endl; // Example Output: 0x16f5631d8 (may vary system to system)

    return 0;
}