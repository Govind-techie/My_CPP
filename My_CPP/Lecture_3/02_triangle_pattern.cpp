#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Star triangle pattern
    // Outer loop controls the number of rows
    for (int i = 0; i < n; i++) { 
        // Inner loop prints '*' (i+1) times in each row
        for (int j = 0; j < i + 1; j++) { 
            cout << "* "; 
        }
        cout << endl; // Move to the next line after each row
    }

    // Number triangle pattern (each row has the same number)
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    // Outer loop controls the rows
    for (int a = 0; a < x; a++) {   
        // Inner loop prints the same number (a+1) times in each row
        for (int c = 0; c < a + 1; c++) { 
            cout << a + 1 << " "; 
        }
        cout << endl; // Move to the next line
    }

    // Alphabet triangle pattern (each row has the same letter)
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    char character = 'A'; // Start with 'A'

    // Outer loop controls the rows
    for (int k = 0; k < num; k++) {
        // Inner loop prints the current letter (k+1) times
        for (int p = 0; p < k + 1; p++) { 
            cout << character << " "; 
        }
        cout << endl; // Move to the next line
        character++; // Move to the next letter in the alphabet
    }

    // Number triangle pattern (increasing numbers in each row)
    int num_2;
    cout<<"Enter a number: ";
    cin>>num_2;

    // Outer loop controls the rows
    for (int m = 0; m < num_2; m++) {
        // Inner loop prints numbers from 1 to (m+1)
        for (int l = 0; l < m + 1; l++) { 
            cout << (l + 1) << " ";
        }
        cout << endl; // Move to the next line
    }

    // Inverted triangle (upside-down) stars pattern

    /*
    Pattern (n = 4)
    ****
    ***
    **
    *
    */

    int n1;
    cout << "Enter a number: ";
    cin >> n1;

    // Outer loop controls the number of rows
    for (int i = 0 ; i < n1 ; i++){
        // Inner loop prints stars in decreasing order
        // Initially prints 'n1' stars, then decreases in each row
        for (int j = n1 - i; j > 0 ; j--){  
            cout << "* ";// Print a star followed by a space
        }
        cout << endl; // Move to the next line after printing stars for a row
    }

    int n2;
    cout << "Enter a number : ";
    cin >> n2;
    char ch = 'A';

    // Character increasing sequence pattern
    // Outer loop controls the number of rows
    for (int i = 0; i < n2; i++){
        // Inner loop prints increasing characters
        for (int j = 0 ; j <= i ; j++){
            cout << ch; // Print the current character
            ch++; // Move to the next character (Does not reset the character value after each row)
        }
        cout << endl; // Move to the next line
    }

    /*
    A i=0 ; j=1
    BC i=1 ; j=2
    DEF i=2 ; j=3
    GHIJ i=3 ; j=4
    */

    return 0;
}
