// Bitwise Operator : A bitwise operator is a type of operator in programming that performs operations directly on the binary representation
// of numbers (bits).

// Bitwise (&) : The bitwise AND (&) operator compares each bit of two numbers and returns 1 if both bits are 1. Otherwise, it returns 0.

// Example:

// For a = 5 (0101) and b = 3 (0011) in binary :

//   0101  (binary of 5)
// & 0011  (binary of 3)
//   ----
//   0001  (binary of 1) 

// Result: a & b = 1

// Bitwise (|) : The bitwise OR (|) operator compares each bit of two numbers and returns 1 if at least one of the bits is 1. Otherwise, it
// returns 0.

// Example:

// For a = 5 (0101) and b = 3 (0011) in binary:

//   0101  (binary of 5)
// | 0011  (binary of 3)
//   ----
//   0111  (binary of 7)

// Result: a | b = 7

// Bitwise (^) : The bitwise XOR (^) operator compares each bit of two numbers and returns 1 if the bits are different, and 0 if the bits
// are the same.

// Example:

// For a = 5 (0101) and b = 3 (0011) in binary:

//   0101  (binary of 5)
// ^ 0011  (binary of 3)
//   ----
//   0110  (binary of 6)

// Result: a ^ b = 6

// Bitwise (<<) : bitwise left shift (<<) operator shifts the bits of a number to the left by a specified number of positions. For each
// shift, a 0 is added to the right, and the leftmost bits are discarded.

// Example:

// For a = 5 (0101) and shifting 2 positions to the left (a << 2):

//   0101   (binary of 5)
// << 2
//   ----
//   10100  (binary of 20)

// Result: 5 << 2 = 20

// Note : Internally bitwise (<<) performs an operation on number which is (a * 2^b) eg. (5 * 2^2 = 20)

// Bitwise (>>) : bitwise right shift (>>) operator shifts the bits of a number to the right by a specified number of positions. For each 
// shift, the rightmost bits are discarded.

// Example:

// For a = 5 (0101) and shifting 2 positions to the right (a >> 2):

//   0101   (binary of 5)
// >> 2
//   ----
//   0001   (binary of 1) // It removed, 01 from binary number fo 5.

// Result: 5 >> 2 = 1

// Note : Internally bitwise (<<) performs an operation on number which is (a/2^b) eg. (5 / 2^2 = 1)

#include<iostream>
using namespace std;

int main(){
    int a = 5 , b = 3;

    cout<<(a & b)<<endl; // Here, it return the value obtained by performing bitwise operator (&) in form of decimal value.
    cout<<(a | b)<<endl; //  Here, it return the value obtained by performing bitwise operator (|) in form of decimal value.
    cout<<(a^b)<<endl; // Here, it return the value obtained by performing bitwise operator (^) in form of decimal value.
    cout<<(5 << 2)<<endl; // Here, it shifts each bit of number towards left by 2 places and fill the vacant spaces with 0 by using bitwise (<<) operator an return the value in form of decimal.    
    cout<<(5 >> 2)<<endl; // Here, it shifts each bit of number towards right by 2 palces and discard the 2 rightmost value from that number
    return 0;
}