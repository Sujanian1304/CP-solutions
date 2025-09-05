/*
 * Problem: C. Arrow Path
 * URL: https://codeforces.com/contest/1948/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s,t;cin>>s>>t;
    for(int i=0;i<n-1;i++){
		if(i%2==0&&(t[i]=='<'&&s[i+1]=='<')){cout<<"NO\n";return;}
		if(i%2==1&&(s[i]=='<'&&t[i+1]=='<')){cout<<"NO\n";return;}
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
