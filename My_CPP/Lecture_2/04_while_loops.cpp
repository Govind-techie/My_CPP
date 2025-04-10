// While Loops: Executes a block of code repeatedly while the condition is true.

#include<iostream>
using namespace std;

int main(){
    int count = 1; // Initialize count to 1. (Initialisation)
    
    while(count <= 5){ // Loop runs while count is ≤ 5. (Condition)
        cout << count << " "; // Print count.
        count++; // Increment count. (Updation)
    }
    cout << endl; // Move to the next line.

    // Take user input and print numbers from 1 to n.
    int n, i = 1; // Declare n and initialize i to 1.
    
    cout << "Enter a number: "; 
    cin >> n; // Store user input in n.
    
    while (i <= n){ // Loop runs while i ≤ n.
        cout << i << " "; // Print i.
        i++; // Increment i.
    }
    cout << endl;

    /*
    Print a square (*) pattern: (using for loop)
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
    return 0;
}

// Note: An always-true condition creates an infinite loop.
// Ensure a condition that eventually becomes false.


