#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+9;

int n,mx=0;
int head[N];
bool vis[N];

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;for(int i=1;i<=n;i++)cin >> head[i],vis[i] = false;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			int cnt = 0,x=i;
			while(x!=i || cnt==0){
				cnt++;vis[x] = true;
				x = head[x];
			}
			mx = max(mx,cnt);
		}
	}
	cout << mx << "\n";
	return 0;
}