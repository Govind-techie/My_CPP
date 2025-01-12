// Break Statement : The break statement is used to exit a loop prematurely when a specific condition is met.

#include<iostream>
using namespace std;

int main(){
    int number;
    int sum_2 = 0;
    cout<<"Enter a number : ";
    cin>>number;
    for(int i = 1 ; i <= number; i++ ){
        sum_2 += i;
        if(i == 5){ // Here, we give a condition to the if statement within the for loop.
            break; // If the condition is true it will break the loop and exit from it.
        }
    }
    cout<<"sum = "<<sum_2<<endl; // Here, output whould not be more than 15 because if i is more than 5 it will break the loop
    return 0;
}

