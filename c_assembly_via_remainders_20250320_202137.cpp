/*
 * Problem: C. Assembly via Remainders
 * URL: https://codeforces.com/problemset/problem/1968/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    int arr[n-1];int ma=0;
    for(int i=0;i<n-1;i++){
		cin>>arr[i];
		ma=max(ma,arr[i]);
	}
	int ans[n];ans[0]=ma+1;
	for(int i=1;i<n;i++){
		 ans[i]=(ans[i-1]+arr[i-1]);
		 if(i<n-1&&ans[i]<=arr[i]) ans[i]=arr[i];
	 }
	 for(auto&v:ans) cout<<v<<" ";
	 cout<<"\n";
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
