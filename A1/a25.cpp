#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    
    cin >> input;
    
    string rank;
    char suit;
    
    if (input.length() > 2) {
        rank = input.substr(0, 2); 
        suit = input[2];      
    } else {
        rank = input.substr(0, 1);
        suit = input[1];      
    }
    
    transform(rank.begin(), rank.end(), rank.begin(), ::tolower);
    suit = tolower(suit);
    
    string fullRank;
    if (rank == "a") {
        fullRank = "ace";
    } else if (rank == "j") {
        fullRank = "jack";
    } else if (rank == "q") {
        fullRank = "queen";
    } else if (rank == "k") {
        fullRank = "king";
    } else {
        fullRank = rank;
    }
    
    string fullSuit;
    if (suit == 'd') {
        fullSuit = "diamonds";
    } else if (suit == 'h') {
        fullSuit = "hearts";
    } else if (suit == 's') {
        fullSuit = "spades";
    } else if (suit == 'c') {
        fullSuit = "clubs";
    }
    
    cout << fullRank << " of " << fullSuit;
    
    return 0;
}