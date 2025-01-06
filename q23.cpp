/*Write a program in C++ to display the multiplication table of a given integer. Go to the editor Test Data :

Input the number (Table to be calculated) :
15 
Expected Output : 
15 X 1 = 15 
... 
... 
15 X 10 = 150
*/
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
      cout << n << " x " << i << " = "<<(n*i) <<endl;
     }
     
    return 0;
}
