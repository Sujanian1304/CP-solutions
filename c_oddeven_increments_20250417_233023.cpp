/*
 * Problem: C. Odd/Even Increments
 * URL: https://codeforces.com/contest/1669/problem/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n),err,orr;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i%2) orr.push_back(arr[i]);
		else err.push_back(arr[i]);
	}
	for(int i=1;i<orr.size();i++){
		if(orr[i]%2!=orr[i-1]%2){cout<<"NO\n";return;}
	}
	for(int i=1;i<err.size();i++){
		if(err[i]%2!=err[i-1]%2){cout<<"NO\n";return;}
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
