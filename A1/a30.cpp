#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> ans;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b;cin >> a >> b;ans.push_back(max(a,b));
	}
	cout << ans[0];
	if(n==1)return 0;
	else{
		for(int i=1;i<n;i++){
			cout << " + " << ans[i];
		}
		cout << " = " << accumulate(ans.begin(),ans.end(),0);
	}
	return 0;
}