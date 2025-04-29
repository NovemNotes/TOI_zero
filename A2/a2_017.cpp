#include <bits/stdc++.h>
using namespace std;

int price;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	char a,b;cin >> a >> b;
	if(a=='S'){
		if(b=='R')price = 60;
		else price = 80;
	}else if(a=='M'){
		if(b=='R')price = 80;
		else price = 100;
	}else{
		if(b=='R')price = 100;
		else price = 120;
	}
	cin >> a;
	if(a=='N')cout << price << "\n";
	else{
		int n;cin >> n;
		if(a=='P')price+=(n*15);
		else price+=(n*10);
		cout << price << "\n";
	}
	return 0;
}