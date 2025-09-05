/*
 * Problem: B. Fedor and New Game
 * URL: https://codeforces.com/problemset/problem/467/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,k;cin>>n>>m>>k;
    vector<int> arr(m);
    for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	int x;cin>>x;
	int ans=0;
	for(int i=0;i<m;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if((1LL&(arr[i]>>j))^(1LL&(x>>j))) cnt++;
		}
		//cout<<cnt<<" ";
		if(cnt<=k) ans++;
	}
	cout<<ans<<"\n";
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
