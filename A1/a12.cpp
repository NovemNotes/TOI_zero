#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	char c;cin >> c;
	int tmp = n;
	cout << tmp << " ";
	int sum = 0;
	while(n!=0){
		sum = (sum*10) + (n%10);
		n/=10;
	}
	cout << c << " " << sum << " = ";
	if(c=='+'){
		cout << tmp+sum;
	}else{
		cout << tmp*sum;
	}
	return 0;
}