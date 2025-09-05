/*
 * Problem: B. A BIT of a Construction
 * URL: https://codeforces.com/contest/1957/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int msb=63- __builtin_clzll(m);
    if(n==1){cout<<m<<"\n";return;}
    int x=(1LL<<msb)-1;
    for(int i=0;i<n-2;i++) {cout<<0<<" ";}
    cout<<x<<" "<<m-x<<"\n";
    
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
