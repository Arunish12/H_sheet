// Write a program to print the first 100 odd numbers.
#include<iostream>
using namespace std;

int main() {
     int count = 0;
     int i = 1;
     while (count < 100){
        cout << i <<" ";
        i = i+2;
        count++;
     }
    return 0;
}