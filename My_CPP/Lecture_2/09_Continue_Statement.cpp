// Continue Statement: The continue statement is used within loops to skip the current iteration
// and proceed to the next iteration of the loop. It is often used when a specific condition is met,
// and you want to bypass the remaining code in the loop body for that iteration.


#include <iostream> 
using namespace std; 

int main() {  
    
    // Print number 1 to n.

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Loop from 1 to n.
        if (i == 3) { // Check if the current iteration is 3.
            continue; // Skip the rest of the loop body for this particular iteration.
        }
        cout << i << endl; // Print the current value of i.
    }

    //  PROBLEM : Write a program to show numbers entered by user except multiple of 10.
    int num;
    while (true){
        cout << "Enter a number : ";
        cin >> num;

        if (num % 10 == 0){ // Skips the iteration where user enter multiple of 10
            continue;
        }
        cout << "Entered number : " << num << endl;
    }
    return 0; 
}
