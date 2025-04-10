// Problem : Print the nth fibonacci.

// fibonacci eg : 0 1 1 2 3 5 ...

// Note : In fibonacci series every number is added to get a new number and the series goes on increasing forever.

#include<iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int fibonacci(int n){

    // Edge Cases: When n is 0 or 1, we directly return the Fibonacci value
    if (n == 0){
        cout<<"The fibonacci value is : "<<n;  // For n = 0, Fibonacci value is 0
    }else if (n == 1){
        cout<<"The fibonacci value is : "<<n;  // For n = 1, Fibonacci value is 1
    }

    // Calculating Fibonacci for n >= 2
    if (n >= 2){
        int a = 0 , b = 1 , c;  // Initialize the first two Fibonacci numbers, a = F(0), b = F(1)

        // Loop to calculate Fibonacci numbers starting from F(2)
        for (int i = 2 ; i <= n ; i++){
            c = a + b;   // Calculate the next Fibonacci number
            a = b;       // Update a to the previous Fibonacci number (F(n-2))
            b = c;       // Update b to the current Fibonacci number (F(n-1))
        }
        
        return c;  // After the loop ends, return the nth Fibonacci number (c will be F(n))
    }
}


int main(){
    int n;  // Declare a variable to store the user's input
    cout<<"Enter a number : ";  // Prompt the user to enter a number
    cin>>n;  // Store the user's input in the variable n

    // Call the fibonacci function and display the result
    cout<<"The value of fibonacci is : "<<fibonacci(n)<<endl;

    return 0;  
}