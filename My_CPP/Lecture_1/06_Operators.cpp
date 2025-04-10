/*
Operators : Operators are symbols that tell compiler to perform some operations.
Operands : Operands are some value or data on which the operator performs operations.

Operators are divided into 5 types :
- Arithmetic Operators
- Assignment Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
*/

#include<iostream>
using namespace std;

int main(){

    /*
    Arithmetic Operators: Arithmetic Operators used to perfom mathmetical computation.
    
    - Binary Operators : Addition (+), Subtraction (-), Multipication (*), Division(/), Modulo(%).
    - Unary Operators : Increment (++), Decrement (--).

    Binary Operators : Binary Operators requires 2 operands in minimum.
    Unary Operators : Unary Operators requires only 1 operands.

    */

    // - (Binary Operators)
    int a = 3;
    int b = 2;

    // Addition : To get sum of 2 values as final output.
    cout << (a + b) << endl; // Output : 5

    // Subtraction : To get difference of 2 values as final output.
    cout << (a - b) << endl; // Output : 1

    // Multipication : To get product of 2 values as final output.
    cout << (a * b) << endl; // Output : 6
     
    // Division : To get quotient of 2 values as final output.
    cout << (a / b) << endl; // Output : 1 (quotient)

    // Modulo : To get remainder of 2 values as final output.
    cout << (a % b) << endl; // Output : 1 (remainder)


    // - (Unary Operators)

    int num = 1;
    num = num + 1; // It is simply adding 1 to the initial value of num and storing it in the same variable (updating/incrementing).

    cout << num << endl; // Output : 2

    num++; // num = num + 1 and num++ both have same output (Increment Operator {++} is used for incrementing the value by 1)
    cout << num << endl; // Output : 3

    num--; // num = num - 1 and num-- both have same output (Decrement Operator {--} is used for decrementing the value by 1)

    // {NOTE : Unary Operators such as (++) and (--) increase or decreases the value by 1 only}
    
    // Use Case : Mainly used in loops for a base case and increases and decreases the value to meet that certain condition

    // Increment and Decrement Operators has 2 sub types for each : 

    // INCREMENT (++) : Pre Increment (++a), Post Increment (a++)
    // DECREMENT (--) : Pre Increment (--a), Post Increment (a--)
    

    int num1 = 5, num2;

    // INCREMENT
    num2 = ++num1;  // Pre-increment: Increment first, then assign the value.
    cout << "After pre-increment: num1 = " << num1 << ", num2 = " << num2 << endl;

    num1 = 5;  
    num2 = num1++;  // Post-increment: Assign the value first, then increment it.
    cout << "After post-increment: num1 = " << num1 << ", num2 = " << num2 << endl;

    // DECREMENT
    num1 = 5;  
    num2 = --num1;  // Pre-decrement: Decrement first, then assign the value
    cout << "After pre-decrement: num1 = " << num1 << ", num2 = " << num2 << endl;

    num1 = 5;  
    num2 = num1--;  // Post-decrement: Assign first the value, then decrement it.
    cout << "After post-decrement: num1 = " << num1 << ", num2 = " << num2 << endl;

   /*  
    Assignment Operators: Assignment operators are used to assign values to variables.  

    - Basic Assignment Operator: (=) => (Assigns the right-hand value to the left-hand variable).  
    - Compound Assignment Operators:  
      (+=) => (Addition assignment),  
      (-=) => (Subtraction assignment),  
      (*=) => (Multiplication assignment),  
      (/=) => (Division assignment),  
      (%=) => (Modulo assignment).  

    Explanation:  
    - The basic assignment operator (=) assigns values directly.  
    - The compound assignment operators perform an operation and assign the result in one step.  

    */

    // - (Assignment Operators)
    int a = 10, b = 5;

    // Basic Assignment: Assigns value to a variable.
    int c = a;  
    cout << "c = " << c << endl; // Output: 10

    // Addition Assignment: Adds right value to left variable.
    a += b;  
    cout << "a += b: " << a << endl; // Output: 15 (10 + 5)

    // Subtraction Assignment: Subtracts right value from left variable.
    a -= b;  
    cout << "a -= b: " << a << endl; // Output: 10 (15 - 5)

    // Multiplication Assignment: Multiplies left variable by right value.
    a *= b;  
    cout << "a *= b: " << a << endl; // Output: 50 (10 * 5)

    // Division Assignment: Divides left variable by right value.
    a /= b;  
    cout << "a /= b: " << a << endl; // Output: 10 (50 / 5)

    // Modulo Assignment: Stores remainder of division in left variable.
    a %= b;  
    cout << "a %= b: " << a << endl; // Output: 0 (10 % 5)

    /*  
    Relational Operators: Relational operators are used to compare two values and return a boolean result (`true` or `false`).  

    - Comparison Operators:  
      (==) => (Equal to) → Returns true if both values are equal.  
      (!=) => (Not equal to) → Returns true if values are different.  
      (>) => (Greater than) → Returns true if left value is greater.  
      (<) => (Less than) → Returns true if left value is smaller.  
      (>=) => (Greater than or equal to) → Returns true if left value is greater or equal.  
      (<=) => (Less than or equal to) → Returns true if left value is smaller or equal.  

    Explanation:  
    - These operators are mainly used in decision-making (if-else conditions, loops).  
    - They return true (1) or false (0) based on the comparison result.  
    
    */

    // - (Relational Operators)
    int a = 10, b = 5;

    // Equal to: Returns true (1) if both values are equal.
    cout << "a == b: " << (a == b) << endl; // Output: 0 (false)

    // Not equal to: Returns true (1) if values are different.
    cout << "a != b: " << (a != b) << endl; // Output: 1 (true)

    // Greater than: Returns true (1) if left value is greater.
    cout << "a > b: " << (a > b) << endl; // Output: 1 (true)

    // Less than: Returns true (1) if left value is smaller.
    cout << "a < b: " << (a < b) << endl; // Output: 0 (false)

    // Greater than or equal to: Returns true (1) if left value is greater or equal.
    cout << "a >= b: " << (a >= b) << endl; // Output: 1 (true)

    // Less than or equal to: Returns true (1) if left value is smaller or equal.
    cout << "a <= b: " << (a <= b) << endl; // Output: 0 (false)


    /*  
    Logical Operators: Logical operators are used to perform logical operations and return a boolean result (`true` or `false`).  

    - Logical Operators:  
      (&&) => (Logical AND) → Returns true if both conditions are true.  
      (||) => (Logical OR) → Returns true if at least one condition is true.  
      (!) => (Logical NOT) → Returns the opposite of the condition (negates it).  

    Explanation:  
    - Logical operators are mainly used in decision-making (if-else conditions, loops).  
    - && ensures both conditions must be true to return true.  
    - || returns true if at least one condition is true.  
    - ! negates the result (true becomes false, false becomes true).  

    */ 
   
    // - (Logical Operators)
    int a = 10, b = 5, c = 10;

    // Logical AND: Returns true (1) if both conditions are true.
    cout << "(a == c) && (a > b): " << ((a == c) && (a > b)) << endl; // Output: 1 (true)

    // Logical OR: Returns true (1) if at least one condition is true.
    cout << "(a == b) || (a > b): " << ((a == b) || (a > b)) << endl; // Output: 1 (true)

    // Logical NOT: Reverses the condition (true becomes false, false becomes true).
    cout << "!(a == b): " << !(a == b) << endl; // Output: 1 (true)


    return 0;
}