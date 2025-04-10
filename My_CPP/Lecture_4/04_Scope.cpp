/*
SCOPE, LOCAL & GLOBAL VARIABLES IN C++

What is Scope?
Scope defines the part of the program where a variable can be accessed.

Types of Scope:
1. Local Scope  - Variable declared inside a function (accessible only in that function).
2. Global Scope - Variable declared outside any function (accessible by all functions).

LOCAL VARIABLES:
- Declared inside a function.
- Accessible only within that function.
- Destroyed when the function ends.
*/

#include <iostream>
using namespace std;

void func() {  
    int localVar = 10;  // Local variable, exists only inside this function.
    cout << "Inside func: " << localVar << endl;
}  // localVar is destroyed here as the function ends.

void localScopeExample() {
    cout << "\n--- LOCAL SCOPE EXAMPLE ---" << endl;
    func();  
    // cout << localVar;  // ERROR! localVar is not accessible here because it is local.
}

/*
GLOBAL VARIABLES:
- Declared outside all functions.
- Accessible by all functions in the program.
- Stored in a separate memory section.
- Can be modified by any function (which can lead to unexpected changes).
*/

int globalVar = 5;  

void funcA() {
    cout << "Inside funcA: " << globalVar << endl;  
}

void funcB() {
    globalVar = 10;  
    cout << "Inside funcB (modified globalVar): " << globalVar << endl;
}

void globalScopeExample() {
    cout << "\n--- GLOBAL SCOPE EXAMPLE ---" << endl;
    cout << "Inside main: " << globalVar << endl;
    funcA();   
    funcB();   
    cout << "Back to main: " << globalVar << endl;  
}

/*
KEY DIFFERENCES:
1. Local variables exist only inside the function where they are declared.
2. Global variables exist throughout the program and can be accessed from any function.
3. Local variables don't affect other functions, but global variables can be modified anywhere.

NOTE: Avoid overusing global variables, as they make debugging difficult.
*/

int main() {
    localScopeExample();  
    globalScopeExample();  
    return 0;
}