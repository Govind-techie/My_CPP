#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter a number : "; // Taking number as input 
    cin>>n; // Storing the input in variable n (Note : we can't store string or any kind of character in this variable beacuse we its datatype is int. )
    if (n>=0){ // We give a condition to the if statement.
        cout<<"Number is positive\n"; // If the condition is true it will run if block of code.
    } else { // If the condition of if statement is false execute the else statement.
        cout<<"Number is negative\n"; // It will run else block of code only when the given condition is false.
    }

// Real Case :
// A voter checking system : It checks whether the voter age is more than 18 or not.

    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if (age >= 18){
        cout<<"You are eligible to vote\n";
    } else {
        cout<<"Sorry, you are below the voting age and not eligible to vote\n";
    }

    // Check whether the number is ODD or EVEN :

    long long number; // Here, we mention that even if the number is very long its individual digit should be store correctly.
    cout<<"Enter a number : ";
    cin>>number;
    if (number%2==0){
        cout<<"Number is even\n";
    }else{
        cout<<"Number is odd\n";
    }
    
        // Note : An if statement does not always require an accompanying else statement. Instead, multiple if statements can be used independently, each with its own condition.
    
        // Eg : Two if statement case.
    
        int age2;
        cout << "Enter your age : ";
        cin >> age2;
    
        if (age2 >= 18){
            cout << "Can vote" << endl;
        }if (age2 >= 45){
            cout << "Can stand as contestant in elections" << endl;
        }

        // Output : If the age is greater than 45 it met both if conditions so both block of code will be executed.


        // Problem : Print the largest among 2 integer value.

        int num1, num2;
        cout << "Enter 1st value : ";
        cin >> num1;

        cout << "Enter 2nd value : ";
        cin >> num2;

        if (num1 > num2){ // Checks whether 1st value is greater than 2nd if true execute if block code.
            cout << "Largest value : " << num1 << endl;
        }else{ // If 1st value is not greater than 2nd than its obvious that 2nd value is greater than 1st value.
            cout << "Largest value : " << num2 << endl;
        }
    return 0; 
}

// NOTE : Else statement does not need any condition unlike if statement.
// NOTE : We can't start a conditional statement with else.