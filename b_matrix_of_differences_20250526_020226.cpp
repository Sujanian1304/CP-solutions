/*
 * Problem: B. Matrix of Differences
 * URL: https://codeforces.com/contest/1783/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    deque<int> g(n*n);
    g[0]=n*n;g[1]=1;
    for(int i=2;i<n*n;i++){
		if(i%2==0) g[i]=g[i-2]-1;
		else g[i]=g[i-2]+1;
	}
	//for(auto&v:g) cout<<v;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=g.front();
			g.pop_front();
		}
		if(i%2){
			reverse(a[i].begin(),a[i].end());
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
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
