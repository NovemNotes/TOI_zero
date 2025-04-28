#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a;cin >> a;
	char c;cin >> c;
	if((a>=0 && a<=18) || c=='s' || c=='S')cout << 20 << "\n";
	else cout << 50 << "\n";
	return 0;
}