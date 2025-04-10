// Hollow_Diamond_Pattern : A hollow diamond pattern is a diamond-shaped figure made of stars (*), where the outer border is filled with
// stars, but the inner area is empty, creating spaces between the stars.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // Top part of the diamond
    for (int i = 0 ; i < n ; i++){
        // Print leading spaces to center the stars
        for (int j = 0 ; j < (n-i-1); j++){
            cout<<" ";
        }
        // Print the first star of the row
        cout<<"*";
        
        // Print inner spaces (only if i > 0 to maintain hollow effect)
        for (int j = 0 ; j < (2*i-1); j++){
            cout<<" ";
        }
        
        // Print second star (except for the first row to avoid duplicate)
        if (i != 0){
            cout<<"*";
        }
        
        cout<<endl; // Move to the next line
    }

    // Bottom part of the diamond
    for (int i = 0 ; i < n-1 ; i++){
        // Print leading spaces to align with the upper part
        for (int j = 0 ; j < i+1 ; j++){
            cout<<" ";
        }
        // Print the first star of the row
        cout<<"*";
        
        // Print inner spaces (except for the last row to keep it hollow)
        for(int j = 0 ; j < 2*(n-i)-5; j++){
            cout<<" ";
        }
        
        // Print second star (except for the last row to maintain hollow effect)
        if (i != n-2){
            cout<<"*";
        }
        
        cout<<endl; // Move to the next line
    }

    // Pattern : Hollow rectangle
    /* Example for n1 = 4
       ****
       *  *
       *  *
       ****
    */

    int n1;
    cout << "Enter a number : ";
    cin >> n1;

    for (int i = 0 ; i < n1 ; i++){
        cout << "* "; // Print first star of the row
        
        // Print inner spaces or stars based on the row index
        for (int j = 0 ; j < n1 ; j++){
            if (i == 0 || i == n1-1){
                // Print stars for the first and last rows
                cout << "* ";
            }else{
                // Print spaces for inner part to keep it hollow
                cout << "  ";
            }
        }
        
        cout << "* " << endl; // Print last star of the row
    }

    return 0;
}