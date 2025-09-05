/*
 * Problem: C - Dislike Foods
 * URL: https://atcoder.jp/contests/abc402/tasks/abc402_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;
    cin >>n>>m;
    vector<vector<int>> d(m);
    for(int i = 0; i <m; i++){
        int k;
        cin >>k;
        d[i].resize(k);
        for(int j=0;j<k; j++){
            cin >> d[i][j];
        }
    }
    vector<int> B(n);
    for(int i = 0; i <n; i++){
        cin >> B[i];
    }
    vector<int> pos(n+1);
    for(int i = 0; i <n; i++){
        pos[B[i]] = i + 1;
    }
    vector<int> freq(n+2, 0);
    for(int i = 0; i <m; i++){
        int t = 0;
        for(int a : d[i]){
            t = max(t, pos[a]);
        }
        freq[t]++;
    }
    vector<int> ans(n+1, 0);
    for(int i = 1; i <=n; i++){
        ans[i] = ans[i-1] + freq[i];
    }
    for(int i = 1; i <=n; i++){
        cout << ans[i] << '\n';
    }
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
