// Operators : Operators are the symbols that perform operations on variables and values.

// // Arithematic Operators : These are the operators used to perform mathematical operations.

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 9,b = 6; // Here, we are declaring two variables a and b with data type int and assigning them the values 9 and 6.
    
//     cout<<"The sum of a and b is : "<<(a+b)<<endl;
//     cout<<"The difference of a and b is : "<<(a-b)<<endl;
//     cout<<"The product of a and b is : "<<(a*b)<<endl;
//     cout<<"The division of a and b is : "<<(a/b)<<endl;
//     cout<<"The modulus of a and b is : "<<(a%b)<<endl;

//     cout<<"The result of 5/2 is an integer : "<<(5/2)<<endl; // Here, the result is 2 because the result is an integer.
//     cout<<"The reult of 5.0/2 is an float or double : "<<(5.0/2)<<endl; // Here, the result is 2.5 because the result is a floating or double number.

//     int answer = (5.0/2);
//     cout<<"The answer would be an integer : "<<answer<<endl;

// // Relational Operators : These are the operators used to compare two values.

//     cout<<"Is 3 greater than 5 ? "<<(3>5)<<endl; // Here, it will return false which is 0.
//     cout<<"Is 3 less than 5 ? "<<(3<5)<<endl; // Here, it will return true which is 1.
//     cout<<"Is 3 is less than or equal to 3 ? "<<(3<=3)<<endl; // Here, it will return true because 3 it is equal to 3.
//     cout<<"Is 3 is greater than or equal to 5 ? "<<(3>=5)<<endl; // Here, it will return false because 3 is not greater than 5.
//     cout<<"Is 3 is equal to 3 ? "<<(3==3)<<endl; // Here, it will return true because 3 is equal to 3.
//     cout<<"Is 3 is not equal to 5 ? "<<(3!=5)<<endl; // Here, it will return true because 3 is not equal to 5.

// // Logical Operator : A logical operator is a symbol or word used to connect two or more expressions in programming, returning a Boolean value (true or false).
    
//     // NOT OPERATOR : Not operator converts true value into false and false value into true.

//     cout<<!(3>1)<<endl; // Here, it will convert true value into false because we used not operator.
//     cout<<!(3>5)<<endl; // Here, it will convert false value into true because we used not operator.

//     // OR OPERATOR : Or operator return true value even if one value is true and other is false or both are true.
//     // Note ; If both the values are false it will return the value false.

//     cout<<((3>1) || (3>5))<<endl; // Here, it will return true beacuse there are 2 relations in which one is true and other is false.
//     cout<<((3>1) || (3>2))<<endl; // Here, it will return true beacuse both the relations are true.
//     cout<<((3>4) || (3>5))<<endl; // Here, it will return false because both the relations are false.
