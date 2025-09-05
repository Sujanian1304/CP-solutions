/*
 * Problem: A. Binary Matrix
 * URL: https://codeforces.com/contest/2082/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 512 MB
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<int> row_xor(n, 0), col_xor(m, 0);

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            matrix[i][j] = c - '0';
            row_xor[i] ^= matrix[i][j];
            col_xor[j] ^= matrix[i][j];
        }
    }

   
    int row_mismatch = 0, col_mismatch = 0;
    for (int i = 0; i < n; ++i) {
        if (row_xor[i] == 1) row_mismatch++;
    }
    for (int j = 0; j < m; ++j) {
        if (col_xor[j] == 1) col_mismatch++;
    }

    
    int changes = 0;
    if (row_mismatch == col_mismatch) {
        changes = row_mismatch; 
    } else if (row_mismatch > col_mismatch) {
        changes = col_mismatch + (row_mismatch - col_mismatch); 
    } else {
        changes = row_mismatch + (col_mismatch - row_mismatch); 
    }

    cout << changes << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
