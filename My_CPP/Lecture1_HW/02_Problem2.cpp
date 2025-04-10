/*
Question2: Enter cost of 3 items from the user (using float datatype) - a pencil, a pen and an eraser.
You have to output the total cost of the items back to the user as their bill.
(Add on: You can also try adding 18% GST tax to the items in the bill as an advanced problem)
*/

#include<iostream>
using namespace std;

int main (){
    int item_1,item_2,item_3;

    cout << "Enter cost of 1st item : " ;
    cin>>item_1;

    cout << "Enter cost of 2nd item : " ;
    cin>>item_2;

    cout << "Enter cost of 3rd item : " ;
    cin>>item_3;

    int total = (item_1 + item_2 + item_3);
    float GST = (18.0/100.0)*total;

    float finalPrice = total + GST;


    cout << "Total Bill Amount : ₹" << total << endl;
    cout << "GST (18%) Applied : ₹" << GST << endl;
    cout << "Final Price (After Tax) : ₹" << finalPrice << endl;


    
    return 0;
}