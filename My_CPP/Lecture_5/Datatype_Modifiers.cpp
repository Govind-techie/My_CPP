/*
DATATYPE MODIFIERS: 
Datatype modifiers are keywords used to change the properties of fundamental data types, 
such as their size (memory storage) and range (minimum and maximum values).

Types of Datatype Modifiers:
1. Signed → Allows both positive and negative values.
   * Use case: Storing temperature, financial transactions (profits/losses).
2. Unsigned → Allows only positive values (doubles the range of positive values).
   * Use case: Counting objects, population, distance, or memory addresses.
3. Short → Reduces memory size (used for small numbers).
   * Use case: Optimizing memory in embedded systems, microcontrollers.
4. Long → Increases memory size (used for large numbers).
   * Use case: Storing timestamps, large numerical data, national debts, or astronomy calculations.
*/

#include <iostream> 

using namespace std; 

int main() {

    // NOTE: The sizeof() function is used to determine the memory size (in bytes) of a data type,
    // which helps in understanding its storage capacity and range of values.

    // Signed vs Unsigned Integers
    // Signed int allows negative and positive numbers
    // Unsigned int allows only positive numbers (0 and above)

    signed int signedNum = -50;  // Example of a signed integer
    unsigned int unsignedNum = 50;  // Example of an unsigned integer

    cout << "Signed int: " << signedNum << ", Size: " << sizeof(signedNum) << " bytes, Example Range: -32,000 to 32,000" << endl;
    cout << "Unsigned int: " << unsignedNum << ", Size: " << sizeof(unsignedNum) << " bytes, Example Range: 0 to 65,000" << endl;

    // Important Note:
    // If you try to store a negative number in an unsigned int, the result will be incorrect (overflow).

    // Short vs Regular Integer
    // Short int takes less memory but has a smaller range
    // Regular int is more commonly used for calculations

    short int shortNum = 300;  // Short integer example
    int normalInt = 300;  // Regular integer example

    cout << "\nShort int: " << shortNum << ", Size: " << sizeof(shortNum) << " bytes, Example Range: -32,000 to 32,000" << endl;
    cout << "Regular int: " << normalInt << ", Size: " << sizeof(normalInt) << " bytes, Example Range: -2,000,000,000 to 2,000,000,000" << endl;

    // Long vs Int
    // Long int and long long int are used for very large numbers
    // They take more memory but can store much larger values

    long int longNum = 50000;  // Long integer example
    long long int veryLongNum = 1000000;  // Very large integer example

    cout << "\nLong int: " << longNum << ", Size: " << sizeof(longNum) << " bytes, Example Range: -2,000,000,000 to 2,000,000,000" << endl;
    cout << "Long long int: " << veryLongNum << ", Size: " << sizeof(veryLongNum) << " bytes, Example Range: -9,000,000,000,000,000,000 to 9,000,000,000,000,000,000" << endl;

    // Important Notes:
    // - Always use an appropriate data type based on the expected range of values.
    // - Using a smaller data type (like short) saves memory, but it limits the range.
    // - Long and long long should only be used when necessary to avoid unnecessary memory usage.

    return 0;
}
