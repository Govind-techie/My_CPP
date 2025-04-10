/*
Problem : Print the sum of odd digits of a number using for loop.
n = 10829
*/

#include<iostream>
using namespace std;

int main(){
    int n = 10829;
    int sum = 0;
    // Loop runs for each digit in the number.
    for (int i = n ; i != 0 ; i /= 10){
        // Check if the last digit is odd using modulo.
        if ((n%10) % 2 != 0){
            // Add the odd digit to sum.
            sum += n % 10;
        }
        // Remove the last digit by integer division (decimal value are ignored)
        n /= 10;
    }
    cout << "Sum = " << sum << endl; // Prints sum of odd digits of a number.
    return 0;
} 