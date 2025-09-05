/*
 * Problem: A. Dinner Time
 * URL: https://codeforces.com/contest/2102/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,p,q;cin>>n>>m>>p>>q;
    if(n%p==0){
		if(m==n/p*q){
			cout<<"YES\n";
			return;
		}else{
			cout<<"NO\n";
			return;
		}
	}
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
