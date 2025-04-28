#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string a,b,c;cin >> a >> b >> c;
	if(a.size()>5 && b.size()>5){
		cout << a[0] << a[1] << b[b.size()-1] << c[c.size()-1];
	}else{
		cout << a[0] << c << b[b.size()-1];
	}
	return 0;
}