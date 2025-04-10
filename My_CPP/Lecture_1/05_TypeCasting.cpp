// Type Casting : Type casting is the process of converting data of one type to another type manually.

#include<iostream>
using namespace std;

int main(){

    // Implicit Type Casting : Implicit type casting is the process of converting a smaller data type to a larger data type automatically.
    // (Done by compiler to avoid data loss)

    cout << (10/3) << endl; // As one integer value is divided by another integer value the output would also be in integer type.
    // Output : 3

    cout << (10/3.0) << endl; // As integer value is divided by a float value there is an implicit conversion done by complier which give preference to larger datatype.
    // Output : 3.33333 (As float datatype is larger as compared to int datatype the resulting output is of float type)

    // {NOTE : Implicit conversion is also called as type promotion as there is promotion of smaller type into larger one}

    /*
    Flow of Implicit Conversion : bool => char => int => float => double (represent the flow in which implicit type conversion occurs)
    */

    // Example of char => int (implicit conversion)
    char grade = 'A';
    int value = grade;
    cout<<value<<endl; // The value of grade 'A' is converted to its ASCII value which is 65 as it is stored in an int type variable.

    cout << 'A' + 1 << endl; // It firstly converts 'A' into its ASCII value which is 65 and add 1 to it.
    // Output : 66 (As value 1 which is of type int is greater than the value 'A' which is of char type.)
    cout << 'b' + 2 << endl; // Output : 100 (NOTE : ASCII value of lowercase is different to there respective uppercase letter.) 
    
    // {NOTE : When we convert a smaller data type to a larger data type, it is known as widening.}
    // {NOTE : When we convert a larger data type to a smaller data type, it is known as narrowing.}

    // Explicit Type Casting : Explicit type casting is the process of converting a larger data type to a smaller data type and vice versa manually.
    
    cout << (int)('A') << endl; // The value of 'A' is explicity coverted into its ASCII value as it is preceded by (int) type.
 
    double price = 10.475;
    int price_2 = (int)price; // As price is stored in double type variable which is larger than int type so we used explicitly converted it in int type.
    cout<<price_2<<endl; // Output : 10
    
    float PI = 3.14;
    cout << (int)(PI) << endl;
    cout << ((float)10/3) << endl; // Now, 10 is explicitly converted into float value which is 10.0 resulting output to be in float type.
    cout << ((char)('A' + 1)) << endl; // Resulting output is in char type. Output : 'B'.
    return 0;
}
