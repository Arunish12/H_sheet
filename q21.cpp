// Write a program to print the first hundred positive prime numbers
#include<iostream>
using namespace std;

bool isprime(int num){
    if(num <=1){
        return false;
    
    }
    for(int i =2; i*i<=num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
   
   int count = 0;
   int num = 2;

   while (count < 100) 
   {
     if(isprime(num)){
        cout << num << " ";
        count++;
     }
     num++;
   }
   
    return 0;
}