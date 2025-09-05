/*
 * Problem: C1. Shohag Loves XOR (Easy Version)
 * URL: https://codeforces.com/contest/2039/problem/C1
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int ans=0;
    for(int i=1;i<n;i++){
		int x=n^i;
		if(x<1||x>m) continue;
		if(x%i==0||n%i==0) ans++;
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
