/*
 * Problem: C - Peak
 * URL: https://atcoder.jp/contests/abc326/tasks/abc326_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());int ans=0;
	for(int i=0;i<n;i++){
		int z=arr[i]+m;
		auto y=lower_bound(arr.begin(),arr.end(),z);
		
			int x=y-arr.begin()-i;
			//cout<<x<<" ";
			ans=max(ans,x);
		
		
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
