/*
 * Problem: A. Line Trip
 * URL: https://codeforces.com/contest/1901/problem/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n];int ans=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		ans=max(ans,arr[i+1]-arr[i]);
	}
	ans=max(ans,arr[0]-0);
	ans=max(ans,2*(m-arr[n-1]));
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
