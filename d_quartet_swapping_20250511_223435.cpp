/*
 * Problem: D. Quartet Swapping
 * URL: https://codeforces.com/contest/2102/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
     int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n < 4) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << (i+1 == n ? '\n' : ' ');
            }
            return;
        }
        vector<int> odds, evens;
        odds.reserve((n+1)/2);
        evens.reserve(n/2);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)       
                odds.push_back(a[i]);
            else
                evens.push_back(a[i]);
        }
        sort(odds.begin(), odds.end());
        sort(evens.begin(), evens.end());
        int oi = 0, ei = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cout << odds[oi++];
            } else {
                cout << evens[ei++];
            }
            cout << (i+1 == n ? '\n' : ' ');
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
