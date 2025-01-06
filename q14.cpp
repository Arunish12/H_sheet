// Write a program to print the first 100 natural numbers. 
#include<iostream>
using namespace std;

int main() {
    int count = 0;
    int n = 1;
    while(count < 100){
        cout << n<<" ";
        n++;
        count++;
    }

    return 0;
}