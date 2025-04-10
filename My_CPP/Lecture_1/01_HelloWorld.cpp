#include<iostream> // Here, it include a file name called iostream which includes the actual definition of cout and cin function. (Preprocesser directives)
#define PI 3.14 // It is a macros which is used to define a symbolic constant where PI (symbol) and 3.14(constant) means in this code PI value is already defined as 3.14
using namespace std; // It is used to avoid writing std::cout.

    // This the start of the program.
    int main () { // It is the main function which is the starting point of the program.
        cout<<"Govind "<<"Choudhary"<<endl; // Here, cout is used to print the string "Govind" and endl is used to print a new line.
        cout<<"hello world!\n"; // Here, "\n" is used to print a new line.
        cout << PI << endl; // Prints PI value which is already defined as 3.14    
        return 0; // It is used to return an integer value to the int main function.
    }

// To compile the program, we use the following command: g++ hello_world.cpp -o hello_world.
// To run the program, we use the following command: ./hello_world.
// To execute the program in one line, we use the following command: g++ hello_world.cpp -o hello_world && ./hello_world.

// Boilerplate code is the code that is used to start a program.
