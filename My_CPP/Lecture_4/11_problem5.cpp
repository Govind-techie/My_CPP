#include <iostream>
using namespace std;

// Function to calculate the sum from 1 to n:
int sumToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << "Sum to N (5) = " << sumToN(5) << endl;
    return 0;
}