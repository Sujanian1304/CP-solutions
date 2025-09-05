/*
 * Problem: A - Is it rated?
 * URL: https://atcoder.jp/contests/abc405/tasks/abc405_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if (m==1) {
        cout << ((1600<=n&&n<= 2999) ? "Yes\n" : "No\n");
    }
    else {
        cout << ((1200 <=n&&n<= 2399) ? "Yes\n" : "No\n");
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
