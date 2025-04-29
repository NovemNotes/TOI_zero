#include <bits/stdc++.h>
using namespace std;

string s,tmp;

int solve(int n){
	int cnt = 0;
	for(int i=n+1;i<s.size();i++){
		if(s[i]=='u')cnt++;
		else return cnt;
	}
	return cnt;
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> s;tmp=s;
	for(auto &x:s)x=tolower(x);
	auto it = s.find("buu");
	if(it==string::npos){
		int n = s.size();
		auto it2 = s.find("b");
		// cout << it2 << "\n";
		if(it2!=string::npos){
			for(int i=0;i<n;i++){
				if(i<=it2)cout << tmp[i];
				else cout << "U";
			}
		}else{
			vector<char> c = {'B','U','U'};
			for(int i=0;i<n;i++)cout << c[i%3] ;
		}
	}else{
		int mx = 0;
		cout << "Yes ";	
		for(int i=0;i<s.size();i++){
			string k = s.substr(i,s.size()-i);
			auto it = k.find("buu");
			if(it != string::npos)mx=max(mx,solve(i));
		}
		cout << mx << "\n";
	}
	return 0;
}