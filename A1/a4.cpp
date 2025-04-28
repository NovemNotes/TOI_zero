#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a,b,c;cin >> a >> b >> c;
	bool ans = (a>=5 && b>=20 && c>=25);
	cout << (ans? "pass\n":"fail\n");
	return 0;
}