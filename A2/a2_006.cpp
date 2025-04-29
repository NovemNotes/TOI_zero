#include <bits/stdc++.h>
using namespace std;

int n,cnt = 0;
vector<pair<int,int>> p = {{0,-1},{-1,0}};

void bfs(int x,int y,vector<vector<char>> &v){
	if(v[x][y] == 'X')return;
	queue<pair<int,int>> q;
	q.push({x,y});v[x][y] = 'X';cnt++;
	while(!q.empty()){
		auto [x,y] = q.front();q.pop();
		for(auto [nx,ny] : p){
			nx+=x;ny+=y;
			if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&v[nx][ny]=='.'){
				cnt++;
				v[nx][ny] = 'X';
				q.push({nx,ny});
			}
		}
	}
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;vector<vector<char>> v(n+1,vector<char>(n+1));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> v[i][j];
		}
	}
	bfs(n,n,v);
	cout << cnt << "\n";
	return 0;
}