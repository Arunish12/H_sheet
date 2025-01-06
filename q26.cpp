// Write a program to take user input of an int variable and count the no of digits in it. 
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<" Enter the value of n : ";
     cin >> n;
     if( n == 0){
        return 0;
     }
     int count = 0;
     n = abs(n);
    while (n > 0 ){
      n = n/10;
      count++;
    }
    cout <<"The number of digits : " << count <<" ";

    return 0;
}