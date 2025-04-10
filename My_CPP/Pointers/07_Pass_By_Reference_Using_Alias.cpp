// Pass-by-Reference Using Alias (Reference Variables).

// Passing by reference using alias means passing a reference to the original variable.
// This allows the function to directly modify the original variable without using pointers.

#include <iostream>
using namespace std;

// Function to modify the value of 'a' using reference
void changeA(int &a) {
    a = 20; // Directly modify the original variable through its alias
}

// Note: 'int &a' in the function means 'a' is just another name (alias) for the original variable passed.

int main() {
    int a = 10;

    changeA(a); // Passing the variable directly (no & needed while calling)

    // The value of 'a' is modified because the function receives a reference to the original variable
    cout << "Value inside main function: " << a << endl; // Output: 20

    return 0;
}