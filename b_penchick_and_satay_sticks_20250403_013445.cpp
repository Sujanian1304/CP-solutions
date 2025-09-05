/*
 * Problem: B. Penchick and Satay Sticks
 * URL: https://codeforces.com/contest/2031/problem/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(abs(arr[i]-i)>1) {cout<<"NO\n"; return;}
	}
	cout<<"YES\n";
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
