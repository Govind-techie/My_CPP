// For Loop : For loop iterate over a set of statement till the condition is false.

// For Loop Structure :

// for (initialization; condition; update) {
//     // Code to be executed
// }

// By using for loop.
// Take the input of a number from user and print 1 to that given number.

#include<iostream>
using namespace std;

int main(){
    int n; // Here, we initialize an int variable as n;
    cout<<"Enter a number : "; // Here, we take the input as number from the user.
    cin>>n; // Here, we store the input in variable n.
    for(int i = 1; i <= n; i++){ // Here, we first intialize the value i as 1 follwed by condition follwed by update
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;

}
