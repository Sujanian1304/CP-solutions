/*
 * Problem: A. Cover in Water
 * URL: https://codeforces.com/contest/1900/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;int cnt=0;
    for(int i=0;i<n-2;i++){
		if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.') {cout<<2<<"\n";return;}
		if(s[i]=='.') cnt++;
	}
	if(s[n-2]=='.')cnt++;
	if(s[n-1]=='.') cnt++;
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
