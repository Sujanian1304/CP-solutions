/*
 * Problem: B. Collecting Game
 * URL: https://codeforces.com/problemset/problem/1904/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int arr[n];
    vector<pair<int, int>> mp;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp.push_back({arr[i], i});
    }
    
    sort(arr, arr + n);
    sort(mp.begin(), mp.end());
    
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }
    
    vector<int> ans(n, 0);
    int x = 0;  
    
    for (int i = 0; i < n; i++) {
        x = max(x, i);  
        while (x + 1 < n && prefix[x + 1] >= arr[x + 1]) {
            x++;
        }
        ans[mp[i].second] = x;
    }
    
    for (auto& v : ans) {
        cout << v << " ";
    }
    cout << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
