// Check whether a number is an armstrong number.

// Hint : 371 is armstrong.
// 3*3*3 + 7*7*7 + 1*1*1 = 371

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a 3-digit number: ";
    cin >> n;

    int num = n;  // Creating a copy to preserve original input
    int dig1 = num % 10;  // Extract last digit
    num /= 10;  
    int dig2 = num % 10;  // Extract second digit
    num /= 10;  
    int dig3 = num;  // Remaining first digit

    int cubeSum = (dig1 * dig1 * dig1) + (dig2 * dig2 * dig2) + (dig3 * dig3 * dig3);

    if (cubeSum == n) {
        cout << n << " is an Armstrong Number\n";
    } else {
        cout << n << " is NOT an Armstrong Number\n";
    }

    return 0;
}