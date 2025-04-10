/*
Problem: Print the sum of the digits of a number using a while loop.
Example: n = 10829
*/

#include <iostream>
using namespace std;


int main(){
    int number = 10829;  // Input number to calculate digit sum
    int digitSum = 0;    // Accumulator for sum of digits

    // Loop until all digits are processed (i.e., number becomes 0)
    while (number != 0) {  
        // Extract last digit using modulo operation and add to sum
        digitSum += number % 10;  
        // Remove last digit by performing integer division by 10
        number /= 10;        
    }
    
    // Output the calculated sum of digits
    cout << "Sum of digits = " << digitSum << endl;
    return 0;
}