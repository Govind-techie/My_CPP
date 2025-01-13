// Scope : Scope determines whether a variable can be access and used across an entire code or not.

// Types of Scope:
// 	    1.	Global Scope: A variable or function defined outside any function or class can be accessed from anywhere in the program.
// 	    2.	Local Scope: A variable or function defined inside a function or block can only be accessed within that function or block.

#include<iostream>
using namespace std;

int x = 4; // It is a global variable and can be accessed by both main function and other functions.

void func(){
    cout<<x<<endl;
}

int main(){
    int a = 5; // It is a global variable which is defined in main function.

    if (3 > 1){
        int b = 2; // It is a local variable which is defined in an if block of code which an only be accessed within the if block only.   
    }

    func();

    cout<<a<<endl; // Here, (a) variable can be accessed as it is global variable.
 // cout<<b<<endl; // Here, it raise an error as variable (b) cant be accessed by main function as it is a local variable of if block (specifically).
    cout<<x<<endl; // Here, variable (x) can be accessed by both main function and other functions as it is intialize outside main function.

    return 0;
}