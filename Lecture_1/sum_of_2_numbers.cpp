#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter 1st no. : "; // We will not put endl because it will generate a new line.
    cin>>a;
    cout<<"Enter 2nd no. : "; // We will not put endl because it will generate a new line.
    cin>>b;

    int sum = (a+b);

    cout<<"Sum of a and b is : "<<sum<<endl;
    
    return 0;
}