/*
 * Problem: C. Two Colors
 * URL: https://codeforces.com/contest/2075/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

 #include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 1; i < n; ++i) {
        int seg1 = i, seg2 = n - i;

        // Count elements >= seg1 and seg2
        auto it1 = lower_bound(a.begin(), a.end(), seg1);
        int cnt1 = a.end() - it1;

        auto it2 = lower_bound(a.begin(), a.end(), seg2);
        int cnt2 = a.end() - it2;

        // Count elements >= max(seg1, seg2) (overlap cases)
        int max_seg = max(seg1, seg2);
        auto it_overlap = lower_bound(a.begin(), a.end(), max_seg);
        int overlap_cnt = a.end() - it_overlap;

        ans += cnt1 * cnt2 - overlap_cnt;
    }
    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
