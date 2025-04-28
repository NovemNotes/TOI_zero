#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string s,ans="";cin >> s;reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++){
		if(i!=0&&i%3==0)ans+=",";
		ans+=s[i];
	}
	reverse(ans.begin(),ans.end());
	cout << ans << "\n";
	return 0;
}