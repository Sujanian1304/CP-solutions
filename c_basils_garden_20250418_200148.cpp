/*
 * Problem: C. Basil's Garden
 * URL: https://codeforces.com/contest/1987/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	//cout<<ind<<" ";
	int ans=arr[n-1];
	for(int i=n-2;i>=0;i--){
		if(ans>=arr[i]) ans++;
		else ans=arr[i];
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
