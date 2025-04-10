#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter your 1st number : ";
    cin>>a;
    cout<<"Enter your 2nd number : ";
    cin>>b;

    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    float division = (float)a/b;
    int remainder = a%b;

    cout<<"Sum of a and b is : "<<sum<<endl;
    cout<<"Difference of a and b is : "<<difference<<endl;
    cout<<"Product of a and b is : "<<product<<endl;
    cout<<"Division of of a and b is : "<<division<<endl;
    cout<<"Remainder of of a and b is : "<<remainder<<endl;

    return 0;

}