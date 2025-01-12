// Do While Loop : A do-while loop always executes the code inside it at least once, even if the condition is false.

// Do While Loop Structure :

// do {
//     // Code to be executed
// } while (condition);

#include<iostream>
using namespace std;

// Print the count of the entered number from the user as 1 to number (input).

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i = 1;
    do{ // Here, we just put the code we want to execute for 1 time even if the condition is false.
        cout<<i<<" ";
        i++;
    }while(i<=n); // Here, we give the condition and if its true it will continue to execute

    cout<<endl;

    return 0;
}