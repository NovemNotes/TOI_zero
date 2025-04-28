#include <bits/stdc++.h>
using namespace std;

int n;
char c;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n >> c;
	if(c=='C'){
		if(n<=0)cout << "solid\n";
		else if(n>0 && n<=100)cout << "liquid\n";
		else cout << "gas\n";
	}else{
		if(n<=32)cout << "solid\n";
		else if(n>32 && n<=212)cout << "liquid\n";
		else cout << "gas\n";
	}
	return 0;
}