#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	int ans = 1;
	for(int i=2;i<=n;i++)ans*=i;
	cout << ans << "\n";
	return 0;
}