// Pass-by-Reference Using Pointers: Passing by reference using pointers means passing the memory address of a variable to a function instead of its value. This allows the function to directly modify the original variable, as it accesses the same memory location.

#include <iostream>
using namespace std;

// Function to modify the value of 'a' using a pointer
void changeA(int *a) {
    *a = 20; // Dereferencing the pointer to modify the actual value stored at the address
}

int main() {
    int a = 10;

    changeA(&a); // Passing the address of 'a' to the function

    // The value of 'a' is modified because the function changes the actual memory location
    cout << "Value inside main function : " << a << endl; // Output : 20

    return 0;
}

/*

Extra notes & example :

// Pass-by-Value vs Pass-by-Reference

1. Pass-by-Value:
   - A copy of the variable is passed to the function.
   - Changes made inside the function do not affect the original main function variable.

2. Pass-by-Reference (using pointers):
   - The address of the variable is passed.
   - Function can modify the original main function value because it accesses the same memory.

Example:

#include <iostream>
using namespace std;

void changeByValue(int x) {
    x = 100;
}

void changeByReference(int *x) {
    *x = 100;
}

void example() {
    int num1 = 10;
    int num2 = 10;

    changeByValue(num1);       // Will not change num1
    changeByReference(&num2);  // Will change num2

    cout << "After changeByValue, num1 = " << num1 << endl;     // Output: 10
    cout << "After changeByReference, num2 = " << num2 << endl; // Output: 100
}
*/