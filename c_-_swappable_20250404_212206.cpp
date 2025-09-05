/*
 * Problem: C - Swappable
 * URL: https://atcoder.jp/contests/abc206/tasks/abc206_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;vector<int> arr(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		cnt+=(n-i-1)-(mp[arr[i]]-1);
		mp[arr[i]]--;
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
