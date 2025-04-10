// Floyd's Triangle Pattern : Floyd’s Triangle is a triangular number pattern where numbers are arranged in sequential order, starting from
// 1, with each row containing an increasing number of elements.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int value = 1; // Here, we initialize a value variable as 1.
    for (int a = 0 ; a < num ; a++){ // Here, it will create n no. of lines.
        for (int b = 0 ; b < a+1 ; b++){ // Here, it will run for a+1 times to print the number.
            cout<<value<<" "; // Here, we print the value.
            value++; // Here, it increment the value by 1 and does not get reset because we initialize its value outside the loop.
        }
        cout<<endl; // Here, we print a new line after completion of the inner loop.
    }

// Print the character in floyd's triangular pattern (character does not get reset)

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    char character = 'A'; // Here, we initialize the value as 'A'.
    for (int i = 0 ; i < n ; i++){ // Here, it will create n no. of new lines.
        for (int j = 0 ; j < i+1 ; j++){ // Here, it will print a triangular pattern.
            cout<<character<<" "; // Here, it will print the character.
            character++; // Here, it will increment the character value which is in the terms of ASCII values.
        }
        cout<<endl; // Here, it will print a new line after completion of the inner loop.
    }
    
    return 0;
}
    
