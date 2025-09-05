/*
 * Problem: G. Fall Down
 * URL: https://codeforces.com/contest/1669/problem/G
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<vector<char>> g(n,vector<char>(m));
    for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<m;j++){
			g[i][j]=s[j];
		}
	}
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<m;j++){
			if(g[i][j]=='*'){
				int x=i;
				while(x+1<n&&g[x+1][j]=='.'){
					g[x][j]='.';
					x++;
					g[x][j]='*';
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<g[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n";
	
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
