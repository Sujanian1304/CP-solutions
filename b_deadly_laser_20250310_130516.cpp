/*
 * Problem: B. Deadly Laser
 * URL: https://codeforces.com/contest/1721/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
   if ((x-d <= 1 || y+d >= m) && (y-d <= 1 || x+d >= n))
    cout << "-1\n";
else
    cout << n+m-2 << "\n";
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
