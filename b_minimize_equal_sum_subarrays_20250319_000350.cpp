/*
 * Problem: B. Minimize Equal Sum Subarrays
 * URL: https://codeforces.com/problemset/problem/1998/B
 * Time Limit: 1.5 seconds
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
	int ans[n];
	for(int i=0;i<n-1;i++){
		ans[i]=arr[i+1];
	}
	ans[n-1]=arr[0];
	for(auto&v:ans){ cout<<v<<" ";}
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
