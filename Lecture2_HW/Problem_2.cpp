// Print factorial of number n.

#include<iostream>
using namespace std;

int main(){
    int n; // Here, we defined an int variable as n.
    cout<<"Enter a number : "; // INPUT.
    cin>>n; // STORE INPUT.
    int factorial = 1; // Here, we defined variable factorial with default value as 1.
    for (int i = 1 ; i <= n ; i++){ // Here, we initialize the value (i) as (1) then we give condition (i <= n) then we update the value of i.
        factorial = factorial * i; // Here, we multiply the value of i with the factorial and stored in variable factorial.
    }
    cout<<"Factorial = "<<factorial<<endl; // After the completion of loop we print the value of factorial
}
