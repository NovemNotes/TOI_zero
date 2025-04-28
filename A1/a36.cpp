#include <bits/stdc++.h>
using namespace std;

int n,mn=INT_MAX;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;
	n-=(n%10);
	while(n-10 >= -10){
		cout << n << " " ;
		n-=10;
	}
	return 0;
}