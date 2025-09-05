/*
 * Problem: E. Min Max MEX
 * URL: https://codeforces.com/contest/2093/problem/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
      int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    // Binary search for maximum x such that we can have k subarrays with MEX >= x
    int left = 0, right = n, best_x = 0;
    while (left <= right) {
        int mid = (left + right) / 2;

        int needed = mid;
        int count = 0;
        for (int i = 0; i < mid; i++) {
            if (freq[i] == 0) {
                count = -1;  // Can't make MEX at least mid
                break;
            }
            count += 1;
        }

        if (count >= k) {
            best_x = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Now split the array into k subarrays with MEX >= best_x
    vector<vector<int>> result;
    unordered_map<int, int> count_map;
    int l = 0;
    int unique_needed = best_x;
    int current_unique = 0;
    unordered_map<int, int> temp_count;

    for (int i = 0; i < n; i++) {
        temp_count[a[i]]++;
        if (a[i] < best_x && temp_count[a[i]] == 1)
            current_unique++;

        if (current_unique == best_x && (int)result.size() < k - 1) {
            // Make a cut here
            result.push_back(vector<int>(a.begin() + l, a.begin() + i + 1));
            l = i + 1;
            temp_count.clear();
            current_unique = 0;
        }
    }

    // Last subarray
    result.push_back(vector<int>(a.begin() + l, a.end()));

    // Output
    cout << best_x << "\n";
    
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
