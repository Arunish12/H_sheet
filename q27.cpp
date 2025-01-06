// Write a program to take input of an int variable and calculate the product of the first and last digits of a number.
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     
     n = abs(n);
     int last_digit = n%10;
     cout << "last_digit : " <<last_digit <<endl;;
     while(n >=10){
        n = n/10;

     }
     int first_digit = n;
     cout << "first_digit : "<<first_digit <<endl;
     int product = last_digit * first_digit;
     cout <<"Product of first and last digit : "<<product ;

    return 0;
}