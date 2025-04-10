// Variables : Variables are used to store data such as numbers,characters,strings,etc. in a program.
// Data Types : Data types are used to define the type of data that a variable can store.

#include<iostream>
using namespace std;

int main(){
    // Here, int is the data type used to store integer values.
    int age = 16; // Here, int is the data type and age is the variable name.
    char grade = 'A'; // Here, char is the data type used to store character values.
    float pi = 3.14f; // Here, float is used along with f to store floating point values.
    bool is_true = true; // Here, bool is used to store values in terms of true or false.
    double large_number = 1.7976931348623157e+308; // Here, double is used to store large floating point values.

    int a; // If we do not store any value in a variable it automatically stores a garbage value (random value) in it.
    cout << a << endl; // It prints that garbage value.

    cout<<pi<<endl;
    cout<<is_true<<endl;
}

// Data Types : int, float, char, double, bool etc.

// Note : If we don't use f suffix it will lose precision for decimal values.

// Note : If we print the value of bool it will return 1 if the value is true and 0 if the value is false.