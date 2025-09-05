/*
 * Problem: B. Ideal Point
 * URL: https://codeforces.com/contest/1795/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    int cnt=0;int flag=0;bool f=1;bool f1=1;
    for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		if(b==k&&f) {flag++;f=0;}
		if(a==k&&f1) {flag++;f1=0;}
		if(a==b&&b==k) cnt=1;
	}
	if(cnt==1){cout<<"YES\n";return;}
	if(flag==2){cout<<"YES\n";return;}
	else cout<<"NO\n";
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
