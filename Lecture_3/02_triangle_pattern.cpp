// Triangle Patterns : A triangle pattern in C++ refers to a way of arranging characters, numbers, or symbols in a triangular shape, often using nested loops.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i = 0 ; i < n ; i++){ // Here, we increase the value of i by 1.
        for (int j = 0 ; j < i + 1 ; j++){ // Here, we check whether j is less than i+1 if true it will print that number of stars.
            cout<<"*"<<" "; // Here, we print the (*) with a space in between.
        }
        cout<<endl; // Here, we print a new line after the end of inner loop.
    }

// We have to print the number in triangular pattern (no should be same respective to the line number)

// Eg :

// 1
// 2 2
// 3 3 3

    int x;
    cout<<"Enter a number : ";
    cin>>x;
   

    for (int a = 0 ; a < x ; a++){
        
        for (int c = 0 ; c < a+1 ; c++){ // Here, we check that c is lesser than value of a + 1 
            cout << a+1 << " "; // Here, it print the number which is a+1. (For, first line a = 0 so a+1 = 1, 2nd line a= 1 so a+1 = 2)
        }
        cout<<endl; // Here, it print the new line.
    }

// Note : we track the value of number by the lines because we have to print the number same to that of number line.

// We have to print the alphabet in triangular pattern (alphabet should be same respective to the line number).

    int num;
    cout<<"Enter a number : ";
    cin>>num;
    char character = 'A';

    for (int k = 0 ; k < num ; k++){
        for (int p = 0 ; p < k+1 ; p++){ 
            cout<< character <<" "; // Here, we print the character.
        }
        cout<<endl; // After end of the inner loop it will give a new line.
        character++; // Here, we increment the value of character after the end of each line. 
    }

// We have to print the number in triangular pattern (no. should be increase with increase in length).

    int num_2;
    cout<<"Enter a number : ";
    cin>>num_2;

    for (int m = 0 ; m < num_2 ; m++){
        for (int l = 0 ; l < m+1 ; l++){
            cout<<(l+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
