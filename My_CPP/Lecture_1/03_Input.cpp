#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : "; // Here, we are taking input from the user.
    cin >> age; // Here, we are storing the input in the variable age_2.
    cout<<"Your age is : "<<age<<endl; // Here, we are printing the value of age_2.

    // Problem : Sum of a & b.

    int a,b;
    cout << "Enter 1st no. : ";
    cin>>a;
    cout << "Enter 2nd no. : ";
    cin>>b;

    int sum = a + b;
    cout << "Sum of value " << a << " & " << b << " is : " << sum << endl;

    // Problem : Print average marks.

    int phy;
    int chem;
    int maths;

    cout << "Enter your Physics marks : ";
    cin>>phy;
    
    cout << "Enter your Chemistry marks : ";
    cin>>chem;

    cout << "Enter your maths marks : ";
    cin>>maths;

    float avg = (phy + chem + maths)/3.0;
    // As average value can be a decimal value therefore, the avg variable is initialized with float datatype which is divided
    // by 3.0 (floating value) which returns average value as a floating value.
    
    cout << "Your average marks is : " << avg << endl;

    return 0;
}
