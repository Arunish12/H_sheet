// Write a program to take input of an integer and check whether the number is positive, negative, or zero using the ternary operator and if else statement.
#include<iostream>
using namespace std;

int main() {
      int num;
      cout<<"Enter the num value : ";
      cin >> num;
    // using if-else
     if(num > 0 ){
        cout << "number is positive ";
     }
     else if (num < 0 ){
        cout <<"number is negative ";
     }
     else{
        cout <<"number is Zero ";
     }
    //  using ternary operator
    cout << ((num > 0) ? "Number is positive" 
           : (num < 0) ? "Number is negative" 
           : "Number is zero") << endl;
    

    return 0;
}