#include <bits/stdc++.h>
using namespace std;

set<int> s;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	for(int i=0;i<10;i++){
		int x;cin >> x;
		auto it = s.find(x);
		if(it==s.end()){
			s.insert(x);
			cout << x << " ";
		}
	}
	return 0;
}