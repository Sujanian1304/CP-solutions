/*
 * Problem: B. Stalin Sort
 * URL: https://codeforces.com/contest/2027/problem/B
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
	}int ans=1e9+1;
	for(int i=0;i<n;i++){
		int cnt=1;
		for(int  j=i+1;j<n;j++){
			if(arr[j]<=arr[i]) cnt++;
		}
		ans=min(ans,n-cnt);
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
