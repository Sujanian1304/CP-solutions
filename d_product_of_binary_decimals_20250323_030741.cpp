/*
 * Problem: D. Product of Binary Decimals
 * URL: https://codeforces.com/problemset/problem/1950/D
 * Time Limit: 3.0 seconds
 * Memory Limit: 256 MB
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> arr;

bool check(int n) {
    if (n == 1) return true;
        bool num = 0;
        int size = arr.size();
        for (int i = 0; i < size; i++) {
            if (n % arr[i] == 0) {
                num|=check(n/arr[i]);
                
            }
		}
       return num; 
}

void solve() {
    int n;
    cin >> n; 
    
    if (check(n)) {
        cout << "Yes\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 2; i < 1e5 + 1; i++) {
        int x = i;
        bool flag = true;
        while (x != 0) {
            if (x % 10 > 1) { 
                flag = false; 
                break; 
            }
            x /= 10;
        }
        if (flag) arr.push_back(i);
    }

    int t;
    cin >> t; // Read number of test cases
    
    while (t--) {
        solve();
    }

    return 0;
}
