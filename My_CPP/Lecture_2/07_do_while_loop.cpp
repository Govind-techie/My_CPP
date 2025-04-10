// Do While Loop: A loop structure that executes the code block at least once, then continues execution while the condition remains true.

// Do While Loop Structure:
// do {
//     // Code block to be executed
// } while (condition);

#include<iostream>
using namespace std;

// Program to print numbers from 1 to user input using do-while loop

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i = 1;
    do{ // Code block executes at least once
        cout<<i<<" ";
        i++;
    }while(i<=n); // Condition checked after each iteration

    cout<<endl;

    return 0;
}