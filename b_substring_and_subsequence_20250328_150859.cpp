/*
 * Problem: B. Substring and Subsequence
 * URL: https://codeforces.com/contest/1989/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s,t;cin>>s>>t;
    int ans=s.size()+t.size();
	int cnt=0;int fans=0;
	for(int i=0;i<t.size();i++){
		int ptr=i;
		for(int j=0;j<s.size();j++){
			if(t[ptr]==s[j]) ptr++;
		}
		fans=max(ptr-i,fans);
	}
	cout<<ans-fans<<"\n";
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
