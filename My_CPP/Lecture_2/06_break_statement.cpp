// Break Statement : The break statement is used to exit a loop prematurely when a specific condition is met.

#include<iostream>
using namespace std;

int main(){
    int number;
    int sum_2 = 0;
    cout<<"Enter a number : ";
    cin>>number;
    for(int i = 1 ; i <= number; i++ ){
        sum_2 += i;
        if(i == 5){ // Here, we give a condition to the if statement within the for loop.
            break; // If the condition is true it will break the loop and exit from it.
        }
    }
    cout<<"sum = "<<sum_2<<endl; // Here, output whould not be more than 15 because if i is more than 5 it will break the loop

    /*
    Problem: Write a program where the user can enter numbers until they enter a multiple of 10.
    */
    int n;
    while (true) { // Infinite loop to continuously accept user input.
        cout << "Enter number : ";
        cin >> n;

        if (n % 10 == 0) { // Check if the entered number is a multiple of 10.
            break; // Exit the loop if the condition is met.
        }

        cout << "Entered number : " << n << endl;
    }
    return 0;
}

