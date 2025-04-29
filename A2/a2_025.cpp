#include <bits/stdc++.h>
using namespace std;

int n,m,x,y,area;
vector<pair<int,int>> p = {{0,1},{1,0},{-1,0},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};
vector<pair<int,int>> pk = {{-2,0},{0,-2},{0,2},{2,0},
							{-2,-1},{-2,1},{1,-2},{-1,-2},{1,2},{-1,2},{2,1},{2,-1},
							{-2,2},{-2,-2},{2,-2},{2,2}
							};

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n >> m >> x >> y;vector<vector<int>> tab(n+1,vector<int>(m+1,0));
	area = n*m;
	int q;cin >> q;
	while(q--){
		int a,b;cin >>  a >> b;
		if(tab[a][b]==0)area--;
		tab[a][b] = max(tab[a][b],100);
		for(auto [nx,ny] : p){
			nx+=a,ny+=b;
			if(nx>=0&&nx<n&&ny>=0&&ny<m){
				if(tab[nx][ny]==0)area--;
				tab[nx][ny] = max(tab[nx][ny],60);
			}
		}
		for(auto [nx,ny] : pk){
			nx+=a,ny+=b;
			if(nx>=0&&nx<n&&ny>=0&&ny<m){
				if(tab[nx][ny]==0)area--;
				tab[nx][ny] = max(tab[nx][ny],20);
			}
		}
	}
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++)cout << tab[i][j] << " ";cout << "\n";
	// }
	cout << area << "\n";
	cout << tab[x][y] << "%\n";
	return 0;
}