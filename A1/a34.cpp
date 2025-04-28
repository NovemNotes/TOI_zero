#include <bits/stdc++.h>
using namespace std;

int n,mn=INT_MAX;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;
	while(n--){
		int x;cin >> x;mn=min(x,mn);
	}cout << mn << "\n";
	return 0;
}