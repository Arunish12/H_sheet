// Write a program to print all the palindrome numbers from 1 to 10000
#include<iostream>
using namespace std;

bool ispalindrome(int num){
     int temp = num;
     int rev = 0;
     while (num > 0) {
        int rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
     }
     return temp == rev;
}

int main() {
     
     cout << "Palindrome number between 1-10000 : ";
     for(int i =1; i<=10000; i++){
        if(ispalindrome(i)){
            cout << i << " ";
        }
     }

    return 0;
}