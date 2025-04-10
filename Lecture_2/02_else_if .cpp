// Else_If : Else if statement is used when we have multiple conditions to check.

// We want to categorize the children's grade as (A,B,C) respective to there marks.


#include<iostream>
using namespace std;

int main(){
    int Marks; // Here, we initialize a variable Marks with datatype int.
    cout<<"Enter your Marks : "; // Here, we take the marks as input from the user.
    cin>>Marks; // Here, we store the marks (input) in the variable Marks.
    
    if (Marks >= 90){ // Here, we check whether the marks is greater than or equal to 90.
        cout<<"Your grade is 'A'\n"; // If it's true than it will run this block of code
    }else if (Marks>= 80 && Marks<90){ // Here, we check whether the student marks is greater than or equal to 80 and less than 90 .
       cout<<"Your grade is 'B'\n"; // If the condition is true it will run this block of code.
    }else{ // If both the given conditions are false it will execute the else.
        cout<<"Your grade is 'C'\n"; // It will run this block of code.
    }
    
    return 0;
}

// Note : We can 