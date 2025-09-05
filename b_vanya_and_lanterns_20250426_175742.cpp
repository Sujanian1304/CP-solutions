/*
 * Problem: B. Vanya and Lanterns
 * URL: https://codeforces.com/problemset/problem/492/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
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
	sort(arr.begin(),arr.end());
	int ans=0;
     for(int i=0;i<n-1;i++){
		 ans=max(ans,arr[i+1]-arr[i]);
	 }
	  double a=(double)ans/2;
	 a=max(a,(double)arr[0]-0);
	 a=max(a,(double)m-arr[n-1]);
	 cout<<fixed<<setprecision(10)<<a<<"\n";
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
