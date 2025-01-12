// Reverse Triangular Pattern : A reverse triangular pattern in C++ refers to a pattern of stars (*), numbers, or characters that starts 
// with the maximum width at the top and gradually decreases row by row, forming an inverted triangle shape.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 0 ; i<n ; i++){ // condition for a loop to create a new line.
        for(int j = i+1 ; j>0 ; j--){ //  Here, we initialize the value of j as i+1 and we check whether j is less than 0 and we decrease 
        // the value of a by each iteration.
            cout<<j<<" "; // Here, we print the value of a which is in backward format.
        }
        cout<<endl; // Here, it prints a new line after completion of the inner loop.
    }
// Print the character in reverse triangular pattern (character should be backwards for each line).

    int num; // Variable to store the number of rows
    cout << "Enter a number : ";
    cin >> num; // Input the number of rows for the pattern
    char character = 'A'; // Starting character for the pattern

    for (int a = 0; a < num; a++) { // Outer loop controls the number of rows
        for (int b = a + 1; b > 0; b--) { // Inner loop controls the number of characters in each row, starting from a+1 and decrementing
            cout << char(character + (b-1)) << " "; // Calculate and print the character using ASCII value, offset by (b-1)
        }
        cout << endl; // Move to the next line after printing all characters in the current row
    }

    return 0;
}

