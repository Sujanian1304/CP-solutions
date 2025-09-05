/*
 * Problem: A - CBC
 * URL: https://atcoder.jp/contests/abc402/tasks/abc402_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;string t="";int n=s.size();
    for(int i=0;i<n;i++){
		if(s[i]>=65&&s[i]<=90){
			t+=s[i];
		}
	}
	cout<<t<<"\n";
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
