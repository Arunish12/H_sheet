// Write a program to take input of an integer number and check whether it is an even number or an odd number.
#include<iostream>
using namespace std;

int main() {
     int n;
     cout<<"Enter the value of n : ";
     cin >> n;
     if(n%2 == 0){
        cout<<"Even number";
     }
     else{
        cout <<"odd number";
     }
    return 0;
}