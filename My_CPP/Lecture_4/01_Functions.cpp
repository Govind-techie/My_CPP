#include<iostream>
using namespace std;

// Function: A block of code that performs a specific task. It takes inputs (parameters), processes them, and may return a result.

// Basic Structure of a Function:
// return_type function_name(parameters) {
//     // Code to perform task
//     return result;  // (optional) if return type is not void
// }

// Void Function: A function that does not return any value.

// Note: A function must be written outside the int main() function. Functions cannot be nested inside one another, but they can be called within main().

// Function Definition:
void PrintHello(){  // Function named PrintHello with return type void.
    cout << "Hello" << endl;
    // No return statement needed as the function type is void.
}

// Return Value: The value a function sends back after execution.
int PrintName(){  // Function with return type int, so it must return an integer.
    cout << "Govind Choudhary" << endl;
    return 2;  // Returning an integer value.
}

// Function to calculate the sum of two numbers:
int sum(int a, int b){  // Function with two integer parameters.
    int sum = a + b;  // Calculating sum.
    return sum;  // Returning the result.
}

// Function to find the minimum of two numbers:
int minOfTwo(int a, int b){
    if (a < b){
        return a;
    } else {
        return b;
    }
}

// Function to calculate the sum from 1 to n:
int sumToN(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
}

// Function to calculate factorial of n:
int factorial(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i; 
    }
    return factorial;
}

// Function to modify x:
int changeX(int x){
    x = 2 * x;
    cout << "x = " << x << endl;
    return x;
}

// Function Overloading: Defining multiple functions with the same name but different parameters.
// The function called depends on the number and type of arguments provided.

int multiply(int a, int b){
    return a * b;  // Multiplies two integers
}

// Overloaded function with three parameters
int multiply(int a, int b, int c){
    return a * b * c;  // Multiplies three integers
}

// Example:
// cout << multiply(2,3);    // Calls the two-parameter version
// cout << multiply(2,3,4);  // Calls the three-parameter version

// Recursion: A function calling itself to solve a smaller subproblem.
// Useful for problems like factorial, Fibonacci sequence, etc.

int recursiveFactorial(int n){
    if(n <= 1)
        return 1;  // Base case
    return n * recursiveFactorial(n - 1);  // Recursive call
}

// Example:
// cout << recursiveFactorial(5);  // Output: 120

int main(){  // Note: main() is also a function with return type int.
    
    // Function Call: Executing a function by its name followed by parentheses.
    PrintHello();  // Calling PrintHello function.

    int value = PrintName();  // Calling PrintName function and storing its return value.
    cout << "value = " << value << endl;  // Printing return value.
    
    // Arguments: Actual values passed to a function when calling it.
    cout << "Sum = " << sum(1,2) << endl;  // Passing 1 and 2 as arguments.
    cout << "Minimum Number = " << minOfTwo(10,11) << endl;  // Finding minimum of two numbers.
    cout << sumToN(5) << endl;  // Printing sum from 1 to 5.
    cout << factorial(5) << endl;  // Printing factorial of 5.

    // Pass by Value: When passing a variable, a copy of its value is sent. Changes inside the function do not affect the original variable.
    int a = 1, b = 5;
    cout << "sum = " << sum(a, b) << endl;  // Passing variables a and b.
    
    int x = 5;
    changeX(x);  // Function modifies a copy of x, not the original.
    cout << "x = " << x << endl;  // Printing original x, unchanged.

    // Function Overloading Example:
    cout << "Multiplication (2 numbers) = " << multiply(3, 4) << endl;
    cout << "Multiplication (3 numbers) = " << multiply(3, 4, 5) << endl;

    // Recursion Example:
    cout << "Factorial using Recursion (5) = " << recursiveFactorial(5) << endl;
    
    return 0;
}

// Note: Functions must be defined before they are used, or an error will occur due to an undefined function.
