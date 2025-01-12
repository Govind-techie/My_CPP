// Print sum of n numbers from 1 to n which are divisible by 3.

#include<iostream>
using namespace std;

int main(){
    int n; // Here, we defined an int variable as n.
    int sum = 0; // Here, we defined sum as 0.
    cout<<"Enter a number : "; // Here, we take the input.
    cin>>n; // Here, we store the input in variable n.
    for (int i = 1 ; i <= n ; i++){ // Here, we initialize i as 1 and condition (i <= n) and then update the value of i for each iterations.
        if(i%3 == 0) // Here, it checks whether the no. is divisible by 3 or not
        sum += i; // If true then, it sum the number which are divisible by 3.
    }
    cout<< "Sum = " << sum <<endl; // Here, we print the sum of the no. only divisible by 3.
    return 0;
}