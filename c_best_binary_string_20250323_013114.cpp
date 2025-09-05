/*
 * Problem: C. Best Binary String
 * URL: https://codeforces.com/problemset/problem/1837/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int n=s.size();
    if(s[0]=='?') s[0]='0';
    for(int i=0;i<n;i++){
		if(s[i]=='?'){
			if(i>0){if(s[i-1]=='1') s[i]='1';
				else s[i]='0';
			}
		}
    }
    cout<<s<<"\n";
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
