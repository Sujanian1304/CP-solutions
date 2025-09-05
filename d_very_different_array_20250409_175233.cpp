/*
 * Problem: D. Very Different Array
 * URL: https://codeforces.com/contest/1921/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n),brr(m);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<m;i++){
		int a;cin>>a;
		brr[i]=a;
	}
	sort(arr.begin(),arr.end());
	sort(brr.begin(),brr.end());
	//reverse(brr.begin(),brr.end());
	int ans=0;
	for(int i=0;i<n;i++){
	  ans+=max(arr[i]-brr[n-1-i],brr[m-1-i]-arr[i]);
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
