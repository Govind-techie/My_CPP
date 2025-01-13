// Operator Precendence : Operator precedence determines the order in which operators are evaluated in an expression. Operators with higher
// precedence are evaluated before operators with lower precedence.

// Operator Precedence Table (C++):

// Precedence	Operator Type	Operators	Associativity
// Highest	    Parentheses	       ()	    Left-to-Right
//              Unary	        +, -, !     Right-to-Left
//              Multiplicative	*, /, %	    Left-to-Right
//              Additive	        +, -	Left-to-Right
//              Shift	        <<, >>	    Left-to-Right
//              Relational	   <, <=, >, >=	Left-to-Right
//              Equality	        ==, !=	Left-to-Right
//              Bitwise AND	    &	        Left-to-Right
//              Bitwise XOR	    ^	        Left-to-Right
//              Bitwise OR       |          Left-to-Right
//              Logical AND	    &&	        Left-to-Right
//              Logical OR	    |           Left-to-Right
// Lowest	    Assignment	=, +=, -=, etc.	Right-to-Left

// Example:

// For the expression:

// int result = 5 + 2 * 3;

// 	1.	Operator Precedence: * (multiplication) has higher precedence than + (addition).
// 	2.	Execution Order:
// 	•	First, 2 * 3 is evaluated → 6
// 	•	Then, 5 + 6 is evaluated → 11
// 	3.	Final Value: result = 11

// Key Tip:

// Use parentheses to explicitly define the order of evaluation if needed :

// int result = (5 + 2) * 3; // Here, addition happens first, then multiplication.

// Note : When there is an expression in which two or more operator have same level of operator precendence then rule of associativity is used.

// Rules of Associativity : 

// Associativity defines the direction in which operators of the same precedence level are evaluated in an expression.
// 	•	Left-to-right associativity: Operators are evaluated from left to right.
// 	•	Right-to-left associativity: Operators are evaluated from right to left.

// Example: 4 * 5 % 2
// 	1.	Operators Involved:
// 	•	* (multiplication) and % (modulus) have the same precedence (multiplicative operators).
// 	•	These operators follow left-to-right associativity.
// 	2.	Evaluation Order:
// 	•	First, evaluate 4 * 5 → 20
// 	•	Then, evaluate 20 % 2 → 0
// 	3.	Final Result: 0

// Key Point:

// When multiple operators of the same precedence appear, associativity determines the order of evaluation. For example:
// 	•	* and % → Left-to-right
// 	•	Assignment (=) → Right-to-left

#include<iostream>
using namespace std;

int main(){
    int a = 5 + 2 * 3; // Here, it will first perform multiplication and then addition according to operator precedence.
    cout<<(a)<<endl; // Output : 11
    int b = (5 + 2) * 3; // Here, as we use parantheses it will first perform addition and then multiplication irrespective to its operator precedence.
    cout<<(b)<<endl; // Output : 21
    int c = 4 * 5 % 2; // Here, it will first perform multiplication and then modulo because its associativity is left to right.
    cout<<(c)<<endl; // Output : 0
    return 0;
}