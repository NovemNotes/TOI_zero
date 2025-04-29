#include <iostream>
#include <string>
using namespace std;

int main() {
    char winningPrefix, buyPrefix;
    string winningNumber, buyNumber;
    int prize = 0;
    
    cin >> winningPrefix >> winningNumber;
    cin >> buyPrefix >> buyNumber;
    
    if (winningPrefix == buyPrefix && winningNumber == buyNumber) {
        prize = 1000000;
    } else if (winningNumber == buyNumber) {
        prize = 100000;
    } else if (winningPrefix == buyPrefix && winningNumber.substr(winningNumber.length() - 3) == buyNumber.substr(buyNumber.length() - 3)) {
        prize = 2000;
    } else if (winningPrefix != buyPrefix && winningNumber.substr(winningNumber.length() - 3) == buyNumber.substr(buyNumber.length() - 3)) {
        prize = 200;
    } else if (winningPrefix == buyPrefix && winningNumber.substr(winningNumber.length() - 2) == buyNumber.substr(buyNumber.length() - 2)) {
        prize = 1000;
    } else if (winningPrefix != buyPrefix && winningNumber.substr(winningNumber.length() - 2) == buyNumber.substr(buyNumber.length() - 2)) {
        prize = 100;
    } else if (winningPrefix == buyPrefix) {
        prize = 20;
    } else {
        prize = 0;
    }
    
    cout << prize;
    
    return 0;
}