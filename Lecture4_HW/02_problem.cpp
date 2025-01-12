// Problem : Print all the prime number from 2 to n.

#include<iostream>
using namespace std;

void primeOrNot(int n){ // Here, we created a function with void type.

bool isPrime = true;
    for (int i = 2 ; i < n ; i++){
        for (int j = 2 ; j < i ; j++){
            if (i%j == 0){
                isPrime = false;
                break;
            }else{
                isPrime = true;
            }
        }
        if(isPrime == true){
            cout<<i<<" ";
        }
    }
    cout<<endl; 
}

int main(){

    // Input of number
    int n; 
    cout<<"Enter a number : ";
    cin>>n;

    primeOrNot(n); // Here we call the function with no return value as it is a void type function.

    return 0;
}