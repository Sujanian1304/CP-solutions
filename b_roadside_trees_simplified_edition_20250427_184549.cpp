/*
 * Problem: B. Roadside Trees (Simplified Edition)
 * URL: https://codeforces.com/problemset/problem/265/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int ans=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}int last=0;
    for(int i=0;i<n-1;i++){
		ans+=(arr[i]-last)+1;
		if(arr[i]<arr[i+1]){ans++;last=arr[i];}
		else {
			last=arr[i+1];
			ans+=arr[i]-arr[i+1];ans++;
		}
	}
	ans+=arr[n-1]-last+1;
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
