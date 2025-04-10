// Else_If : Else if statement is used when we have multiple conditions to check.

// We want to categorize the children's grade as (A,B,C) respective to there marks by using else if statement.


#include<iostream>
using namespace std;

int main(){
    int Marks;
    cout<<"Enter your Marks : "; // Taking the marks as input from the user.
    cin>>Marks; // Here, we store the marks (input) in the variable Marks.
    
    if (Marks >= 90){ // Here, we check whether the marks is greater than or equal to 90.
        cout<<"Your grade is 'A'\n"; // If it's true than it will run this block of code
    }else if (Marks>= 80 && Marks<90){ // Checking whether the student marks is greater than or equal to 80 and less than 90 as we used (&&) logical operator if both conditions are true then only it returns true otherwise false.
       cout<<"Your grade is 'B'\n"; // If the condition is true it will run this block of code.
    }else{ // If both the given conditions are false it will execute the else.
        cout<<"Your grade is 'C'\n"; // It will run this block of code.
    }

    /*
    Problem : Income tax calculator.

    Conditions :
    1. income < 5lakhs = 0% tax
    2. income between 5 to 10lakhs = 20% tax
    3. income > 10lakhs = 30% tax

    */

    

    int income;
    cout << "Enter your income : ";
    cin >> income;

    if (income < 500000){
        cout << "Total income tax : " << 0 << endl;
    } else if (income > 500000 && income < 1000000){
        cout << "Total income tax : " << ((float)20 / 100) * income << endl; // Explicitly cast 20 to float to ensure floating-point division, preventing integer division from resulting in zero.
    } else {
        cout << "Total income tax : " << ((float)30/100) * income << endl; // Explicitly cast 30 to float to ensure floating-point division, preventing integer division from resulting in zero.
    }

    
    // Problem : Print Largest of 3 numbers.

    int num1,num2,num3;

    cout << "Enter 1st number : ";
    cin >> num1;
    cout << "Enter 2nd number : ";
    cin >> num2;
    cout << "Enter 3rd number : ";
    cin >> num3;

    if (num1 > num2 && num1 > num3){
        cout << "Largest number : " << num1 << endl;
    }else if (num2 > num3){ // {NOTE : No need to check (num2 > num1) because if the if condition is false, num2 is definitely greater.}
        cout << "Largest number : " << num2 << endl;
    }else{
        cout << "Largest number : " << num3 << endl;
    }
    
    return 0;
}

