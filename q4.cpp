// Write a program to take user input of a digit, an uppercase alphabet, and a lowercase alphabet and print their ASCII code respectively. 
#include<iostream>
using namespace std;

int main() {

     char digit,uppercase, lowercase;
     cout << "Enter the value of digit : ";
     cin >> digit;
     cout <<"Enter the uppercase char : ";
     cin >> uppercase;
     cout <<"Enter the lowercase char : ";
     cin >> lowercase;
     cout << "ASCII value of digit is "<<static_cast<int>(digit)<<endl;
     cout << "ASCII value of uppercase char is "<<static_cast<int>(uppercase)<<endl;
     cout << "ASCII value of lowercase char is "<<static_cast<int>(lowercase)<<endl;

    return 0;
}