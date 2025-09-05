/*
 * Problem: B. Slice to Survive
 * URL: https://codeforces.com/contest/2109/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int clog2(long long x) {
    return x <= 1 ? 0 : 64 - __builtin_clzll(x - 1);
}
void solve() {
    // Your solution here
    int  n,m,a,b;cin>>n>>m>>a>>b;
     if(n==1&&m==1){cout<<0<<"\n";return;}
        int h = min(a, n - a + 1);
        int w = min(b, m - b + 1);
        int cost_h = 1 + clog2(h) + clog2(m);
        int cost_v = 1 + clog2(n) + clog2(w);
        cout << min(cost_h, cost_v) << "\n";
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
