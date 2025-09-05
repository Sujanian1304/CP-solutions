/*
 * Problem: B. Turtle and an Infinite Sequence
 * URL: https://codeforces.com/contest/1981/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int l=max(0LL,(n-m));
    int r=n+m;int ans=0;
    int range=r-l+1;
    for(int i=0;i<=31;i++){
		if((range<(1LL<<i))) ans|=(1LL<<i);
	}
	cout<<ans<<"\n";
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
