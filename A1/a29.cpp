#include <bits/stdc++.h>
using namespace std;

string s;
int cnt=0;
set<char> st = {'a','e','i','o','u'};

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> s;
	for(auto x:s){
		auto it = st.find(x);
		if(it!=st.end())cnt++;
	}
	cout << cnt << "\n";
	return 0;
}