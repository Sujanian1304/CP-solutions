/*
 * Problem: D - Escape Route
 * URL: https://atcoder.jp/contests/abc405/tasks/abc405_d
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
using pii=pair<int,int>;
void solve() {
    // Your solution here
   int H,W;cin>>H>>W;
    vector<string> g(H);
    for(int i=0;i<H;i++)cin>>g[i];
    const int INF=1e9;
    vector<vector<int>> d(H,vector<int>(W,INF)),dir(H,vector<int>(W,-1));
    queue<pair<int,int>> q;
    for(int i=0;i<H;i++)for(int j=0;j<W;j++)if(g[i][j]=='E'){d[i][j]=0;q.emplace(i,j);}
    int di[]={1,0,0,-1},dj[]={0,-1,1,0},ord[]={0,1,2,3};
    while(!q.empty()){
        auto [i,j]=q.front();q.pop();
        for(int k:ord){
            int ni=i+di[k],nj=j+dj[k];
            if(ni<0||ni>=H||nj<0||nj>=W||g[ni][nj]!='.'||d[ni][nj]!=INF)continue;
            d[ni][nj]=d[i][j]+1;
            dir[ni][nj]=(k+2)%4;
            q.emplace(ni,nj);
        }
    }
    char c[]="^>v<";
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++)cout<<(g[i][j]=='.'?c[dir[i][j]]:g[i][j]);
        cout<<"\n";
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
