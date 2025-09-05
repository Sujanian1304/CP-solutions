/*
 * Problem: Move Grid
 * URL: https://www.codechef.com/START181D/problems/MOVEMENT
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=a-c;
    int y=b-d;
    cout<<x<<" "<<y;
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
