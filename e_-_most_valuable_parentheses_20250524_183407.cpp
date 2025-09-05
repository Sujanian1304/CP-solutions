/*
 * Problem: E - Most Valuable Parentheses
 * URL: https://atcoder.jp/contests/abc407/tasks/abc407_e
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    // Your solution here
     int n;
        cin>>n;
        vector<ll> a(2*n);
        ll total=0;
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            total+=a[i];
        }
        priority_queue<ll> pq;
        for(int i=1;i<=2*n;i++){
            pq.push(a[i-1]);
            int cap = i/2;               
            if((int)pq.size() > cap){
                pq.pop();
            }
        }
        ll s_c=0;
        while(!pq.empty()){
            s_c+=pq.top();
            pq.pop();
        }
        cout<<(total-s_c)<<"\n";
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
