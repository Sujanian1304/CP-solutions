/*
 * Problem: C - Not All Covered
 * URL: https://atcoder.jp/contests/abc408/tasks/abc408_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n+1);
    for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		l--;
		a[l]++;a[r]--;
	}
	for(int i=1;i<n+1;i++){
		a[i]+=a[i-1];
	}int ans=1e9;
	for(int i=0;i<n;i++){
		ans=min(ans,a[i]);
	}
	cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
