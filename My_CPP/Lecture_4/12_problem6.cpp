#include <iostream>
using namespace std;

// Function to calculate factorial of n:
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; 
    }
    return fact;
}

int main() {
    cout << "Factorial of 5 = " << factorial(5) << endl;
    return 0;
}