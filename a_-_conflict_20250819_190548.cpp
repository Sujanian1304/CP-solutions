/*
 * Problem: A - Conflict
 * URL: https://atcoder.jp/contests/abc409/tasks/abc409_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string t,a;
    cin>>t>>a;
    for(int i=0;i<n;i++){
		if(a[i]==t[i]){
			if(a[i]=='o'){
			cout<<"Yes\n";*
			return;
		}
		}
	}
	cout<<"No\n";
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
