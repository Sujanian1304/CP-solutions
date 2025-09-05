/*
 * Problem: A. Final Verdict
 * URL: https://codeforces.com/contest/2078/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n];int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum%n==0&&(sum/n==m)) cout<<"YES\n";
	else cout<<"NO\n";
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
