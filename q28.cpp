// Write a program to take user input of an int variable and print its reverse.
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     
     int rev = 0;
     while (n != 0){
        int rem = n%10;
        rev = rev *10 + rem;
        n = n/10;
     }
     cout <<"After Revering : " << rev ;

    return 0;
}