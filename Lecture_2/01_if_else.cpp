#include<iostream>
using namespace std;

int main(){
    int n; // Here, initalize a variable n with int as a datatype.
    cout<<"Enter a number : "; // Here we take the input 
    cin>>n; // Here, we store the input in variable n (Note : we can't store string or any kind of character in this variable beacuse we its datatype is int. )
    if (n>=0){ // Here, we give a condition to the if statement.
        cout<<"Number is positive\n"; // If the condition is true it will run if block of code.
    } else { // If the condition of if statement is false execute the else statement.
        cout<<"Number is negative\n"; // Here, it will run this block of code only when the given condition is false.
    }

// Real Case :
// A voter checking system : It checks whether the voter age is more than 18 or not.

    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if (age >= 18){
        cout<<"You are eligible to vote\n";
    } else {
        cout<<"Sorry, you are below the voting age and not eligible to vote\n";
    }

    // Check whether the number is ODD or EVEN :

    long long number; // Here, we mention that even if the number is very long its individual digit should be store correctly.
    cout<<"Enter a number : ";
    cin>>number;
    if (number%2==0){
        cout<<"Number is even\n";
    }else{
        cout<<"Number is odd\n";
    }
    return 0; 
}

// Note : Else will only be executed when if condition is false.