// Data type modifiers are keywords in programming that modify the size or the type of a data type. They allow more flexibility in defining the range or memory allocation for variables.

// Common Data Type Modifiers in C++:
// 	1.	signed: Allows both positive and negative values. This is the default for most data types.
// 	2.	unsigned: Only allows positive values (0 or greater), effectively doubling the maximum positive range of the data type.
// 	3.	long: Increases the size of a data type, making it capable of storing larger values.
// 	4.	short: Reduces the size of a data type, making it suitable for smaller values.

// Examples:
// 	1.	signed and unsigned:
// 	•	signed int x = -10;  // Can store both negative and positive integers.
// 	•	unsigned int y = 10; // Can only store positive integers (0 or greater).
// 	2.	long and short:
// 	•	long int z = 100000; // A larger range of integers.
// 	•	short int w = 100;   // A smaller range of integers.


#include<iostream>
using namespace std;

int main(){

    cout<<sizeof(int)<<endl; // Here, it shows the size or capacity of int which is 4 bytes or 32 bits.
    cout<<sizeof(long int)<<endl; // Here, we long datatype modifier over int datatype which increases int size or capacity upto 8 bytes or
    // 64 bits which helps to store larger value that 4 byte int cant store in its memory.
    cout<<sizeof(short int)<<endl; // We use short variable when we want to store a small value and dont want to occupy large space in memory.
    cout<<sizeof(long long int)<<endl;

// eg : To store age we can use short datatype modifier with int as age cant be a large number.

    short int age; // Here, as we used short datatype modifier along with int it reduces the space occupied by int variable.
    cout<<"Enter your age : ";
    cin>>age; 
    cout<<sizeof(age)<<endl; // Here, the size of age variable along with short modifier has reduced from 4 bytes (int size) to 2 byte (after using short datatype modifier).

// eg : store customer id also id which is stored should always be positive.

    unsigned int customerID; // Here, we use unsigned datatype modifier with int datatype as it is used to store only unsigned value which is positive value only.
    cout<<"Enter your customer id : "; 
    cin>>customerID;
    cout<<customerID<<endl; // If the entered value is negative it will print a garbage value as int dataype is modified using unsigned modifer which only accpet unsigned or positive value.
    return 0;
}