/*
 * Problem: D. Place of the Olympiad
 * URL: https://codeforces.com/contest/2091/problem/D
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int n, int m, int k, int L) {
    int per_row = (m / (L + 1)) * L + min(m % (L + 1), L);
    return n * per_row >= k;
}

void solve() {
    // Your solution here
    int n,m,k;cin>>n>>m>>k;
   int x=(k+n-1)/n;
   int f=m-x;
   int ans=(x+f)/(f+1);
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
