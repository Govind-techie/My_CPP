
#include<iostream>
using namespace std;

// Function : A function is a block of code that performs a specific task. It takes some inputs (called parameters), processes them, and may
//  return a result (called a return value).

// Basic Sturcture of Function:

// return_type function_name(parameters) {
//     // Code to perform task
//     return result;  // (optional) if return type is not void
// }

// Void is a type of function which does not return any value from that function.

// Note : We have to write a function outside of the int main function one function cannot be written under another funtion but we can call
// that function within the int main function.


// Function Defination : 

void PrintHello(){ // Here, we defined a function with name (PrintHello) and type (void).   
    cout<<"Hello"<<endl;
    // Here, we are not returning the value because the type is void.
}

// Return Value : A return value in C++ is the value that a function gives back to the part of the program that called it, after completing
// its task. The return value is specified in the function’s return type.

int PrintName(){ // Here, the type is an int so we have to return an integer value with the function.
    cout<<"Govind Choudhary"<<endl;
    return 2; // Return Value of int function.
}

// sum of 2 numbers : 

// Parameter : A parameter in C++ is a variable used in the definition of a function to accept values when the function is called.
// Parameters allow functions to operate on different values and make them more flexible and reusable.

int sum(int a , int b){ // Here, we define a function with 2 parameter a and b with type int
    int sum = a + b; // Here, store the sum of both parameters in a sum varaible.
    return sum; // Here, we return the value stored in the sum variable
}

// minimum of 2 values :

int minOfTwo(int a , int b){
    if (a<b){
        return a;
    }else{
        return b;
    }
}

// Note : We can return multiple return values in a same function.

// sum of number 1 to n :

int sumToN(int n){
    int sum = 0;
    for (int i = 0 ; i <= n ; i++){
        sum += i;
    }
    return sum;
}

// factorial of n : 

int factorial(int n){
    int factorial = 1;
    for(int i = 1 ; i <= n ; i++){
        factorial *= i; 
    }
    return factorial;
}

// Change x :

int changeX(int x){
    x = 2*x;
    cout<<"x = "<<x<<endl;
    return x;
}

int main(){ // Note : int main() is also a function with return value 0 and function type int and name of function as main.

    // Function Call : A function call in C++ is the process of executing a function by using its name followed by parentheses.
    // If the function requires inputs (parameters), values are passed inside the parentheses.

    PrintHello(); // Function Call. // It runs a certain block of code written in that particular function we call.

    int value = PrintName(); // Here, we call the function which prints the name but the return value of function is stored in the variable.
    cout<<"value = "<< value <<endl; // Here, we print that return value
    
    // Arguments : Arguments are the actual values or data you pass into a function when you call it. They are used to provide the function 
    // with the information it needs to perform its task.

    cout<<"Sum = "<<sum(1,2)<<endl; // Here, we give 1 and 2 as arguments for parameter a and b respectively to the sum function.

    cout<<"Minimum Number = "<<minOfTwo(10,11)<<endl; // Here, we get the minimum value.

    cout<<sumToN(5)<<endl; // Here, it print the sum of 1 to 5 as 5 is the argument of the function.
    
    cout<<factorial(5)<<endl; // Here, we pass 5 as an argument to factorial function.

    // Pass by Value : Pass by Value means that when you pass a variable as an argument to a function, a copy of the variable’s value is 
    // created and sent to the function. Any changes made to the variable inside the function do not affect the original variable outside 
    // the function.

    int a = 1 , b = 5; // Here, we initialized the variable a and b with integer value.

    cout << "sum = "<< sum(a,b) << endl; // Here we pass variable with interger values as arguments (Pass by values).

    // Note : If we make changes values of a and b in the function it does not changes the value of a and b in the main function because the
    // changes is made in the copy of a and b (pass by values).

    int x = 5;

    changeX(x); // Here, it will return the changed value of x in the function.

    cout <<"x = "<<x<<endl; // Here, it will give the original value of x in the main function.

    // Note : The changes made in the pass by value of x which is the copy of teh orignal argument x (main).

    return 0;

}

// Note : We have to always define a function above the int main otherwise it will raise an error that function is (undefined/undeclared).
