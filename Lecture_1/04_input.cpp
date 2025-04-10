#include<iostream>
using namespace std;

int main(){
    int age_1,age_2;
    cout<<age_1<<endl; // It would print a garbage value.
    cout<<"Enter your age : "; // Here, we are taking input from the user.
    cin >> age_2; // Here, we are storing the input in the variable age_2.
    cout<<"Your age is : "<<age_2<<endl; // Here, we are printing the value of age_2.
    return 0;
}
