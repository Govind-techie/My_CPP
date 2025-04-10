/*
Problem : Reverse a given number and return the resulting reverse number.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int res = 0;
    
    while (n != 0){
        int lastDig = n % 10;  // Extract the last digit of n
        res = res * 10 + lastDig;  // Add the digit to result (shifting previous digits left)
        n /= 10;  // Remove the last digit from n
    }

    cout << "Reverse value = " << res << endl;
    return 0;
}


// How the Number Reversal Algorithm Works

// Let's reverse the number 123 step by step:

// 1. Initialize: Start with n = 123, res = 0

// 2. First Iteration:
//    - Extract last digit: 123 % 10 = 3
//    - Build result: res = (0 × 10) + 3 = 3
//    - Remove last digit: n = 123 ÷ 10 = 12

// 3. Second Iteration:
//    - Extract last digit: 12 % 10 = 2
//    - Build result: res = (3 × 10) + 2 = 32
//    - Remove last digit: n = 12 ÷ 10 = 1

// 4. Third Iteration:
//    - Extract last digit: 1 % 10 = 1
//    - Build result: res = (32 × 10) + 1 = 321
//    - Remove last digit: n = 1 ÷ 10 = 0

// 5. Done: n = 0, so we exit the loop with res = 321

// The key insight: We build the reversed number by repeatedly:
// - Extracting digits from right to left (using % 10)
// - Shifting our result left (multiplying by 10) 
// - Adding each new digit to the right place




