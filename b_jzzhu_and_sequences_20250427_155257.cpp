/*
 * Problem: B. Jzzhu and Sequences
 * URL: https://codeforces.com/problemset/problem/450/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;

void solve() {
    // Your solution here
    int x,y;cin>>x>>y;
    int n;cin>>n;
    vector<int>a(7);
    a[1]=x;a[2]=y;
    for(int i=3;i<=6;i++) a[i]=a[i-1]-a[i-2];
    n=n%6;
    if(n==0) n=6;
    int z=a[n];
    cout<<((z%mod)+mod)%mod<<"\n";
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
