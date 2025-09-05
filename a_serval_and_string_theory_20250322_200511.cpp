/*
 * Problem: A. Serval and String Theory
 * URL: https://codeforces.com/contest/2085/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    string s;cin>>s;
    string t=s;
    reverse(s.begin(),s.end());
    if(m==0){
		if(t<s) cout<<"yes\n";
		else cout<<"no\n";
	}
	else{
		int c=count(s.begin(),s.end(),s[0]);
		if(c==s.size()) cout<<"no\n";
		else cout<<"yes\n";
	}
			
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
