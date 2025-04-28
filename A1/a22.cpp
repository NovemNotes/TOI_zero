#include <iostream>
using namespace std;

int main() {
    int day, month;
    
    cin >> day;
    cin >> month;
    
    if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        cout << "capricorn";
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        cout << "aquarius";
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
        cout << "pisces";
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        cout << "aries";
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        cout << "taurus";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 21))
        cout << "gemini";
    else if ((month == 6 && day >= 22) || (month == 7 && day <= 22))
        cout << "cancer";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        cout << "leo";
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        cout << "virgo";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 23))
        cout << "libra";
    else if ((month == 10 && day >= 24) || (month == 11 && day <= 21))
        cout << "scorpio";
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        cout << "sagittarius";
    
    return 0;
}