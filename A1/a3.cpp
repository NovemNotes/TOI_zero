#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int ans = LLONG_MIN;
	for(int i=0;i<3;i++){
		int x;cin >> x;ans=max(ans,x);
	}cout << ans << "\n";
	return 0;
}