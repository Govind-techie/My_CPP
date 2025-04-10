// Nested For Loops : A nested loop in C++ is a loop inside another loop. The inner loop runs completely every time the outer loop executes one iteration.

// Print x no. of (*) in n no. of lines.

#include <iostream>
using namespace std;

int main() {
    int n, x; // Declare two integer variables: n (number of lines) and x (number of stars).

    cout << "Enter the number of stars: ";  
    cin >> x;  // Take input for the number of stars per line.

    cout << "Enter the number of lines: ";  
    cin >> n;  // Take input for the number of lines.

    // Nested loop to print a rectangle of stars
    for (int i = 1; i <= n; i++) {  // Outer loop controls the number of lines (rows).
        for (int j = 1; j <= x; j++) {  // Inner loop controls the number of stars per line (columns).
            cout << "*";  // Print a star.
        }
        cout << endl;  // Move to the next line after printing x stars.
    }

    return 0;
}