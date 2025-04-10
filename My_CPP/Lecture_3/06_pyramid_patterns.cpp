// Pyramid Patter : A pyramid pattern is a triangle-shaped arrangement of numbers, where each row has numbers increasing to a peak in 
// the middle and then decreasing, with spaces added to keep the triangular shape.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // Loop for rows
    for (int i = 0 ; i < n ; i++){
        // Print spaces
        for (int j = 0 ; j < (n-i-1) ; j++){
            cout<<" ";
        }
        // Print numbers in increasing order
        for (int j = 1 ; j < i+1 ; j++){
            cout<<j;
        }
        // Print numbers in decreasing order
        for (int j = i+1 ; j > 0 ; j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}

//     1 (i = 0)
//    121 (i = 1)
//   12321 (i = 2)
//  1234321 (i = 3)
// 123454321 (i = 4)

// Spaces: (n-i-1) spaces before numbers.
// First half: Numbers in increasing order up to (i+1).
// Second half: Numbers in decreasing order from (i+1).
