#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string s;cin >> s;
	int cnt = 0 ;
	char tmp = '#';
	for(auto x : s){
		if(tmp=='#'){
			tmp=x;cnt=1;
		}else if(x==tmp)cnt++;
		else{
			cout << cnt << tmp;
			tmp = x;
			cnt = 1;
		}
	}
	cout << cnt << tmp;
	return 0;
}