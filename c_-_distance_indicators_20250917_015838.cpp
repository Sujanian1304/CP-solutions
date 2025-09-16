/*
 * Problem: C - Distance Indicators
 * URL: https://atcoder.jp/contests/abc417/tasks/abc417_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    int ans=0;
	 map<int,int> freq; 
    for(int i=0;i<n;i++){
		int b;cin>>b;
		a[i]=b;
		ans+=freq[i-b];
		freq[i+b]++;
	}
    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
