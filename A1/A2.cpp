#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	cout << "10 = ";
	cout << n/10 << "\n";n%=10;
	cout << "5 = ";
	cout << n/5 << "\n";n%=5;
	cout << "2 = ";
	cout << n/2 << "\n";n%=2;
	cout << "1 = ";
	cout << n << "\n";
	return 0;
}