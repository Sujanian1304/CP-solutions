/*
 * Problem: B. Preparing Olympiad
 * URL: https://codeforces.com/problemset/problem/550/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}int cnt=0;
	for(int i=0;i<(1<<n);i++){
		int sum=0;int mi=1e9;int ma=0;
		for(int j=0;j<n;j++){
			if(1LL&(i>>j)){
				sum+=arr[j];
				mi=min(mi,arr[j]);
				ma=max(ma,arr[j]);
			}
		}
		if(sum>=l&&sum<=r&&(ma-mi)>=x) cnt++;
	}
	cout<<cnt<<"\n";
    
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
