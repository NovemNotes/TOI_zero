#include <bits/stdc++.h>
using namespace std;

#define int long long

int a,b,c,d;

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> a >> b >> c >> d;
	int want = 2*(a+b)*c;
	cout << want << "\n" << want*d << "\n";
	return 0;
}