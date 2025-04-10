#include<iostream>
using namespace std;

// Check whether the character is an uppercase or lowercase.

int main(){
    char character;
    cout<<"Enter a Character : ";
    cin>>character;

    if(character>='a' && character<='z'){
        cout<<"It is a Lowercase character\n";
    }else if(character>='A' && character<='Z'){
        cout<<"It is an Uppercase character\n";
    }else{
        cout<<"Please enter a valid character\n";
    }

    return 0;
}