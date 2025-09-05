/*
 * Problem: C. Wonderful City
 * URL: https://codeforces.com/contest/2096/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll= long long;
const ll INF = (1LL<<60);
void solve() {
    // Your solution here
    int n;
        cin >> n;
        vector<vector<ll>> h(n, vector<ll>(n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> h[i][j];

        vector<ll> ca(n), cb(n);
        for(int i = 0; i < n; i++) cin >> ca[i];
        for(int j = 0; j < n; j++) cin >> cb[j];
        vector<array<bool,3>> f_col(n-1), f_row(n-1);
        for(int j = 0; j+1 < n; j++){
            auto &F = f_col[j];
            F = {false,false,false};
            for(int i = 0; i < n; i++){
                ll d = h[i][j] - h[i][j+1];
                if (d >= -1 && d <= 1) {
                    F[d+1] = true;
                }
            }
        }
        for(int i = 0; i+1 < n; i++){
            auto &F = f_row[i];
            F = {false,false,false};
            for(int j = 0; j < n; j++){
                ll d = h[i][j] - h[i+1][j];
                if (d >= -1 && d <= 1) {
                    F[d+1] = true;
                }
            }
        }

        auto solve = [&](auto &forbid, vector<ll> &cost)-> ll {
            vector<array<ll,2>> dp(n, {INF,INF});

            dp[0][0] = 0;
            dp[0][1] = cost[0];
            for(int j = 0; j+1 < n; j++){
                for(int s = 0; s < 2; s++){
                    if (dp[j][s] == INF) continue;
                    for(int t = 0; t < 2; t++){
                        int d = t - s; 
                        if (!forbid[j][d+1]) {
                            dp[j+1][t] = min(dp[j+1][t], dp[j][s] + ll(t)*cost[j+1]);
                        }
                    }
                }
            }
            return min(dp[n-1][0], dp[n-1][1]);
        };

        ll ans_cols = solve(f_col, cb);
        ll ans_rows = solve(f_row, ca);
        ll ans = min(ans_cols, INF) + min(ans_rows, INF);
        if (ans_cols >= INF/2 || ans_rows >= INF/2)
            cout << "-1\n";
        else
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
