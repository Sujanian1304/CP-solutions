/*
 * Problem: B. Amr and Pins
 * URL: https://codeforces.com/problemset/problem/507/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,x,y,a,b;cin>>n>>x>>y>>a>>b;
    int d=(b-y)*(b-y)+(a-x)*(a-x);
    int c=sqrt(d);
    if(c*c!=d) c+=1;
    n*=2;
    int ans=(c+n-1)/n;
    cout<<ans<<"\n";
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
