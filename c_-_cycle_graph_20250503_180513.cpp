/*
 * Problem: C - Cycle Graph?
 * URL: https://atcoder.jp/contests/abc404/tasks/abc404_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<vector<int>> adj;
vector<bool> seen;

void dfs(int u) {
    seen[u] = true;
    for (int v : adj[u]) {
        if (!seen[v]) dfs(v);
    }
}

void solve() {
    // Your solution here
    
    cin>>n>>m;
    adj.assign(n+1, {});
    seen.assign(n+1, false);

    vector<set<int>> f(n+1);
    for(int i=0;i<m;i++){
        int A,B;
        cin>>A>>B;
        if (A==B||f[A].count(B)){
            cout << "No\n";
            return;
        }
        f[A].insert(B);
        f[B].insert(A);
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    if (m!=n){
        cout << "No\n";
        return;
    }
    for (int u=1;u<=n;u++) {
        if ((int)adj[u].size()!= 2){
            cout<<"No\n";
            return;
        }
    }
    dfs(1);
    for (int u=1;u<=n;u++) {
        if (!seen[u]) {
            
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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
