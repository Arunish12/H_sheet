/*Write a program to take input of an integer and check whether the integer is an Armstrong number or not.

Sample input
153
Sample output
Yes


Explanation
13 + 53 + 33 = 1 + 125 + 27 = 153
*/
#include <bits/stdc++.h>
using namespace std; 
int main(){
    int num; 
    cin >> num; 
    int sumOfCubeOfDigits = 0; 
    int origNum = num; 

    // extracting the digits
    int temp = num; 
    int size = 0; 

    while (temp) {
        size++; 
        temp /= 10; 
    }

    while (num) {
        int digit = num % 10; 
        int power = 1; 

        for (int i = 0; i < size; i++) {
            power *= digit; 
        }

        sumOfCubeOfDigits += power; 
        num /= 10; 
    }

    if (origNum == sumOfCubeOfDigits) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }
}

