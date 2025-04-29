#include <bits/stdc++.h>
using namespace std;

int n,c;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	queue<int> q;
	cin >> n >> c;vector<vector<int>> v(n+1,vector<int>(n+1));
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin >> v[i][j];
	for(int i=1;i<=n;i++)q.push(i);
	while(q.size() > 1){
		int one = q.front();q.pop();
		int two = q.front();q.pop();
		int win = v[one][two];
		if(win == one && c == two){
			q.push(two);c=0;
		}else if(win == two && c == one){
			q.push(one);c=0;
		}else{
			q.push(win);
		}
	}
	cout << q.front() << "\n";
	return 0;
}