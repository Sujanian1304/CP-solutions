/*
 * Problem: B. Li Hua and Pattern
 * URL: https://codeforces.com/problemset/problem/1797/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]!=arr[n-i-1][n-j-1]) cnt++;
		}
	}
	cnt/=2;
	if(cnt>m){cout<<"no\n";return ;}
	if(n&1LL){
		cout<<"Yes\n";
	}
	else{
		m=m-cnt;
		//cout<<m<<" ";
		if(m&1LL) cout<<"No\n";
		else cout<<"YES\n";
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
