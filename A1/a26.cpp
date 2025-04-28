#include <bits/stdc++.h>
using namespace std;

int a,b;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	for(int i=0;i<3;i++){int x;cin >> x;if(x%2==0)b++;else a++;}
	cout << "even " << b << "\n" << "odd " << a << "\n";
	return 0;
}