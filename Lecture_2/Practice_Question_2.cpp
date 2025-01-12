// Sum the number from 1 to n.

#include<iostream>
using namespace std;

int main(){ 
// Using While Loop :

    int n; // Here, we initialize int variable as n.
    cout<<"Enter a number : "; // Take the input as number from the user.
    cin>>n; // Store the input in the variable n.
    int i = 1; // Here, we initialize the value i as 1.
    int sum = 0; // Here, we initialize int variable sum.
    while (i <= n){ // Here, we give the condition to the while loop
        sum += + i; // Here, we increase the value of sum by adding i to it.
        i++; // Here, we increase the value of i by 1.
    }

    cout<<"sum = "<<sum<<endl; // Here, we print the final value of the sum we get after end of loop.
    
// Using For Loop :

    int number;
    int sum_2 = 0;
    cout<<"Enter a number : ";
    cin>>number;
    for(int j = 1 ; j <= number; j++ ){
        sum_2 += j;

    }
    cout<<"sum = "<<sum_2<<endl;
    
    return 0;
}
