/*
 * Problem: A - Thermometer
 * URL: https://atcoder.jp/contests/abc397/tasks/abc397_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    double x;cin>>x;
    if(x>38.0) cout<<1<<"\n";
    else if(x>=37.5&&x<38.0) cout<<2<<"\n";
    else cout<<3<<"\n";
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
