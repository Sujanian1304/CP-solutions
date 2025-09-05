/*
 * Problem: B - Ticket Gate Log
 * URL: https://atcoder.jp/contests/abc397/tasks/abc397_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int cnt=0;int n=s.size();string t="";
    for(int i=0;i<n;i++){
		if(i==0) {
			if(s[i]=='o') cnt++;
		}
		else{
			if((s[i-1]=='o'&&s[i]=='o')||(s[i-1]=='i'&&s[i]=='i')) cnt++;
		}
	}
	if((s.size()+cnt)%2) {
		cnt++;
		cout<<cnt;
	}
	else cout<<cnt<<"\n";
	
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);g
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
