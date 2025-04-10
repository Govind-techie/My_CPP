// Problem : Check whether a number is prime or not.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; 
    cout << "Enter a number : "; 
    cin >> n; 

    bool isPrime = true; // Assume the number is prime initially

    for (int i = 2; i < sqrt(n) ; i++){ // Loop from 2 to sqrt(n)
        if (n % i == 0){ // Check if n is divisible by i
            isPrime = false; // If divisible, n is not prime
            break; // Exit the loop early
        }
    }
    
    if (isPrime){ // If isPrime is still true
        cout << n << " is a prime no." << endl; // Output that n is prime
    }else{
        cout << n << " is not a prime no." << endl; // Output that n is not prime
    }
}