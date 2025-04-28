#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	set<int> s;
    for(int i=0;i<3;i++){
        int x;cin >> x;s.insert(x);
    }
    if(s.size()==1)cout << "all the same";
    else if(s.size()==2)cout << "neither";
    else cout << "all different";
	return 0;
}