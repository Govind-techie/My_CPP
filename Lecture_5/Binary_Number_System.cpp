// Binary Number System : The binary number system is a system of numbers that uses only two digits: 0 and 1. It is a base-2 system, and each
// position in a binary number represents a power of 2, starting from  2^0  (the rightmost position). Computers use the binary system to
// store and process data because they operate with electrical signals that have two states: on (1) and off (0).

// Number Systems : 

// 1. Decimal Number System (1 to 9)
// 2. Binary  Number System (0 and 1)
// 3. Octal Number System (0 to 7)
// 4. HexaDecimal Number System (0 to 9 and ABCDEF)

// Conversion of Decimal in Binary Number System

// Step for conversion : We have to divide the decimal number with 2 and note the remainder.

// Division by 2	Quotient	Remainder
//     42 ÷ 2	        21	        0
//     21 ÷ 2	        10	        1
//     10 ÷ 2	        5	        0
//     5 ÷ 2	        2	        1
//     2 ÷ 2	        1	        0
//     1 ÷ 2	        0	        1 

// Decimal (42) : binary (101010)

// Note : The binary number is written from bottom to top.

// Conversion of Binary To Decimal Number System :

// Steps:
// 	1.	Write down the place values of each binary digit. Binary is a base-2 system, so the place values are powers of 2:  2^5, 2^4, 2^3, 2^2, 2^1, 2^0 , from left to right.
// 	2.	Multiply each binary digit by its corresponding place value.
// 	3.	Add all the results together.

// Binary Digit	    Place Value (2^n)	    Calculation
//     1	            2^5 = 32	        1 * 32 = 32
//     0	            2^4 = 16	        0 * 16 = 0
//     1	            2^3 = 8	            1 * 8 = 8
//     0	            2^2 = 4	            0 * 4 = 0
//     1	            2^1 = 2	            1 * 2 = 2
//     0	            2^0 = 1	            0 * 1 = 0

// Add Them Up:

//  32 + 0 + 8 + 0 + 2 + 0 = 42 

// Result:

// The binary number 101010 is 42 in decimal.


#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int remainder;
    int power = 1; // To handle the position of binary digits (1s, 10s, 100s...)
    int binaryNumber = 0;

    while (n > 0) {
        remainder = n % 2;   // Get the remainder (0 or 1)
        n /= 2;          // Update n to the quotient
        binaryNumber += (remainder * power); // Add the binary digit to the result
        power *= 10;        // Increase the position (units -> tens -> hundreds)
    }

    return binaryNumber;
}

int binaryToDecimal(int n) {
    int digits;             // To store the current binary digit (0 or 1).
    int power = 1;          // Represents 2^position (starting from 2^0 = 1).
    int decimalNumber = 0;  // Initialize the decimal equivalent to 0.

    // Loop until the binary number becomes 0.
    while (n > 0) {
        digits = n % 10;          // Extract the last digit of the binary number.
        n /= 10;                  // Remove the last digit (reduce the binary number).
        decimalNumber += (digits * power); // Add the digit's contribution to the decimal number.
        power *= 2;               // Move to the next power of 2 (2^1, 2^2, etc.).
    }

    return decimalNumber;         // Return the final decimal equivalent.

}

int main() {
    int n1,n2;
    cout<<"Enter a decimal number : ";
    cin>>n1;

    cout << "The Binary number of " << n1 << " is: " << decimalToBinary(n1) << endl;

    cout<<"Enter a binary number : ";
    cin>>n2;
    cout << "The Decimal number of " << n2 << " is: " << binaryToDecimal(n2) << endl;

    return 0;
}


// Common Binary Number (1 to 10):

// 0  ->  0
// 1  ->  1
// 2  ->  10
// 3  ->  11
// 4  ->  100
// 5  ->  101
// 6  ->  110
// 7  ->  111
// 8  ->  1000
// 9  ->  1001
// 10 ->  1010

// Shortcut to convert Decimal into Binary.

// Steps for this Shortcut Method:
// 	1.	Identify the largest power of 2 that is less than or equal to the decimal number.
// 	2.	Place a 1 in the binary place corresponding to this power of 2.
// 	3.	Subtract this power of 2 from the decimal number.
// 	4.	Repeat the process with the remaining value, moving to the next lower power of 2 (e.g., 32, 16, 8, 4, 2, 1).
// 	5.	Place 1s in the binary places that match the powers of 2 used, and place 0s in the others.

