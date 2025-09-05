/*
 * Problem: B. Multiplication Table
 * URL: https://codeforces.com/contest/1220/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	vector<int>ans(n);
	int y=sqrt((arr[2][0]*arr[1][2])/arr[1][0]);
	ans[2]=y;
	for(int i=0;i<n;i++){
		if(i!=2) ans[i]=arr[2][i]/y;
	}
	for(auto&v:ans) cout<<v<<" ";
	cout<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
