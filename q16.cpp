// Write a program to print the first 100 even numbers. 
#include<iostream>
using namespace std;

int main() {
     int count = 0;
     int i = 2;
     while(count < 100){
        cout <<  i << " ";
        i = i+2;
        count++;
     }
    
    return 0;
}