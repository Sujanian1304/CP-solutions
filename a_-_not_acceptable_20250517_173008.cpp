/*
 * Problem: A - Not Acceptable
 * URL: https://atcoder.jp/contests/abc406/tasks/abc406_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(a<c){cout<<"No\n";return;}
    if(a>c){cout<<"Yes\n";return;}
    if(a==c&&b>=d){cout<<"Yes\n";return;}
    cout<<"No\n";
		
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
