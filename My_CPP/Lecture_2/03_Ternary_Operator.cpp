// A ternary operator (also known as a conditional operator) is a shorthand way of writing an if-else statement.

// Ternary Statement Structure : variable = condition ? statement1 : statement2;

// Using Ternary Statement.

// Check whether the no. is positive or negative.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<(n>=0 ? "Number is Positive" : "Number is negative")<<endl;

    bool isAdult;
    int age;
    cout << "Enter your age : ";
    cin>>age;

    isAdult = (age >= 18) ? true : false; // If the value is true, the given variable will store 1 (boolean true); otherwise, it will store 0.
    
    
    // Problem : Largest of 2 numbers using ternary operator.

    int num1;
    int num2;
    cout << "Enter 1st num : ";
    cin >> num1;
    cout << "Enter 2nd num : ";
    cin >> num2;

    cout << "Largest number : " << ((num1 > num2) ? num1 : num2) << endl; // Ternary operator within cout statement.
    
    // Problem : Check whether number is odd or even (ternary operator)

    int number;
    cout << "Enter a number : ";
    cin >> number;

    cout << "The number is " << ((number % 2 == 0) ? "even" : "odd") << endl;
    return 0;

}

// Note : First we give the condition followed by (?) and then the if statement (when if is true) follwed by (:) and then else statement (when if is false).
