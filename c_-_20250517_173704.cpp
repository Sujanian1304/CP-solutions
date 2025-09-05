/*
 * Problem: C - ~
 * URL: https://atcoder.jp/contests/abc406/tasks/abc406_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
   
    int N;
    cin >> N;
    vector<int> P(N+1);
    for(int i=1;i<=N;i++) cin>>P[i];

    vector<int> C; C.reserve(N);
    vector<int> type; type.reserve(N);

    int prevD = (P[1]<P[2]?1:-1);
    for(int i=2;i<N;i++){
        int curD = (P[i]<P[i+1]?1:-1);
        if(curD!=prevD){
            C.push_back(i);
            type.push_back(prevD);
        }
        prevD = curD;
    }

    int ans=0;
    int M=C.size();
    for(int k=0;k+1<M;k++){
        if(type[k]==1 && type[k+1]==-1){
            int p=C[k], v=C[k+1];
            int prv = (k?C[k-1]:0);
            int nxt = (k+2<M?C[k+2]:N);
            ans += (p-prv-1)*(nxt-v);
        }
    }

    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
