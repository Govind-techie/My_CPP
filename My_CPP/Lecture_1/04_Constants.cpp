// Constants : Constants in C++ are variables who's value can't be changed.

#include<iostream>
using namespace std;

int main(){
    const int a = 10; // Defined a constant variable (a) who's value is 10 which can't be changed.
    int b = 10;
    b = 25;
    // a = 25 (Throws an error as constant variable value is not modifiable)

    // const int num; {NOTE : constant variable requires a value as an initializer (starting value)}

    // Constant are generally created for those value who's value should not be updated even after performing various operations throughout the program.
    const float pi = 3.14; // As pi value does not change in any circumstance we can define it as a constant.
    const float g = 9.8; // Similarly earth's gravitational force (g) value.

    /*  
    Difference between macros and constant variable value:  
    - A macro (#define) is replaced before compilation, while a `const` variable is stored in memory and checked by the compiler.  

    #define PI 3.14  // Macro (Replaced before compilation)
    const double pi = 3.14;  // Const variable (Stored in memory)

    cout << "Macro PI: " << PI << endl;  // PI is replaced by 3.14 before compilation
    cout << "Const pi: " << pi << endl;  // pi is fetched from memory at runtime

    NOTE: Macros can be used to create short forms or act as datatype modifiers.  

    Example:  
    #define ll long long (Defines `ll` as a short form for `long long`, so `ll` can be used instead of `long long` throughout the program.)
    */
   
    return 0;
}