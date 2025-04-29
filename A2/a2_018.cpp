#include <bits/stdc++.h>
using namespace std;

char c;
int n;
vector<string> s = {"Red","Green","Blue"};

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> c >> n;
	int st = 0;
	if(c=='G')st=1;
	else if(c=='B')st=2;
	for(int i=st;i<st+n;i++){
		cout << s[i%3] << " " ;
	}
	return 0;
}