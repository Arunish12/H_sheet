/*Write a program to take user input of an int variable and print the next 50 numbers. 
Using while loop
Using for loop
*/
#include<iostream>
using namespace std;

int main() {
     int n;
     cout << " Enter the value of n : ";
     cin >> n;
     cout << "Next 50 numbers are : ";
    //  1. using while loop
     int i = 1;
     while (i <= 50){
        cout << n + i << " ";
        i++;       
     }

    //  2. using for loop
    for(int i = 1; i<=50; i++){
        cout << n+i << " ";

    }
    return 0;
}