/*Write a program to take input of an integer and check whether the integer is a palindrome number or not. 

Sample Input 
1456541 
Sample Output 
Yes 

Sample Input 
14441 
Sample Output 
Yes 

Sample Input 
1235023 
Sample Output 
No*/

#include<iostream>
using namespace std;

int main() {
     int num;  
     cout <<"Enter the num : ";
     cin >> num;
     int temp = num;
     int rev = 0;
     while (temp != 0) {
        int rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
     }
     if (num == rev) {
        cout << "Yes";
     }
     else {
        cout << "No";
        }
        
    return 0;
}