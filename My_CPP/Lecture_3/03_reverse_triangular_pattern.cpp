// Reverse Triangular Pattern : A reverse triangular pattern in C++ refers to a pattern of stars (*), numbers, or characters that starts 
// with the maximum width at the top and gradually decreases row by row, forming an inverted triangle shape.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    for(int i = 0 ; i < n ; i++){ // Loop for rows
        for(int j = i+1 ; j > 0 ; j--){ // Starts from i+1 and decreases
            cout<<j<<" "; // Prints numbers in reverse order
        }
        cout<<endl; // Moves to the next line
    }

    // Reverse character triangle pattern

    int num; // Number of rows
    cout << "Enter a number : ";
    cin >> num; // Input from user
    char character = 'A'; // Starting character

    for (int a = 0; a < num; a++) { // Loop for rows
        for (int b = a + 1; b > 0; b--) { // Decreasing number of characters in each row
            cout << char(character + (b-1)) << " "; // Prints character using ASCII values
        }
        cout << endl; // Moves to next line
    }

    return 0;
}