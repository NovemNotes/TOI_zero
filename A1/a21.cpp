#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> v;

int32_t main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;cin >> n;
    if(n>1500){
        if(n%400==0)cout << "yes";
        else if(n%100==0)cout << "no";
        else if(n%4==0)cout << "yes";
        else cout << "no";
    }else{
        cout << (n%4==0 ? "yes":"no");
    }
    return 0;
}