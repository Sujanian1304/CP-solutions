/*
 * Problem: A. Three Decks
 * URL: https://codeforces.com/contest/2104/problem/0
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,k;cin>>n>>m>>k;
    int x=(k-m)-(m-n);
    if(x%3==0&&x>=0){cout<<"YES\n";}
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
