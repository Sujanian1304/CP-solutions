/*
 * Problem: F. Trulimero Trulicina
 * URL: https://codeforces.com/contest/2094/problem/F
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
     int n, m, k;
        cin >> n >> m >> k;
        int T = n * m; 
        vector<int> X(T);
        for (int t = 0; t < T; t++){
            X[t] = 1 + (t % k);
        }
        vector<vector<int>> g(n, vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                g[i][j] = X[i * m + j];
            }
        }
       
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << g[i][j] << " ";
            }
            cout << "\n";
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
