// Type Casting : Type casting is the process of converting one data type to another data type manually.

// Implicit Type Casting : Implicit type casting is the process of converting a smaller data type to a larger data type automatically.
#include<iostream>
using namespace std;

int main(){
    char grade = 'A';
    int value = grade;
    cout<<value<<endl; // Here, the value of grade 'A' is converted to its ASCII value which is 65.
    


// Note : When we convert a smaller data type to a larger data type, it is known as widening.
// Note : When we convert a larger data type to a smaller data type, it is known as narrowing.

// Explicit Type Casting : Explicit type casting is the process of converting a larger data type to a smaller data type manually.
 
    double price = 10.475;
    int price_2 = (int)price;
    cout<<price_2<<endl;
    return 0;
}


