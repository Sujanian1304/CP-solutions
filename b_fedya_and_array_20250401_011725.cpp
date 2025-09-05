/*
 * Problem: B. Fedya and Array
 * URL: https://codeforces.com/problemset/problem/1793/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    cout<<2*(n-m)<<"\n";
   for(int i=m;i<=n;i++){
	   cout<<i<<" ";
   }
   for(int i=n-1;i>m;i--){
	   cout<<i<<" ";
   }
   cout<<"\n";
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
