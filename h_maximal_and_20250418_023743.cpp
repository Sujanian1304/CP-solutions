/*
 * Problem: H. Maximal AND
 * URL: https://codeforces.com/contest/1669/problem/H
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    
    int ans = 0;
    for (int b = 30; b >= 0; --b) {
        int cnt = 0;
        for (int x : arr) {
            if (x & (1 << b)) 
                cnt++;
        }
        int need = n - cnt;
        if (need <= m) {
            ans |= (1 << b);
            m -= need;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
