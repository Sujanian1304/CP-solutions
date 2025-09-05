/*
 * Problem: D. Flower Boy
 * URL: https://codeforces.com/contest/2106/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n, m;
        cin >> n >> m;
        vector<int>a(n+1),b(m+2);
        for (int i = 1; i <= n; i++) {
            cin >>a[i];
        }
        for (int i = 1; i <= m; i++) {
            cin >>b[i];
        }
        int inf = n + 1;
        vector<int> pref(m+1, inf);
        pref[0] = 0;
        int j = 1;
        for (int i = 1; i <= m; i++){
            while (j <= n && a[j] < b[i]) j++;
            if (j <= n) {
                pref[i] = j;
                j++;
            } else {
                pref[i] = inf;
            }
        }
        if (pref[m] <= n) {
            cout << 0 << "\n";
            return;
        }
        vector<int> suf(m+2, 0);
        suf[m+1] = n+1;
        j = n;
        for (int i = m; i >= 1; i--){
            while (j >= 1 && a[j] < b[i]) j--;
            if (j >= 1) {
                suf[i] = j;
                j--;
            } else {
                suf[i] = 0;
            }
        }
        int ans = 1e18;
        for (int i = 1; i <= m; i++){
            if (pref[i-1] < suf[i+1]){
                ans = min(ans, b[i]);
            }
        }

        if (ans == 1e18) {
            cout << -1 << "\n";
        } else {
            cout << ans << "\n";
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
