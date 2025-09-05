/*
 * Problem: A. String
 * URL: https://codeforces.com/contest/2062/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
		if(s[i]=='1') cnt++;
	}
	cout<<cnt<<"\n";
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
