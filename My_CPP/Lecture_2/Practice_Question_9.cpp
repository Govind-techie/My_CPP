// Problem Statement: Fibonacci Series
// The Fibonacci series is a sequence where each number is the sum of the two preceding ones, starting with 0 and 1.
// Your task is to find the n-th Fibonacci number.
//
// Example:
// Input: 4
// Output: 3
// Explanation: The sequence is 0, 1, 1, 2, 3. The 4th Fibonacci number is 3.

#include <iostream>
using namespace std;

int main(){
    int first = 0;
    int sec = 1;
    int fib;
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // Loop to calculate the n-th Fibonacci number
    for (int i = 1; i < n; i++) {
        // Calculate the next Fibonacci number
        fib = first + sec;
        // Update 'first' to the previous 'sec'
        first = sec;
        // Update 'sec' to the new Fibonacci number
        sec = fib;
    }

    cout << "Fibonacchi number : " << fib << endl;
    return 0;
}