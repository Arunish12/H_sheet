/*Write a program to take input from five subjects. The full mark of each subject is 100. Calculate the overall percentage and print the following statement accordingly : 
If the percentage is 90 or above, print "excellent". 
If the percentage is between 80 & 89, print "Best".
If the percentage is between 70 & 79, print "Better".
If the percentage is between 60 & 69, Print "Very Good". 
If the percentage is between 50 & 59, Print "Good". 
If the percentage is between 40 & 49, Print "Work Hard". 
Else, Print "Fail".
*/
#include<iostream>
using namespace std;

int main() {
     double m1,m2,m3,m4,m5;
     cout<<"Enter the marks of first subject : ";
     cin>>m1;
     cout<<"Enter the marks of second subject : ";
     cin>>m2;
     cout<<"Enter the marks of third subject : ";
     cin>>m3;
     cout<<"Enter the marks of fourth subject : ";
     cin>>m4;
     cout<<"Enter the marks of fifth subject : ";
     cin>>m5;

     double totalmarksobtained = m1+m2+m3+m4+m5;
     cout << "totalmarksobtained : " <<totalmarksobtained <<endl;
     
     int fullmarks = 500; // for all sub
     double percentagemarks = (totalmarksobtained / fullmarks) * 100;
     cout << "percentagemarks : " << percentagemarks <<"%" << endl;

     if(percentagemarks >= 90) {
        cout<<"Excellent";
     }
     else if(percentagemarks>=80 && percentagemarks<=89){
        cout<<"Best";
     }
     else if(percentagemarks>=70 && percentagemarks <=79){
        cout<<"Better";
     }
     else if(percentagemarks >= 60 && percentagemarks <=69){
        cout <<"very good";
     }
     else if(percentagemarks >= 50 && percentagemarks <=59){
        cout <<"good";
     }
     else if(percentagemarks >= 40 && percentagemarks <=49){
        cout <<"work Hard";
     }

    return 0;
}