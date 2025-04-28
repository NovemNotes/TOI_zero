#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	for(int i=0;i<3;i++){
		for(int j=0;j<n-i-i;j++){
			cout << "*";
		}cout << "\n";
	}
	return 0;
}