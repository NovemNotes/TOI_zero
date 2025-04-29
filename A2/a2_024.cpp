#include <bits/stdc++.h>
using namespace std;

int l,p,a,b,c,mx = 0;
vector<int> tmp(3);
vector<int> po(3,0);

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> l >> p;
	for(int i=0;i<3;i++)cin >> tmp[i];
	while(p--){
		int a,b;cin >> a >> b;
		for(int i=0;i<3;i++){
			int x = tmp[i];
			if(a%x==0)po[i]+=b;
			mx=max(mx,po[i]);
		}
	}
	if(po[0]==mx)cout << "Rabbit " << mx << "\n";
	if(po[1]==mx)cout << "Monkey " << mx << "\n";
	if(po[2]==mx)cout << "Frog " << mx << "\n";
	return 0;
}