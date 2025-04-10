#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // Upper part
    for (int i = 0 ; i < n+1 ; i++){
        for (int j = 0 ; j < i+1 ; j++){
        cout<<"*";
        }
        for (int k = 0 ; k < 2*(n-i) ; k++){
            cout<<" ";
        }
        for (int j = 0 ; j < (i+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower part
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < (n-i) ; j++){
            cout<<"*";
        }
        for (int k = 0 ; k < (i*2)+2 ; k++){
            cout<<" ";
        }
        for (int j = 0 ; j < n-i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// n = 4 

// *        * n=1 , spaces = 8
// **      ** n=2 , spaces = 6
// ***    *** n=3 , spaces = 4
// ****  **** n=4 , spaces = 2
// ********** n=5
// ****  **** n=1 , spaces = 2
// ***    *** n=2 , spaces = 4
// **      ** n=3 , spaces = 6
// *        * n=4 , sapces = 8