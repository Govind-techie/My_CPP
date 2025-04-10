// Floyd's Triangle Pattern : Floyd’s Triangle is a triangular number pattern where numbers are arranged in sequential order, starting from
// 1, with each row containing an increasing number of elements.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int value = 1; // Initialize value as 1

    for (int a = 0; a < num; a++){ // Loop for rows
        for (int b = 0; b < a+1; b++){ // Prints numbers increasing in each row
            cout<<value<<" "; // Print value
            value++; // Increment value (does not reset)
        }
        cout<<endl; // Move to the next line
    }

    // Floyd's triangle pattern with characters

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    char character = 'A'; // Initialize with 'A'

    for (int i = 0; i < n; i++){ // Loop for rows
        for (int j = 0; j < i+1; j++){ // Prints characters in increasing order
            cout<<character<<" "; // Print character
            character++; // Increment character (ASCII order)
        }
        cout<<endl; // Move to the next line
    }
    
    return 0;
}