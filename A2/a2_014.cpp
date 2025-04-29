#include <bits/stdc++.h>
using namespace std;

string a,b,ans;

bool chk(char c){
	return (c=='l'||c=='o'||c=='v'||c=='e');
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> a >> b;int n = a.size(),m=b.size();
	for(auto &x:a)x=tolower(x);
	for(auto &x:b)x=tolower(x);
	if(n<m)a+=(a.substr(0,m-n));
	else if(m<n)b+=(b.substr(0,n-m));
	int cnt = 0,mx = 0,ct=0;
	for(int i=0;i<max(n,m);i++){
		if(chk(a[i])||chk(b[i])){ans+='w';ct++;cnt++;mx=max(mx,cnt);}
		else{ans+='$';cnt=0;}
	}
	if(ct%2==1){
		ans+=(to_string(mx));
	}else{
		if(mx<=1)ans+='#';
	}
	cout << ans << "\n";
	return 0;
}