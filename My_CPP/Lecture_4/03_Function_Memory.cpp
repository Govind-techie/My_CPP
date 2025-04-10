/*

MEMORY ALLOCATION FOR FUNCTIONS :

When a function is called:
1. A new stack frame is created in the stack memory.
2. The function executes, using memory for local variables.
3. When execution finishes, the stack frame is removed (LIFO order).

Example Code Demonstrating Memory Allocation:
*/

#include<iostream>
using namespace std;

// Function to demonstrate stack memory behavior
void functionA(int x) {
    int y = x * 2; // Local variable stored in stack
    cout << "Inside functionA: y = " << y << endl;
} // Stack frame of functionA is removed after execution

void functionB(int z) {
    cout << "Inside functionB: z = " << z << endl;
    functionA(z + 1); // Calling functionA creates a new stack frame
}

int main() {
    cout << "Inside main function" << endl;
    functionB(5); // functionB is called, adding a new stack frame
    cout << "Back to main function" << endl;
    return 0; // Stack frame of main is removed, ending the program
}

/*

EXECUTION FLOW (Stack Memory Visualization) :

1. main() is called -> Stack frame of main() is created.
2. functionB(5) is called -> Stack frame of functionB is created.
3. functionA(6) is called inside functionB -> Stack frame of functionA is created.
4. functionA finishes -> Stack frame of functionA is removed.
5. functionB finishes -> Stack frame of functionB is removed.
6. Back to main -> main finishes -> Stack frame of main is removed.
7. Program ends.

|          |  <-- Stack grows downward
| main()   |  (a = 5)
|__________|  
| fun()    |  (x = 5, y = 10)  <-- Created when fun() is called
|__________|  
| main()   |  (resumes after fun() returns)

NOTE : The currently executing function is always at the top of the stack.
*/
