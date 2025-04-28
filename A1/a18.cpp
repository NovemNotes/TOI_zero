#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a;cin >> a;
	if(a<0)cout << "Error : Please input positive number";
	else if(a>9||a==0)cout << "Error : Out of range";
	else{
		string roman;
        switch (a) {
            case 1: roman = "I"; break;
            case 2: roman = "II"; break;
            case 3: roman = "III"; break;
            case 4: roman = "IV"; break;
            case 5: roman = "V"; break;
            case 6: roman = "VI"; break;
            case 7: roman = "VII"; break;
            case 8: roman = "VIII"; break;
            case 9: roman = "IX"; break;
        }
        cout << roman;
	}
	return 0;
}