#include <bits/stdc++.h>
using namespace std;

int m,d;
vector<string> ans = {"winter","spring","summer","fall"};

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> m >> d;
	int i = 0;
	if(m%3==0){
		if(d>=21){
			i = (m/3)%4;
		}else{
			i =m/3 - 1;
		}
	}else{
		i = m/3;
	}
	cout << ans[i];
	return 0;
}

/*
1 2 3
4 5 6
7 8 9
10 11 12
*/