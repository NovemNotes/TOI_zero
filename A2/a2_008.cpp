#include <bits/stdc++.h>
using namespace std;

#define int long long 

struct stc{
	int p,v;
	bool operator<(const stc &x)const{
		return v > x.v;
	}
};

int n,ans=0,target;
vector<stc> v;

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;v.resize(n);
	for(auto &[x,y]:v)cin >> x >> y;
	sort(v.begin(),v.end());target = v[0].p;
	for(int i=1;i<n;i++){
		if(v[i].p > target)ans++;
		else target = v[i].p;
	}cout << ans << "\n";
	return 0;
}