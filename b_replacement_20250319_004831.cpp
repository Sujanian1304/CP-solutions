/*
 * Problem: B. Replacement
 * URL: https://codeforces.com/problemset/problem/2029/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s,t;cin>>s>>t;
    if(n==2){
		if(s=="11"||s=="00") cout<<"NO\n";
		else cout<<"YES\n";
	}
	else{
		     int ones = 0, zeros = 0;
             for (char c : s) {
              if (c == '1') ones++;
              else zeros++;
              }
              int flag=1;
             for (char c : t) {
			  if(zeros==0||ones==0) {flag=0;break;}	 
              if (c == '1') zeros--;
              else ones--;
              }
              if(flag) cout<<"YES\n";
              else cout<<"NO\n";
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
