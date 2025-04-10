#include <iostream>
using namespace std;

// Function to find the minimum of two numbers:
int minOfTwo(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    cout << "Minimum Number = " << minOfTwo(10, 11) << endl;
    return 0;
}