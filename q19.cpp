// Write a program to print all the non-negative factors of 968. 
#include<iostream>
using namespace std;

int main() {
    int num = 968;
    for(int i = 1; i<=num; i++){
       if(num % i == 0){
        cout << i <<" ";
       }
    }
    return 0;
}