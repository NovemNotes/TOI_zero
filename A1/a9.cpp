#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a,b;cin >> a >> b;
	a+=b;
	cout << a << "\n";
	cout << (a>50? "pass\n":"fail\n");
	return 0;
}