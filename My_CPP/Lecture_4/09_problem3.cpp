#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers:
int sum(int a, int b) {  
    int sum = a + b;  // Calculating sum.
    return sum;  // Returning result.
}

int main() {
    cout << "Sum = " << sum(1, 2) << endl;
    return 0;
}