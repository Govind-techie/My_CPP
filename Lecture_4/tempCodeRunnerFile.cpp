#include<iostream>
using namespace std;

// Problem : Find the total combination with number given as nCr.

// Formula (nCr) : n!/r!*(n-r)!

int factorial(int a){ // Here, we return the value of individual of number 
    int factorial = 1;

    for(int i = 1 ; i <= a; i++){
        factorial *= i;
    }

    return factorial;
}


int combinations(int n,int r){ // Here, we return the combinations

    int combinations = factorial(n)/(factorial(r)*factorial(n-r)); // Here, it calculate the combinations using factorial function for different values.

    return combinations;

}

int main(){
    int n , r ;

    cout << "Enter the value of n : ";
    cin>>n;
    cout << "Enter the value of r : ";
    cin>>r;

    cout<<"Total combinations = "<<combinations(n,r)<<endl;

    return 0;
}