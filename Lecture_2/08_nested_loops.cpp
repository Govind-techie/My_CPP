// Nested For Loops : A nested loop in C++ is a loop inside another loop. The inner loop runs completely every time the outer loop executes one iteration.

// Print x no. of (*) in n no. of lines.

#include<iostream>
using namespace std;

int main(){
    int n,x; // Here, we defined int variable n and x.
    cout<<"Enter the number of stars : "; // Here, we take input for no. of stars.
    cin>>x; // Here, we store the input for stars
    cout<<"Enter the number of lines : "; // Here, we take input for no. of lines.
    cin>>n; // Here, we store the input for lines.

    // NESTED FOR LOOP :

    for(int i = 1 ; i<=n ; i++){  // Here, we initialize i as 1 and condition (i<=n (n is no. of lines)) and updation of i.
        for(int j=1 ; j<=x ; j++){ // Here, we initialize j as 1 and condition(j<=x (x is no. of stars)) and updation of j.
            cout<<"*"; // Here, we print the no. of stars
        }
        cout<<endl; // Here, we create a new line after each time the second for loop complete a cycle for n times.
    }
}