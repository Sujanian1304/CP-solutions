/*
 * Problem: B. Optimal Reduction
 * URL: https://codeforces.com/problemset/problem/1713/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0;int r=n-1;
	while(l<n&&arr[l]<=arr[l+1]) l++;
	while(r>0&&arr[r]<op=arr[r-1]) r--;
	if(r<=l) cout<<"Yes\n";
	else cout<<"No\n";
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
