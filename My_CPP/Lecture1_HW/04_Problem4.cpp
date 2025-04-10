/*
Question 4: Write a Program to Calculate the Area of a Circle

Input: r (radius)
Output: pi * r * r (area)

*/

#include<iostream>
#define pi 3.14
using namespace std;

int main() {
    float r;
    cout << "Enter radius of circle : ";
    cin>>r;

    float area = pi * r * r;

    cout << "Area of circle = " << area << endl;
    return 0;
}