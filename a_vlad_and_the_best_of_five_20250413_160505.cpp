/*
 * Problem: A. Vlad and the Best of Five
 * URL: https://codeforces.com/contest/1926/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;int cnt=0;
    for(int i=0;i<(int)s.size();i++){
		if(s[i]=='A') cnt++;
	}
	if(cnt>(s.size()-cnt)) cout<<"A\n";
	else cout<<"B\n";
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
