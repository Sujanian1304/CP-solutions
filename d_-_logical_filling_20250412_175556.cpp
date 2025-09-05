/*
 * Problem: D - Logical Filling
 * URL: https://atcoder.jp/contests/abc401/tasks/abc401_d
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
     int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<int> existing_o;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'o') {
            existing_o.push_back(i);
        }
    }

    int fixed_o = existing_o.size();
    int required = K - fixed_o;

    if (required < 0) {
        for (char c : S) cout << (c == '?' ? '.' : c);
        cout << '\n';
        return ;
    }

    vector<bool> forbidden(N, false);
    for (int idx : existing_o) {
        if (idx - 1 >= 0) forbidden[idx - 1] = true;
        if (idx + 1 < N) forbidden[idx + 1] = true;
    }

    vector<int> C;
    for (int i = 0; i < N; ++i) {
        if (S[i] == '?' && !forbidden[i]) {
            C.push_back(i);
        }
    }

    int m = C.size();

    if (m == 0) {
        if (required != 0) {
            cout << "invalid\n";
        } else {
            for (char c : S) cout << (c == '?' ? '.' : c);
            cout << '\n';
        }
        return ;
    }

    vector<int> max_prefix(m, 0), max_suffix(m, 0);
    max_prefix[0] = 1;
    for (int j = 1; j < m; ++j) {
        if (C[j] - C[j - 1] == 1) {
            max_prefix[j] = (j >= 2 ? max_prefix[j - 2] : 0) + 1;
        } else {
            max_prefix[j] = max_prefix[j - 1] + 1;
        }
    }

    max_suffix[m - 1] = 1;
    for (int j = m - 2; j >= 0; --j) {
        if (C[j + 1] - C[j] == 1) {
            max_suffix[j] = (j + 2 < m ? max_suffix[j + 2] : 0) + 1;
        } else {
            max_suffix[j] = max_suffix[j + 1] + 1;
        }
    }

    int max_c = max_prefix[m - 1];
    if (required > max_c) {
        cout << "invalid\n";
        return ;
    }

    vector<char> T(S.begin(), S.end());
    for (int i = 0; i < N; ++i) {
        if (S[i] != '?') {
            T[i] = S[i];
        } else if (forbidden[i]) {
            T[i] = '.';
        }
    }

    for (int j = 0; j < m; ++j) {
        int pos = C[j];
        int left = j - 1 >= 0 ? max_prefix[j - 1] : 0;
        int right = j + 1 < m ? max_suffix[j + 1] : 0;
        int merged = ((j - 1 >= 0 && j + 1 < m && C[j + 1] - C[j - 1] == 1) ? max(left, right) : left + right);
        int max_c_without_j = merged;

        int left_j = j - 2 >= 0 ? max_prefix[j - 2] : 0;
        int right_j = j + 2 < m ? max_suffix[j + 2] : 0;
        int max_c_with_j = 1 + left_j + right_j;

        if (max_c_without_j < required) {
            T[pos] = 'o';
        } else if (max_c_with_j < required) {
            T[pos] = '.';
        } else {
            T[pos] = '?';
        }
    }

    for (char c : T) cout << c;
    cout << '\n';
    return ;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
