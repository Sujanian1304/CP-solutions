/*
 * Problem: B - Unauthorized
 * URL: https://atcoder.jp/contests/abc401/tasks/abc401_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    bool t=0;int cnt=0;
    for(int i=0;i<n;i++){
		string s;cin>>s;
		if(s=="private"){
			if(t!=1) cnt++;
		}
		if(s=="login") t=1;
		if(s=="logout") t=0;
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
