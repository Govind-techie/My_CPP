// While Loops : While loop takes a condition (which is true) and repeat a certain task till the condition is not false.

#include<iostream>
using namespace std;

// Print the number from 1 to 5 :
int main(){
    int count = 1; // Here, we intialize the int variable count with default value a 1.
    while(count <= 5){ // Here, we given condition to while loop.
        cout<<count<<" "; // Till the condition is true it will repeatedly run this block.
        count++; // Here, it increases the value of count by 1  after each iteration of the block so that the condition get false.
    }
    cout<<endl; // It will end the line after the loop is over.

// Take the input of a number from user and print 1 to that given number.

    int n; // Here, we initialize the int variable as n.
    int i = 1; // Here, we intialize an i variable with default value as 1.
    cout<<"Enter a number : "; // Here, we take the input of numbre from user.
    cin>>n; // Here, we store the input in variable n.
    while (i<=n){ // Here, we a give the condition to while loop.
        cout<<i<<" "; // Till the condition is true it will run this block.
        i++; // It will increase the value of i so that the condition gets false.
    }
    cout<<endl;
    return 0;
}

// Note : If the condition is always true in the while loop it will create an infinite loop which never ends.
// Note : In while loop it is important to put the condition that make the condition false and breaks the loop.


