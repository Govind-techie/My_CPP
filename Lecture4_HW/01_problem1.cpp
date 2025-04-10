// Problem : CHeck whether the number is a prime or not.

#include<iostream>
using namespace std;

void primeOrNot(int n){ // Here, we created a function with void type.

    bool isPrime = true; // Here, we initialized a bool varaible (isPrime) with a default value as true.

    for (int i = 2 ; i < n ; i++){ // Here, we run a loop in which we increase the value of i.

        if(n%i == 0){ // Here, we check whether the number is completely divisible by any number excluding (1 and no. itself).
            isPrime = false; // If it is divisible the value is false.
        }else{
            isPrime = true; // If it is not divisible by any number the value is true
        }
    }

    if (isPrime == true){ // Here, if the value of isPrime is true.
        cout<<"Its a prime number"<<endl; // no. is prime
    }else{ // if value of isPrime is false.
        cout<<"Its not a prime number"<<endl; // not prime
    }

    
}

int main(){

    // Input of number
    int n; 
    cout<<"Enter a number : ";
    cin>>n;

    primeOrNot(n); // Here we call the function with no return value as it is a void type function.

    return 0;
}