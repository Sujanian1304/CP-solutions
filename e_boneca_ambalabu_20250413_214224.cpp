/*
 * Problem: E. Boneca Ambalabu
 * URL: https://codeforces.com/contest/2094/problem/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

void solve() {
    // Your solution here
    int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
         int B = 30;
        vector<int> cnt(B, 0);
        for (int i = 0; i < n; i++){
            for (int b = 0; b < B; b++){
                if(a[i] & (1u << b))
                    cnt[b]++;
            }
        }
        
         int ans = 0;
        for (int i = 0; i < n; i++){
            int sum = 0;
            for (int b = 0; b < B; b++){
                if(a[i] & (1u << b))
                    sum += (1ull << b) * (n - cnt[b]);
                else
                    sum += (1ull << b) * (cnt[b]);
            }
            ans = max(ans, sum);
        }
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
