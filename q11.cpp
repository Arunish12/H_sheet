// Write a program to take input from three sides of a triangle and check whether it is a valid triangle or not.
#include<iostream>
using namespace std;

int main() {
     int a,b,c;
     cout <<"Enter the first side : ";
     cin >> a;
     cout <<"Enter the second side : ";
     cin >> b;
     cout <<"Enter the third side : ";
     cin >> c;

    //  condition for valid triangle a+b>c, b+c>a, a+c>b;
    if(a>0 && b>0 && c>0 && (a+b>c) && (b+c>a) && (a+c>b)){
        cout<<"VAlid triangle "<<endl;
    }
    else{
        cout<<"Invalid triangle";
    }

    return 0;
}