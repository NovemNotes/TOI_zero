#include <bits/stdc++.h>
using namespace std;

int w,h,m,n;
vector<int> a,b,c,d,e;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> w >> h >> m >> n;
	a.push_back(0);b.push_back(0);
	for(int i=0;i<m;i++){int x;cin >> x;a.push_back(x);}a.push_back(w);
	for(int i=0;i<n;i++){int x;cin >> x;b.push_back(x);}b.push_back(h);
	for(int i=1;i<=m+1;i++)c.push_back(a[i]-a[i-1]);
	for(int i=1;i<=n+1;i++)d.push_back(b[i]-b[i-1]);
	for(auto x : c){
		for(auto y : d){
			e.push_back(x*y);
		}
	}
	sort(e.begin(),e.end(),greater<int>());
	cout << e[0] << " " << e[1] << "\n";
	return 0;
}