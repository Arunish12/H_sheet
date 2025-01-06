// Write a program to take user input of two characters and swap their values
#include<iostream>
using namespace std;

int main() {
    char a, b;
    cout << "Enter first character: ";
    cin  >> a;
    cout << "Enter second character: ";
    cin  >> b;
    
    char temp = a;
    a = b;
    b = temp;
    cout << "First character after swapping: " << a << endl;
    cout << "Second character after swapping: " << b << endl;
    return 0;
}