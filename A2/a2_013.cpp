#include <iostream>
#include <string>
using namespace std;

int main() {
    char bubbleType, teaType;
    int bubbleAmount, sweetnessLevel, teaAmount;
    int totalCalories = 0;
    
    cin >> bubbleType >> bubbleAmount;
    
    cin >> teaType >> sweetnessLevel >> teaAmount;
    
    if (bubbleType == 'H') {
        totalCalories += bubbleAmount * 5;  
    } else if (bubbleType == 'O') {
        totalCalories += bubbleAmount * 3;  
    } else if (bubbleType == 'J') {
        totalCalories += bubbleAmount * 2;  
    }
    
    if (teaType == 'R') {  
        if (sweetnessLevel == 1) {
            totalCalories += teaAmount * 12;
        } else if (sweetnessLevel == 2) {
            totalCalories += teaAmount * 18;
        } else if (sweetnessLevel == 3) {
            totalCalories += teaAmount * 25;
        }
    } else if (teaType == 'T') { 
        if (sweetnessLevel == 1) {
            totalCalories += teaAmount * 15;
        } else if (sweetnessLevel == 2) {
            totalCalories += teaAmount * 20;
        } else if (sweetnessLevel == 3) {
            totalCalories += teaAmount * 30;
        }
    } else if (teaType == 'M') {  
        if (sweetnessLevel == 1) {
            totalCalories += teaAmount * 10;
        } else if (sweetnessLevel == 2) {
            totalCalories += teaAmount * 15;
        } else if (sweetnessLevel == 3) {
            totalCalories += teaAmount * 20;
        }
    }
    
    cout << totalCalories << endl;
    
    return 0;
}