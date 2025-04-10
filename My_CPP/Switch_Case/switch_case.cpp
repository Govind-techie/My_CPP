// Switch Case : In C++, a switch case is a control statement that allows you to execute one block of code out of many, based on the value
// of an expression or variable. It compares the value of the expression with predefined constants in the case labels, and if a match is
// found, the corresponding block of code is executed.

// Structure of Switch Case :

// switch (expression) {
//     case constant1:
//         // Code for case 1
//         break;

//     case constant2:
//         // Code for case 2
//         break;

//     case constant3:
//         // Code for case 3
//         break;

//     // You can add more cases as needed

//     default:
//         // Code for default case (optional)
//         break;
// }

#include<iostream>
using namespace std;

int main(){

    // Problem : Take a button and name variable and user will input from a to d and each button will return hello with name in different language.

    // Inputs :

    string name;
    char button;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter a character value : ";
    cin>>button;

    // Code in if-else :

    // if (button == 'a'){
    //     cout<<"Hello "<<name<<endl;
    // }else if(button == 'b'){
    //     cout<<"Namaste "<<name<<endl;
    // }else if(button == 'c'){
    //     cout<<"Ciao "<<name<<endl;
    // }else if(button == 'd'){
    //     cout<<"Hola "<<name<<endl;
    // }else{
    //     cout<<"I am still learning more! "<<name;
    // }

    // code in switch case :

    // The switch-case structure is used to execute different blocks of code based on the value of the 'button' variable.
    switch(button) {
    
        // Case for when 'button' equals 'a'
        case 'a':
            // If the user enters 'a', this block is executed
            cout << "Hello " << name << endl;  // Prints "Hello" followed by the value of the 'name' variable
            break;  // Exits the switch statement to prevent executing other cases

        // Case for when 'button' equals 'b'
        case 'b':
            // If the user enters 'b', this block is executed
            cout << "Namaste " << name << endl;  // Prints "Namaste" followed by the value of the 'name' variable
            break;  // Exits the switch statement

        // Case for when 'button' equals 'c'
        case 'c':
            // If the user enters 'c', this block is executed   
            cout << "ciao " << name << endl;  // Prints "ciao" followed by the value of the 'name' variable
            break;  // Exits the switch statement

        // Case for when 'button' equals 'd'
        case 'd':
            // If the user enters 'd', this block is executed
            cout << "Hola " << name << endl;  // Prints "Hola" followed by the value of the 'name' variable
            break;  // Exits the switch statement

        // Default case: This block is executed if 'button' doesn't match any of the above cases
        default:
            // If the user enters any value other than 'a', 'b', 'c', or 'd', this block is executed
            cout << "I am still learning more!" << name << endl;  // Prints a default message followed by the 'name'
            break;  // Exits the switch statement (not strictly required here but good practice)

            // {NOTE : Default statement is not necessary its acts like an else statement in if-else statement}
}

// Flow of the Code:
// 1. The value of the 'button' variable is evaluated.
// 2. Based on the value, the program jumps to the matching case block (if any).
// 3. The corresponding code inside the case block is executed.
// 4. The 'break' statement ensures the program exits the switch statement after executing a case block.
// 5. If no case matches, the 'default' block is executed to provide a fallback message.

// Problem : make a calculator :

    int n1,n2;
    char operators;
    cout<<"Enter 1st number : ";
    cin>>n1;     
    cout<<"Enter an operator : ";
    cin>>operators;
    cout<<"Enter 2nd number : ";
    cin>>n2;

// The switch-case structure is used to perform arithmetic operations based on the 'operators' variable
switch(operators) {

    // Case for addition ('+')
    case '+':
        // If 'operators' is '+', this block is executed
        cout << n1 << operators << n2 << " = " << (n1 + n2) << endl;  
        // Prints the addition of n1 and n2 in the format: n1 + n2 = result
        break;  // Exits the switch statement after executing this block

    // Case for subtraction ('-')
    case '-':
        // If 'operators' is '-', this block is executed
        cout << n1 << operators << n2 << " = " << (n1 - n2) << endl;  
        // Prints the subtraction of n1 and n2 in the format: n1 - n2 = result
        break;  // Exits the switch statement

    // Case for multiplication ('*')
    case '*':
        // If 'operators' is '*', this block is executed
        cout << n1 << operators << n2 << " = " << (n1 * n2) << endl;  
        // Prints the multiplication of n1 and n2 in the format: n1 * n2 = result
        break;  // Exits the switch statement

    // Case for division ('/')
    case '/':
        // If 'operators' is '/', this block is executed
        cout << n1 << operators << n2 << " = " << (float(n1) / n2) << endl;  
        // Prints the division of n1 by n2 in the format: n1 / n2 = result
        // Cast to 'float' ensures the result is displayed as a floating-point number if necessary
        break;  // Exits the switch statement
}

    return 0;
}