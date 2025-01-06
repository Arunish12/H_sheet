// Write a program to print all the prime numbers within 1-100. 
#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i =2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
     
     cout << "Prime number between 1-100 : "<<endl;
     for(int i = 1; i<=100; i++){
        if(isprime(i)){
            cout << i <<" ";
        }
     }

   return 0; 
}