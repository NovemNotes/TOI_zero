#include <bits/stdc++.h>
using namespace std;

int n,ans = 0;
vector<pair<int,int>> v;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;v.resize(n);
	for(auto &[x,y] : v)cin >> x >> y;
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			int x = abs(v[i].first-v[j].first);
			int y = abs(v[i].second-v[j].second);
			if(x < ans)break;
			if(x==y){
			ans = max(ans,x);
			}
		}
	}
	cout << ans << "\n";
	return 0;
}