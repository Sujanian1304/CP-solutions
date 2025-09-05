/*
 * Problem: Palindromic Score
 * URL: https://www.codechef.com/START182C/problems/LPSS
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int a, int b) {
    int p = (a/2) + (b/2);
    int c = ((a%2) + (b%2) >= 1) ? 1 : 0;
    return p*2 + c;
}
void solve() {
    // Your solution here
     int x,y,z;
    cin >>x>>y>>z;
    
    int ans = min({ f(y,z), f(x,z), f(x,y) });
    cout << ans << "\n";
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
