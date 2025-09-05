/*
 * Problem: C. Neo's Escape
 * URL: https://codeforces.com/contest/2108/problem/C
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
        map<int, vector<int>> mp;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        int cnt = 0;
        vector<int> b;
        for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
            auto& cur = it->second;
            sort(cur.begin(), cur.end());
            if (cur.empty()) continue;
          
            vector<vector<int>> blocks;
            vector<int> current_block = {cur[0]};
            for (int i = 1; i < cur.size(); ++i) {
                if (cur[i] == current_block.back() + 1) {
                    current_block.push_back(cur[i]);
                } else {
                    blocks.push_back(current_block);
                    current_block = {cur[i]};
                }
            }
            blocks.push_back(current_block);
            
            if (b.empty()) {
                cnt += blocks.size();
            } else {
                sort(b.begin(), b.end());
                for (const auto& block : blocks) {
                    bool adjacent = false;
                    for (int pos : block) {
                        if (binary_search(b.begin(), b.end(), pos - 1) || binary_search(b.begin(), b.end(), pos + 1)) {
                            adjacent = true;
                            break;
                        }
                    }
                    if (!adjacent) {
                        cnt++;
                    }
                }
            }
            b.insert(b.end(), cur.begin(), cur.end());
            sort(b.begin(), b.end());
        }
        cout << cnt << "\n";
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
