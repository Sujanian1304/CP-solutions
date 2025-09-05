/*
 * Problem: A - Not Found
 * URL: https://atcoder.jp/contests/abc404/tasks/abc404_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;map<int,int> mp;
    for(int i=0;i<(int)s.size();i++){
		mp[s[i]-97]++;
	}
	for(int i=0;i<26;i++){
		if(mp[i]==0){cout<<char('a'+i)<<"\n";return;}
	}
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
