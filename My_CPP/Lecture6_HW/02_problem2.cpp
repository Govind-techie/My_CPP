// Problem : Write a function in which it returns reverse of number.

#include<iostream>
using namespace std;

int reverseNum(int n){
    int reverseNum = 0;
    int remainder;
    for (; n != 0 ;){
        remainder = n%10;
        n /= 10;
        reverseNum = reverseNum * 10 + remainder;
    }

    return reverseNum;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The reverse of number is : "<<reverseNum(n)<<endl;
    return 0;
}
