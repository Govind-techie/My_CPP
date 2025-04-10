// Check if a number is prime.

#include<iostream>
using namespace std;

int main(){
    int n;  
    cout << "Enter a number: "; 
    cin >> n;  

    bool isPrime = true; // Assume the number is prime.

    for(int i = 2; i <= n - 1; i++) { // Check divisibility from 2 to n-1.
        if (n % i == 0) { // If divisible, it's not prime.
            isPrime = false;
            break; // Exit loop early.
        }
    }

    // Print result based on isPrime value.
    if (isPrime) 
        cout << "It is a prime number" << endl;
    else 
        cout << "It is not a prime number" << endl;

    return 0;
}