/*
Question1:In a program, input the side of a square. You have to output the area of the square.
Input:n(side)
Output:n*n(area)
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter length of one side of square : ";
    cin >> n;

    cout << "Area of square is : " << n*n << endl;

    return 0;
}