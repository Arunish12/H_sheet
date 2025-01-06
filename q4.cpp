// Write a program to take user input of a digit, an uppercase alphabet in a character variable, and a lowercase alphabet and print their ASCII code respectively
#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value of the character is: " << (int) ch  <<endl;

    return 0;
}
