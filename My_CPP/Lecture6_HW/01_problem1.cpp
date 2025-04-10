// Problem : Figure out how to find if a number is power of 2 with and without loop.

#include<iostream>
using namespace std;

int main(){
    int n1;
    cout<<"Enter a number : ";
    cin>>n1;

    int remainder;

    for (int i = 0 ; i < n1 ; i++){
            remainder = n1%2;
            if(remainder == 0){
                n1 /= 2;
            }
        }

    if (remainder == 0){
        cout<<"The no. is in power of 2"<<endl;
    }else{
        cout<<"The no. is not in power of 2"<<endl;
    }

    // By using bitwise operator : 

    // 1 = 0001
    // 2 = 0010
    // 4 = 0100
    // 8 = 1000

    // Here, we can use right shift bitwise operator by 1 and it will eventually reduce to 1 if not it is not in power of 2 and if it reduced to 1 it is in the power of 2.
    
    int n2;
    cout << "Enter a number: ";
    cin >> n2;

    // If the number is less than or equal to 0, it cannot be a power of 2
    if (n2 <= 0) {
        cout << "The number is not in the power of 2" << endl;
        return 0;
    }

    // Check if the number is odd (other than 1), it can't be a power of 2
    if (n2 % 2 != 0 && n2 != 1) {
        cout << "The number is not in the power of 2" << endl;
        return 0;
    }

    // Right shift until we get to 1
    for (; n2 > 1;) {
        n2 = n2 >> 1; // Right shift the number
    }

    // If n2 becomes 1, it's a power of 2
    if (n2 == 1) {
        cout << "The number is in the power of 2" << endl;
    } else {
        cout << "The number is not in the power of 2" << endl;
    }
    
    return 0;
}

