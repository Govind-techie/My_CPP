// Check whether the number is prime or not.

#include<iostream>
using namespace std;

int main(){

    int n; // Here, we initialize the int variable as n.
    cout<<"Enter a number : "; // INPUT
    cin>>n; // Store the input in variable n.
    bool isPrime = true; // Here, we defined a bool variable (isPrime) with initial value as (true).
    for(int i = 2;i <= n-1 ; i++){ // Here, we intitalize variable i as 2 followed by condition that check i is less than or equal to n-1 and then update the i value.
        if (n%i == 0){ // Here, we check the whether the i is divided by n or not
            isPrime = false; // If it divide then the number the value of isPrime is updated as false.
            break; // Here, we break the loop because if a no. is not prime we don't need to check further and break the loop.
    }
}
// After Loop is completed we print whether the no. is a prime or not.

    if(isPrime == true){ // After completion of loop if isPrime is still true the no. is prime.
        cout<<"It is a prime number"<<endl; // It print that no. is a prime.
    }else{ // Else it is a non prime number.
        cout<<"It is a non prime number"<<endl; // It print that the no. is a non prime.
    }

    return 0;
}