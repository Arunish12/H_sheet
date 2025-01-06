// Write a program to take user input of an integer, a double, a float, a long int, and a character respectively, and print them in the same order

#include<iostream>
using namespace std;

int main() {
     int a;
     double b;
     float f;
     long long int l;
     char ch;
     
     cout << "enter the value of a : ";
     cin >> a;
     cout << "enter the value of b : ";
     cin >> b; 
     cout << "enter the value of f : ";
     cin >> f;
     cout << "enter the value of l : ";
     cin >> l;
     cout << "enter the value of ch : ";
     cin >> ch;
     cout << a <<" "<<b<<" "<<f <<" "<<l <<" " <<ch <<" ";

    return 0;
}