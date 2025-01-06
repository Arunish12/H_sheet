/*Write a program to take input of an integer and print out its digits distinctly in new lines.

Sample Input 
452687 

Sample Output 
4
5 
2 
6 
8 
7
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector<int> digits;

    
    cout << "Enter an num value : ";
    cin >> num;

    
    while (num > 0) {
        digits.push_back(num % 10); 
        num /= 10;
    }

    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i] << endl;
    }

    return 0;
}
