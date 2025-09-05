/*
 * Problem: C. Mex in the Grid
 * URL: https://codeforces.com/contest/2102/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
using pii=pair<int,int>;
void solve() {
    // Your solution here
    int n;cin >> n;
     for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << i*n + (i + j) % n<<" ";
            }
            cout<<"\n";
        }
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
