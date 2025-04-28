#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string s;cin >> s;
	for(int i=4;i>=0;i--)cout << (char)(tolower(s[i]));
	return 0;
}