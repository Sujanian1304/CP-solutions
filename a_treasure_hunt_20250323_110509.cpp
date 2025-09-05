/*
 * Problem: A. Treasure Hunt
 * URL: https://codeforces.com/contest/2090/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int x,y,a;
    cin>>x>>y>>a;
    int z=(a)%(x+y);
    if(z<x) cout<<"NO\n";
    else cout<<"YES\n";
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
