// Hollow_Diamond_Pattern : A hollow diamond pattern is a diamond-shaped figure made of stars (*), where the outer border is filled with
// stars, but the inner area is empty, creating spaces between the stars.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // Top Part of the Diamond
    for (int i = 0 ; i < n ; i++){
        // Print spaces before the first star to create alignment
        for (int j = 0 ; j < (n-i-1); j++){
            cout<<" ";
        }
        // Print the first star
        for (int k = 0 ; k < 1 ; k++){
            cout<<"*";
        }
        // Print inner spaces between the stars
        for (int j = 0 ; j < (2*i-1); j++){
            cout<<" ";
        }
        // Print the second star if not the first row
        for (int k = 0 ; k < 1 ; k++){
            if (i != 0){
                cout<<"*";
            }
        }
        // Move to the next row
        cout<<endl;
    }

    // Bottom Part of the Diamond
    for (int i = 0 ; i < n-1 ; i++){
        // Print spaces before the first star to create alignment
        for (int j = 0 ; j < i+1 ; j++){
            cout<<" ";
        }
        // Print the first star
        for (int k = 0 ; k < 1 ; k++){
            cout<<"*";
        }
        // Print inner spaces between the stars
        for(int j = 0 ; j < 2*(n-i)-5; j++){
            cout<<" ";
        }
        // Print the second star unless it is the last row
        for(int k = 0 ; k < 1 ; k++){
            if (i != n-2)
                cout<<"*";
        }
        // Move to the next row
        cout<<endl;
    }

    return 0;
}