// Example: Convert 34 to Binary
// 	1.	Largest power of 2 less than or equal to 34 is 32 (since 32 ≤ 34 < 64).
// 	•	Put a 1 at the 32 place (because 32 is part of the sum).
// 	•	Subtract 32 from 34:
//  34 - 32 = 2 
// 	2.	Largest power of 2 less than or equal to 2 is 2.
// 	•	Put a 1 at the 2 place (because 2 is part of the sum).
// 	•	Subtract 2 from 2:
//  2 - 2 = 0 
// 	3.	Now that the remaining value is 0, we stop.

// So, the binary representation of 34 is:

// Binary of 34: 100010

// Explanation:
// 	•	32 place gets a 1 (since 32 is part of 34).
// 	•	2 place gets a 1 (since 2 is part of 34).
// 	•	All other place values are 0.

// Thus, the binary equivalent of 34 is 100010.


// Addition of Binary Numbers.

// Binary Addition Rules:
// 	•	0 + 0 = 0
// 	•	0 + 1 = 1
// 	•	1 + 0 = 1
// 	•	1 + 1 = 10 (This results in a sum of 0, and you carry over a 1 to the next higher place value)

// Steps for Binary Addition:
// 	1.	Start from the rightmost bit (like with decimal addition).
// 	2.	Add the corresponding bits from both numbers.
// 	3.	Carry over the extra bit to the next higher place if the sum exceeds 1 (i.e., when the sum of two 1s equals 10).
// 	4.	Repeat the process for each place value from right to left.

// Example 1: Adding 1011 and 1101

// Let’s add 1011 and 1101 step-by-step:

//    1011
// +  1101
// ---------

// 	1.	Rightmost bit: 1 + 1 = 10 → write 0, carry over 1.
// 	2.	Second bit: 1 + 0 + 1 (carry) = 10 → write 0, carry over 1.
// 	3.	Third bit: 0 + 1 + 1 (carry) = 10 → write 0, carry over 1.
// 	4.	Leftmost bit: 1 + 1 + 1 (carry) = 11 → write 1, carry over 1.
// 	5.	Finally, there’s a carryover of 1, so write it as the new leftmost bit.

// So the result of 1011 + 1101 is:

//    1011
// +  1101
// ---------
//   11000


// Two’s complement is a method for representing signed integers (both positive and negative numbers) in binary. It allows easy representation of negative numbers and simplifies binary arithmetic, especially addition and subtraction, by using the same rules as for unsigned numbers.

// Steps to Find the Two’s Complement of a Binary Number:
// 	1.	Write the binary representation of the number.
// 	2.	Invert all the bits (flip 0s to 1s and 1s to 0s).
// 	3.	Add 1 to the result of the inversion.

// This results in the two’s complement, which represents the negative version of the number.

// Example:

// Let’s find the two’s complement of 5 in 8-bit binary.

    // 	1.	Write 5 in binary (8 bits):  5 = 00000101

    //  2.	Invert all the bits: 11111010

	// 3.	Add 1 to the result: 11111010 + 1 = 11111011

    // So, -5 in two’s complement is : 11111011

// Why is Two’s Complement Useful?
// 	•	It allows both positive and negative numbers to be represented efficiently.
// 	•	It makes addition and subtraction operations easier because the same binary arithmetic rules can be applied to both positive and
//      negative numbers. 



// Most Significant Bit (MSB):

// The Most Significant Bit (MSB) is the leftmost bit in a binary number, which carries the highest value. It plays a significant role in determining the sign of the number, especially in signed number representations like two’s complement.
// 	•	In an unsigned binary number, the MSB simply represents the largest place value (e.g., in an 8-bit number, the MSB represents 128 in decimal).
// 	•	In two’s complement representation, the MSB indicates the sign of the number:
// 	•	If the MSB is 0, the number is positive or zero.
// 	•	If the MSB is 1, the number is negative.

// Example of MSB:

// Consider an 8-bit two’s complement number:

// 	1.	Positive number : 00000101  (MSB = 0, positive number)

// This is the binary representation of 5.

// 2.	Negative number : 11111011  (MSB = 1, negative number)

// This is the two’s complement representation of -5.

// MSB and Two’s Complement Example:

// Consider an 8-bit two’s complement number 11010101:
// 	•	The MSB is 1, so this indicates the number is negative.
// 	•	To find the decimal value, first, we take the two’s complement (invert the bits and add 1):
// 	•	11010101 → Invert → 00101010 → Add 1 → 00101011 → This is 43 in decimal.
// 	•	So, the value of 11010101 in two’s complement is -43.
