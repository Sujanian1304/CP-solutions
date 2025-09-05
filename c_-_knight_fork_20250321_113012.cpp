/*
 * Problem: C - Knight Fork
 * URL: https://atcoder.jp/contests/abc239/tasks/abc239_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x=abs(n-m);int y=abs(m-b);
    int dis=(x<<2)+(y<<2);
    if(dis<=20) cout<<"YES\n";
    else cout<<"NO\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
