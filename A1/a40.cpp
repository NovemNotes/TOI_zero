#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	if(n==1)return 100;
	else if(n==2)return 120;
	else if(n==3)return 200;
	else if(n==4)return 60;
	return 0;
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n = -1,ans=0;
	while(n!=5){
		cin >> n;
		ans+=solve(n);
	}
	cout << "Bye Bye\nTotal Calories: " << ans << "\n";
	return 0;
}