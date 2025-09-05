/*
 * Problem: C. A TRUE Battle
 * URL: https://codeforces.com/problemset/problem/2030/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    string s;cin>>s;
    if(s[0]=='1'||(n==2&&(s[0]=='1'||s[1]=='1'))||s[n-1]=='1') cout<<"YES\n";
    else{
		bool flag=0;
    for(int i=0;i<n-1;i++){
		if(s[i]=='1'&&s[i+1]=='1') {flag=1;break;}
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
