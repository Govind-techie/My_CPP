/*
Question 3: Build a Simple Interest Calculator

Input: Principal (P), Rate (R), Time (T)
Output : (P*R*T)/100
*/

#include<iostream>
using namespace std;

int main (){
    float P,R,T;
    
    cout << "Principal amount : ";
    cin>>P;

    cout << "Rate of interest : ";
    cin>>R;

    cout <<"Time Period : ";
    cin>>T;

    float SI = (P*R*T)/100;
    
    cout << "SIMPLE INTEREST = " << SI << endl;

    return 0;
}