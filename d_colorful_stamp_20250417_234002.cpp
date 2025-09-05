/*
 * Problem: D. Colorful Stamp
 * URL: https://codeforces.com/contest/1669/problem/D
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;int b=0;int r=0;
   
    for(int i=0;i<n;i++){
		if(s[i]=='B') b++;
		if(s[i]=='R') r++;
		if(s[i]=='W'){
			if((r==0&&b>0)||(b==0&&r>0)){cout<<"NO\n";return;}
			r=0;b=0;
		}
	}
	if((b==0&&r>0)||(r==0&&b>0)){cout<<"NO\n";return;}
	cout<<"YES\n";
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
