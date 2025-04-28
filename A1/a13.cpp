#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	char c;cin >> c;
	string n;cin >> n;
	if(c=='H'&&n=="4567"){
		 cout << "safe unlocked";
	}else if(c=='H'){
		cout << "safe locked - change digit";
	}else if(n=="4567"){
		cout << "safe locked - change char";
	}else{
		cout << "safe locked";
	}
	return 0;
}