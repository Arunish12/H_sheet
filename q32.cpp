/*Write a program to take input of an integer and check whether the integer is an Armstrong number or not.

Sample input
153
Sample output
Yes


Explanation
13 + 53 + 33 = 1 + 125 + 27 = 153
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, checkNum, remainder, sum = 0;

    
    cout << "Enter an integer: ";
    cin >> num;

    
    checkNum = num;

    
    int digits = 0;
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    while (temp > 0) {
        remainder = temp % 10;          
        sum += pow(remainder, digits);
    
        temp /= 10;                      
    }

    if (sum == checkNum) {
        cout << num << "  Armstrong number." << endl;
    } else {
        cout << num << " not an Armstrong number." << endl;
    }

    return 0;
}
