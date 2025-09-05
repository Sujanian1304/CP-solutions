/*
 * Problem: E. 2-Letter Strings
 * URL: https://codeforces.com/contest/1669/problem/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    // Your solution here
      int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_map<char, ll> cnt1, cnt2;
    unordered_map<string, ll> cnt12;
    cnt1.reserve(n);
    cnt2.reserve(n);
    cnt12.reserve(n);

    for (auto &s : arr) {
        cnt1[s[0]]++;
        cnt2[s[1]]++;
        cnt12[s]++;
    }
    auto choose2 = [&](ll x) {
        return x * (x - 1) / 2;
    };

    ll a = 0;
    for (auto &kv : cnt1) {
        a += choose2(kv.second);
    }

    ll b = 0;
    for (auto &kv : cnt2) {
        b+= choose2(kv.second);
    }

    ll c = 0;
    for (auto &kv : cnt12) {
        c+= choose2(kv.second);
    }
    ll ans = a + b - 2 * c;
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
