/*Write a program to print all the uppercase alphabets. 
Using while loop
Using for loop
*/
#include<iostream>
using namespace std;

int main() {
    // 1. using while loop
    char ch = 'A';
    while (ch <= 'Z'){
        cout << ch <<" ";
        ch++;
    }    
    
    // 2. using for loop
    for( char ch = 'A'; ch <= 'Z'; ch++){
        cout << ch <<" ";
    }
    return 0;
}