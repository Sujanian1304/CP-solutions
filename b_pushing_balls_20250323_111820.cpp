/*
 * Problem: B. Pushing Balls
 * URL: https://codeforces.com/contest/2090/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;
    cin>>n>>m;
    vector<string> s;
    for(int i=0;i<n;i++){
		string k;cin>>k;
		s.push_back(k);
	}
    int arr[n][m];
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			arr[i][j]=s[i][j]-48;
		}
	}
	 bool valid = true;
    for (int i = 0; i < n && valid; i++) {
        for (int j = 0; j < m && valid; j++) {
            if (arr[i][j] == 0) continue;

            bool row_valid = true;
            for (int k = 0; k < j; k++) {
                if (arr[i][k] != 1) {
                    row_valid = false;
                    //cout<<i<<k;
                    break;
                }
            }

            bool col_valid = true;
            for (int k = 0; k < i; k++) {
                if (arr[k][j] != 1) {
                    col_valid = false;
                    //cout<<i<<k;
                    break;
                }
            }

            if (!row_valid && !col_valid) valid = false;
        }
    }

    cout << (valid ? "YES\n" : "NO\n");

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
