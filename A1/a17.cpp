#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;
	int one,two;
	one = a*365 + b*30 + c;
	two = d*365 + e*30 + f;
	if(one > two)cout << 2;
	else if(one < two)cout << 1;
	else cout << 0;
	return 0;
}