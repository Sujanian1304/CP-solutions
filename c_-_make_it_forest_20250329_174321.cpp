/*
 * Problem: C - Make it Forest
 * URL: https://atcoder.jp/contests/abc399/tasks/abc399_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
 int n,m;
     vector<vector<int>> g;
     vector<int> col;
     vector<int> par;
     int  cnt=0;
    void dfs(int node){
        col[node]=2;
        for(auto& v:g[node]){
            if(par[node]==v) continue;
            if(col[v]==1){
               par[v]=node;
                dfs(v);
            }else if(col[v]==2){
                cnt++; 
            }
        }
      col[node]=3;
    }
void solve() {
    // Your solution here
     cin >> n>>m; 
     g.resize(n+1);
     par.assign(n+1,0);
     for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
     }
     col.assign(n+1,1);
     for(int i=1;i<n;i++){
        if(col[i]==1){
            dfs(i);
        }
     }
     cout<<cnt;
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
