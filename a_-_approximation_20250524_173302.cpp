/*
 * Problem: A - Approximation
 * URL: https://atcoder.jp/contests/abc407/tasks/abc407_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b;cin>>a>>b;
    int ans=0;
    int z=a/b;
    double x=(double)a/b;
    int y=(a+b-1)/b;
    //cout<<x-z<<" "<<y-x;
    if(x-z<=y-x){ ans=z;}
    else ans=y;
    cout<<ans<<"\n";
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
