/*
 * Problem: D. Remove Two Letters
 * URL: https://codeforces.com/contest/1800/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    string t="";t+=s[0];t+=s[1];
    for(int i=2;i<n;i++){
		if((s[i]==s[i-2])) continue;
		else t+=s[i];
	}
	cout<<t.size()-1<<"\n";
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
