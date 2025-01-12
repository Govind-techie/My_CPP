// Square Patterns : In C++, square patterns refer to a way of arranging characters, numbers, or symbols in a grid-like structure where the
// number of rows is equal to the number of columns, forming a square shape.

// Print the number or lines and that number from 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    for(int i = 1 ; i <= n ; i++){ // Outer Loop. 
        for (int j = 1 ; j <= n ; j++){ // Inner Loop.
            cout<<j<<" "; // Here, we just print the number from 1 to that no.
        }
        cout<<endl; // After each iterations we print a new line.
    }

// Print the same pattern in stars :

    int num;
    cout<<"Enter a number : ";
    cin>>num;

    for (int x = 1 ; x<=num ; x++){ // Outer Loop.
        for (int y = 1 ; y <= num ; y++){ // Inner Loop.
            cout<<"*"<<" "; // Here, we print the number of stars.
        }
        cout<<endl; // After each iterations we print a new line.
    }

// Print the square pattern ABCD :

    int num_2;
    cout<<"Enter a number : ";
    cin>>num_2;
    for (int a = 0 ; a < num_2 ; a++){ // Outer Loop.
        char character = 'A'; // Here, we initailize charcter variable aa 'A'.
        for (int b = 0 ; b < num_2 ; b++){ // Inner Loop.
            cout<<character<<" "; // It prints the character
            character++; // It increases the value of character with respect to its ASCII code.
        }
        cout<<endl; // Here, its print the a new line after completion of inner loop.
        // Note : After completion of outer loop it reset the value of character variable as 'A'.
    }

// Print the number from 1 to n and n number of lines (number should not be reset).

    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int count = 1; // Here, we initialize the variable count as 1.
    for (int k = 0 ; k < number ; k++){
        for(int p = 1 ; p <= number ; p++){
            cout << count << " "; // Here we print the count and increase it by 1.
            count++; // It increment the value of count.
        }
        cout<<endl; // Here, it prints a new line after the end of inner loop.
    }

// Note : After the end of the loop it does not reset the value of loop beacuse it is initialized outside the loop.

// Print the alphabet in square pattern (alphabet should not get reset)

    int num_3;
    cout<<"Enter a number : ";
    cin>>num_3;
    char ch = 'A'; // Here, we initialize the variable ch as 'A'.
    for (int g = 0 ; g < num_3 ; g++){
        for (int h = 0 ; h < num_3 ; h++){
            cout<<ch<<" "; // Here, we print the character.
            ch++; // Here, we increment the value of ch by 1.
        }
        cout<<endl; // Here, we create a new line after completion of the inner loop.
    }

// Note : Here, we initialize the variable ch outside the loop so the incremented value does not get reset.

    return 0;
}
