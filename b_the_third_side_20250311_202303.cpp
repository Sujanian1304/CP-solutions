/*
 * Problem: B. The Third Side
 * URL: https://codeforces.com/contest/2074/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<sum-(n-1)<<"\n";
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
