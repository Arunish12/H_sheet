/*Leap year rule : 
The year must be divisible by 4. 
If the leap year can also be evenly divided by 100 it is not a leap year unless….
The year is also evenly divisible by 400. 
According to the rule, the following years are leap years: 2400, 2000 while 1800, 1900, 2100, and 2200 are not leap years. 

Write a program to take input of a random year and check whether the year is a leap or not
*/
#include<iostream>
using namespace std;

int main() {
    int year;
    cout<<"Enter year :";
    cin >> year;

   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Leap year" << endl;
    }
    else{
        cout<<"Not a leap year";
    }
    return 0;
}