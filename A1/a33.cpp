#include <bits/stdc++.h>
using namespace std;

int n,cnt;
set<char> s = {'A','E','I','O','U'};

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;
	while(n--){
		char c;cin >> c;
		auto it = s.find(c);
		if(it!=s.end())cnt++;
	}cout << cnt << "\n";
	return 0;
}