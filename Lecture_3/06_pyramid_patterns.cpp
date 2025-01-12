// Pyramid Patter : A pyramid pattern is a triangle-shaped arrangement of numbers, where each row has numbers increasing to a peak in 
// the middle and then decreasing, with spaces added to keep the triangular shape.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // No. lines loop.
    for (int i = 0 ; i < n ; i++){
        // No. of spaces.
        for (int j = 0 ; j < (n-i-1) ; j++){
            cout<<" ";
        }
        // No. in increasing order (forward loop).
        for (int j = 1 ; j < i+1 ; j++){
            cout<<j;
        }
        // No. in decreasing order (backward loop).
        for (int j = i+1 ; j>0 ; j--){
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

// For no. of spaces (n-i-1).
// For no. of  1st half of pyramid (forward loop) (i+1) numbers has to be printed.
// For no. of 2nd half of the pyramid (backwrad loop) (j = i+1, j > 0 , j--).
