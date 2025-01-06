// Write a program to take input of cost price and sell price and print the following
// Print “Profit” and “loss” accordingly. 
// Print profit percentage and loss percentage accordingly. 
#include<iostream>
using namespace std;

int main() {
     double costprice,sellingprice;
     cout<<"Enter cost price : ";
     cin >> costprice;
     cout<<"Enter sell price : ";
     cin >> sellingprice; 

     if(sellingprice > costprice) {
        double profit = sellingprice - costprice;
        double profitpercentage = (profit/costprice) * 100;
        cout << "profit  : "<<profit <<endl;
        cout << "profitpercentage : "<<profitpercentage<<"%"<<endl;     
     }
     else if(costprice > sellingprice){
        double loss = costprice - sellingprice;
        double losspercentage = (loss/costprice) * 100;
        cout << "Loss : " << loss <<endl;
        cout << "Losspercentage : " << losspercentage <<"%"<<endl;

     }
     else{
        cout<<"NO profit or loss";
     }
    return 0;
}