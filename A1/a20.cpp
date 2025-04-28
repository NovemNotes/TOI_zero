#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> v;

int32_t main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    for(int i=0;i<3;i++){
        int x;cin >> x;v.push_back(x);
    }
    if(v[0] < v[1] && v[1] < v[2]) cout << "increasing";
    else if(v[0] > v[1] && v[1] > v[2]) cout << "decreasing";
    else cout << "neither";
    return 0;
}