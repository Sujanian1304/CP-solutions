/*
 * Problem: A. Dr. TC
 * URL: https://codeforces.com/contest/2106/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;string s;cin>>s;int cnt=0;
    for(int i=0;i<n;i++){
		if(s[i]=='1') cnt++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='1') ans+=(cnt-1);
		else ans+=cnt+1;
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
