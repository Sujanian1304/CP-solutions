/*
 * Problem: B. Expensive Number
 * URL: https://codeforces.com/contest/2093/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int n=s.size();int x=n-1;
    for(int i=n-1;i>=0;i--){
		if(s[i]=='0') x--;
		else break;
	}
	int ans=(n-1)-x;
    for(int i=0;i<x;i++){
		if(s[i]!='0') ans++;
	}
	cout<<ans<<"\n";

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
