// Inverted Triangular Pattern : Inverted triangular pattern where the elements are numbers and the number of elements per row decreases as we move down.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i = 0 ; i < n ; i++){
        // Print spaces
        for (int j = 0 ; j < i ; j++){
            cout<<" ";
        }
        // Print numbers
        for(int k = 0 ; k < n-i ; k++){
            cout<<i+1;
        }
        cout<<endl;
    }

// Breakdown of this code:

// 1111 , i=0
//  222 , i=1
//   33 , i=2
//    4 , i=3

// Spaces: i spaces in each line (first loop).
// Numbers: (n-i) times in each row (second loop).
// Each line prints (i+1) as the number.

    int num;
    cout<<"Enter a number : ";
    cin>>num;
    char character = 'A';

    for(int a = 0 ; a < num ; a++){
        // Print spaces
        for(int b = 0 ; b < a ; b++){
            cout << " ";
        }
        // Print characters
        for(int c = 0 ; c < num - a ; c++){
            cout<<char(character + a);
        }
        cout<<endl;
    }
    
    return 0;
}