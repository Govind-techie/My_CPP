// Forward Declaration : Forward declaration in functions means declaring a function before its 
// actual definition so that it can be used before being fully defined. It helps the compiler 
// recognize the function when it’s called before its implementation.

#include <iostream>
using namespace std;

// Forward declaration
int add(int, int); // Declaring the function (no implementation yet)

int main() {
    cout << add(3, 4) << endl;  // Calling the function before its definition
    return 0;
}

// Function definition
int add(int a, int b) { // Defining the function after main()
    return a + b;
}