/*
 * Problem: D. Anti-Sudoku
 * URL: https://codeforces.com/problemset/problem/1335/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    vector<vector<int>> g(9,vector<int>(9));
    for(int i=0;i<9;i++){
		string s;cin>>s;
		for(int j=0;j<9;j++){
			g[i][j]=s[j]-48;
		}
	}
	g[0][0]=g[0][1];
	g[3][1]=g[3][2];
	g[6][2]=g[6][3];
	g[1][3]=g[1][4];
	g[4][4]=g[4][5];
	g[7][5]=g[7][6];
	g[2][6]=g[2][7];
	g[5][7]=g[5][8];
	g[8][8]=g[8][7];
	 for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
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
