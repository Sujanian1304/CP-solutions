/*
 * Problem: B. Petya and Staircases
 * URL: https://codeforces.com/problemset/problem/362/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int>arr(m);
    for(int i=0;i<m;i++){
		cin>>arr[i];
		if(arr[i]==1||arr[i]==n){cout<<"NO\n";return;}
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<m-2;i++){
		if(arr[i]+1==arr[i+1]&&arr[i+1]+1==arr[i+2]){cout<<"NO\n";return;}
	}
	cout<<"YES\n";
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
