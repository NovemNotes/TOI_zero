#include <bits/stdc++.h>
using namespace std;

int n,cnt = 0;
vector<int> v;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;v.resize(n+2);
	for(int i=1;i<=n;i++)cin >> v[i];
	for(int i=1;i<=n;i++){
		if(v[i] > v[i-1] && v[i] > v[i+1])cnt++;
	}
	cout << cnt << "\n";
	return 0;
}