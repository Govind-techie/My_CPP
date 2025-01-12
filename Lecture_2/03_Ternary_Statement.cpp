// A ternary operator (also known as a conditional operator) is a shorthand way of writing an if-else statement.

// Teranry Statement Structure : condition ? value_if_true : value_if_false;

// Using Ternary Statement.

// Check whether the no. is positive or negative

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<(n>=0 ? "Number is Positive" : "Number is negative")<<endl;
    return 0;
}

// Note : First we give the condition followed by (?) and then the if statement (when if is true) follwed by (:) and then else statement (when if is false).