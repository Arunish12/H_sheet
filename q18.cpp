// Write a program to print the first 100 multiples of 10. 
#include<iostream>
using namespace std;

int main() {
     int count = 0;
     int i = 10;
     while(count < 100){
        cout << i << " ";
        i = i+10;
        count++;
     }

    return 0;
}