/*
 * Problem: E. Wolf
 * URL: https://codeforces.com/contest/2106/problem/E
 * Time Limit: 4.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> p(n+1), pos(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }
        while (q--) {
            int l, r, x;
            cin >> l >> r >> x;
            int px = pos[x];
            if (px < l || px > r) {
                cout << -1 << '\n';
                continue;
            }
            int cnt = 0;
            int lo = l, hi = r;
            while (lo <= hi) {
                int m = (lo + hi) >> 1;
                if (m == px) break;
                if (m < px) {
                    // need p[m] < x
                    if (p[m] > x) cnt++;
                    lo = m + 1;
                } else {
                    // m > px, need p[m] > x
                    if (p[m] < x) cnt++;
                    hi = m - 1;
                }
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}

