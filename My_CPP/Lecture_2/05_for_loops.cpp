/* 
For Loops: A for loop is used to repeat a block of code a fixed number of times. 

It has three main parts:

1. Initialization – Sets a starting value.
2. Condition – Determines whether the loop should continue.
3. Update – Changes the value after each iteration.

Structure of a for loop:

for (initialization; condition; update) { (The loop condition determines how many times the loop will run.)
    // Code to execute (repeatedly)
}

*/

#include <iostream>
using namespace std;

int main() {
    
    // Example: Print numbers from 1 to 5 using a for loop

    for (int num = 1; num <= 5; num++) {  
        // Initialization (int num = 1), condition (num <= 5), update (num++)
        cout << num << " ";  // Executes until the condition is false
    } 
    cout << endl;  // Creates a new line after the loop ends

    // Output: 1 2 3 4 5

    // NOTE: The variable initialized inside the loop is limited to the loop’s scope 
    // and cannot be accessed outside of it.

    // cout << num << endl; // This would cause an error: 'num' is not defined outside the loop.


    // NOTE: Infinite Loops
    // An infinite loop is a loop that never stops running because its condition always remains true.
    // This can happen if the condition does not change or is always set to true.

    // Example of an infinite for loop:
    /*
    for (;;) {  // No condition specified, so it runs forever
        cout << "This is an infinite loop!" << endl;
    }
    */

    // Example of a common mistake causing an infinite loop:
    /*
    for (int i = 1; i > 0; i++) {  // i is always increasing, never becoming <= 0
        cout << i << " ";
    }
    */

    // To stop an infinite loop, you can use `break` inside it or manually stop execution.
    
    // Problem : Print a name 5 times (for loop)

    for (int i = 0; i < 5 ; i++){
        cout << "Govind Choudhary" << endl;
    }

    /*
    Output : (5 times)
    Govind Choudhary
    Govind Choudhary
    Govind Choudhary
    Govind Choudhary
    Govind Choudhary
    */

    // Print number 1 to n (take n as input) use for loop

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++){
        cout << i << " ";
    } cout << endl;

    /*
    Output :
    Enter a number : 4
    1 2 3 4
    */

    // Problem : Print sum of 1 to n number (for loop)

    int num1;
    cout << "Enter your number : ";
    cin >> num1;
    int sum = 0; // Declare outside the loop to accumulate the total sum.
    for (int i = 1 ; i <= n ; i++){
        sum+=i; // Adds i and update in each iteration which stores the total sum from 1 to n.
    }
    cout << "Total sum from 1 to " << n << " is : " << sum << endl;

    /*
    PROBLEM : Print a square (*) pattern: (using for loop)
    ****
    ****
    ****
    */

    int n1;
    cout << "Enter a number : ";
    cin>>n1;

    for (int i = 0 ; i < n1 ; i++){
        cout << "****" << endl;
    }

    // Print number for n to 1 (backward using for loop):

    int n2;
    cout << "Enter a number : ";
    cin >> n2;

    for (int i = n2 ; i > 0 ; i--){ // Initializes i with n2, then decrements i in each iteration until it reaches 0, creating a backward loop from n2 to 1.
        cout << i << " ";
    } cout << endl;
    return 0;
}