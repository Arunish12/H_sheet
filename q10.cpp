// Write a program to take input of marks of three subjects. The full mark of each subject is 100. Print out the overall percentage and check whether the student passed or not. If the overall percentage is greater than 40 then pass and fail otherwise.
#include<iostream>
using namespace std;

int main() {
     double m1,m2,m3;
     cout << "Enter the marks of subject m1 : ";
     cin >> m1;
     cout << "Enter the marks of subject m2 : ";
     cin >> m2;
     cout << "Enter the marks of subject m3 : ";
     cin >> m3;
     
     double totalmarks = m1+m2+m3;
     cout << "total marks : "<<totalmarks <<endl;
     double fullmarksofthreesub = 300; // for all three sub
     double percentagemarks =(totalmarks / fullmarksofthreesub) * 100 ;
     cout << percentagemarks<<"%" <<endl;
     if(percentagemarks > 40) {
        cout <<"Pass"<<endl;
     }
     else{
        cout << "Fail" ;
     }
    return 0;
}