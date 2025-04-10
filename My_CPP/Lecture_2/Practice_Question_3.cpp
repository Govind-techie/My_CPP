#include<iostream>
using namespace std;

// Print the sum of only odd numbers.

int main(){
    int number;
    int odd_sum = 0;
    cout<<"Enter a number : ";
    cin>>number;
    for(int i = 1 ; i <= number; i ++){ 
        if (i%2 != 0){
            odd_sum += i;
        }
    }
    cout<<"odd sum = "<<odd_sum<<endl; 

// Using While Loop :
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int oddSum = 0;
    int i = 1;
    
    while(i<=num){
        if (i%2 != 0){
            oddSum += i;   
        }
        i++;
    }
    cout<< "Odd Sum = " << oddSum <<endl;

    return 0;
}
