/*
 * Problem: F. Forever Winter
 * URL: https://codeforces.com/contest/1829/problem/F
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<vector<int>> g(n+1);vector<int> og(n+1,0);vector<int> ig(n+1,0);
    for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}map<int,int>mp;
	for(int i=1;i<=n;i++){
		if(g[i].size()==1) continue;
		else{
			mp[g[i].size()]++;
		}
	}
	int x=0;int y=0;
	for(auto&v:mp){
		if(v.second==1) x=v.first;
		else y=v.first-1;
	}
	if(x==0) x=y+1;
	cout<<x<<" "<<y<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
