#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n,ans = 0;cin >> n;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int x;cin >>x;mp[x]++;
		ans=max(ans,mp[x]);
	}cout << ans << "\n";
	return 0;
}