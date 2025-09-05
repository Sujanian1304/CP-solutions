/*
 * Problem: B. Wonderful Gloves
 * URL: https://codeforces.com/contest/2096/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll=long long;
void solve() {
    // Your solution here
     int n, k;
        cin >> n >> k;
        vector<ll> L(n), R(n);
        for (int i = 0; i < n; i++) cin >> L[i];
        for (int i = 0; i < n; i++) cin >> R[i];
        int possible_colors = 0;
        vector<ll> mi(n), wi; 
        for (int i = 0; i < n; i++) {
            mi[i] = max(L[i], R[i]);
            ll w = min(L[i], R[i]);
            wi.push_back(w);
            if (w > 0) possible_colors++;
        }
       
        if (possible_colors < k) {
            cout << -1 << "\n";
            return;
        }
        ll sum= 0;
        for (ll v : mi) sum+= v;

        sort(wi.begin(), wi.end(), greater<ll>());
        for (int i = 0; i < k-1; i++) {
            sum+= wi[i];
        }
        cout << (sum+ 1) << "\n";
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
