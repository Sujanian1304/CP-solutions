/*
 * Problem: Front or Back
 * URL: https://www.codechef.com/START184C/problems/FRONTBACK
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 998244353;

int add(int a,int b){ a+=b; if(a>=MOD) a-=MOD; return a;}
int mul(int a,int b){ return int((ll)a*b % MOD); }

void solve() {
    // Your solution here
     int n;  cin >>n;
        vector<int>A(n+1);
        for (int i=1;i<=n; i++){
            cin>>A[i];
        }
        vector<vector<int>> adj(n+n+1);
        for (int i=1;i<=n;i++){
            int p1 = A[i] + 1;
            if (1<=p1&&p1<=n)
                adj[i].push_back(n+ p1),
                adj[n+ p1].push_back(i);

            int p2 =n-A[i];
            if (1<=p2&&p2<=n&&p2!=p1)
                adj[i].push_back(n+ p2),
                adj[n+p2].push_back(i);
        }

        vector<bool> vis(n+n+1,false);
        ll ans=1;

        for (int i=1;i<=n;i++){
            if (vis[i]) continue;
            queue<int>q;
            q.push(i);
            vis[i] = true;
            int cntL = 0, cntR = 0, e_sum = 0;
            vector<int> comp_nodes;

            while (!q.empty()){
                int u = q.front(); q.pop();
                comp_nodes.push_back(u);
                if (u<=n)cntL++;
                else cntR++;
                e_sum+=adj[u].size();

                for (int v : adj[u]) {
                    if (!vis[v]) {
                        vis[v]= true;
                        q.push(v);
                    }
                }
            }

            int e=e_sum/2;
            int nodes=cntL+cntR;
            if (cntR<cntL) {
                ans=0;
                break;
            }
            if (e==nodes) {
                ans=mul(ans,2);
            }
        }
        cout <<ans%MOD<<"\n";
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

