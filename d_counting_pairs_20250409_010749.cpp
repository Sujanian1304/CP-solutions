/*
 * Problem: D. Counting Pairs
 * URL: https://codeforces.com/contest/2051/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        vector<long long> arr(n);
        long long total_sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            total_sum += arr[i];
        }
        long long L = total_sum - y;
        long long R = total_sum - x;
        sort(arr.begin(), arr.end());
        long long cnt = 0;
        for (int i = 0; i < n; ++i) {
            long long current = arr[i];
            long long low = L - current;
            long long high = R - current;
            auto left = lower_bound(arr.begin() + i + 1, arr.end(), low)-arr.begin();
            auto right = upper_bound(arr.begin() + i + 1, arr.end(), high)-arr.begin();
            cnt += right - left;
        }
        cout << cnt << "\n";
    }
    return 0;
}
