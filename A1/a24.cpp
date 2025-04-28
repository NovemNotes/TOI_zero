#include <iostream>
using namespace std;

int main() {
    int year, cc, tax;

    cin >> year >> cc;

    if (year <= 1990) {
        if (cc <= 1500) tax = 1250;
        else if (cc <= 2000) tax = 1400;
        else tax = 2000;
    } else if (year >= 1991 && year <= 1999) {
        if (cc <= 1500) tax = 1100;
        else if (cc <= 2000) tax = 1300;
        else tax = 1700;
    } else { // ปี 2000 เป็นต้นไป
        if (cc <= 1500) tax = 1000;
        else if (cc <= 2000) tax = 1200;
        else tax = 1500;
    }

    cout << tax << endl;

    return 0;
}
