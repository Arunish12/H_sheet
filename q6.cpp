// Write a program to take user input of two integer numbers and print the greatest among both. 
#include<iostream>
using namespace std;

int main() {
     int a, b;
     cout<<"Enter the value of a : ";
     cin >> a;
     cout<<"Enter the value of b : "; 
     cin >> b;
     
    // 1. using if-else
    //  if(a > b){
    //     cout << "a  : "<<a <<endl;
    //  }
    //  else{
    //     cout <<"b : "<<b <<endl;
    //  }

    //  2. using ternary operator
    (a > b) ? cout << "a : "<<a <<endl
            : cout << "b : "<<b <<endl;
    return 0;
}