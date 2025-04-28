#include <bits/stdc++.h>
using namespace std;

int n,mn=INT_MAX;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;
	cout << (n*(n+1)*(2*n+1))/6 << "\n";
	return 0;
}