#include<iostream>
using namespace std;

// Problem : Sum the digits of a number entered by user.

int sumDigits(int n){

    int digitSum = 0;

    while (n > 0){
        int lastDigit = n%10;
        n /= 10;

        digitSum += lastDigit;
    }

    return digitSum;

}

int main(){

    int n;

    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Sum of Digits = "<<sumDigits(n)<<endl;

    return 0;
}