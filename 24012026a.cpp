/*
 * Problem: A - Count .
 * URL: https://atcoder.jp/contests/abc442/tasks/abc442_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;
    cin>>s;
    int cnt=0;int m=s.size();
    for(int i=0;i<m;i++){
		if(s[i]=='i'||s[i]=='j') cnt++;
	}
	cout<<cnt<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
