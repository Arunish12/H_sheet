// Write a program to print the average (in decimals) of the sum of the first 100 natural numbers.
#include<iostream>
using namespace std;

int main() {
    double n;
    cout<<"Enter the value of n : ";
    cin>>n;
     double sum = n*(n+1)/2;
     cout << sum <<endl;
     double avg = sum/n;
     cout << avg;
    return 0;
}