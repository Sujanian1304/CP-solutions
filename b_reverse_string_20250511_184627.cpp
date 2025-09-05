/*
 * Problem: B. Reverse String
 * URL: https://codeforces.com/problemset/problem/1553/B
 * Time Limit: 3.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
     
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    bool possible = false;
    for (int i = 0; i < n && !possible; i++) {
        for (int j = i; j < n; j++) {
            int len1 = j - i + 1;
            if (len1 > m) break;        
            bool ok = true;
            for (int k = 0; k < len1; k++) {
                if (s[i + k] != t[k]) {
                    ok = false;
                    break;
                }
            }
            if (!ok) continue;
            int rem = m - len1;
            if (rem > j) continue;   
            for (int k = 1; k <= rem; k++) {
                if (s[j - k] != t[len1 + (k - 1)]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                possible = true;
                break;
            }
        }
    }

    cout << (possible ? "YES\n" : "NO\n");
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
