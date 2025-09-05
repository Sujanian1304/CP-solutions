/*
 * Problem: B. pspspsps
 * URL: https://codeforces.com/contest/2049/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    if(s[0]=='s') s[0]='.';
    if(s[n-1]=='p') s[n-1]='.';
    bool foundp=0;
    bool founds=0;
    for(int i=0;i<n;i++){
		if(s[i]=='p')foundp=1;
		if(s[i]=='s') founds=1;
	}
	if(foundp&&founds) cout<<"NO\n";
	else cout<<"YES\n";
		 
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
