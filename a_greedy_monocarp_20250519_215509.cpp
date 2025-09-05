/*
 * Problem: A. Greedy Monocarp
 * URL: https://codeforces.com/contest/2042/problem/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);vector<int> p(n);
    for(int i=0;i<n;i++) {cin>>a[i];}
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++) {if(i==0) p[i]=a[i];else p[i]=a[i]+p[i-1];}
    int x=lower_bound(p.begin(),p.end(),m)-p.begin();
    if(x==n){cout<<m-p[n-1]<<"\n";return;}
    if(p[x]==m){cout<<"0\n";return;}
    if(p[x]>m){
		cout<<m-p[x-1]<<"\n";}
    
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
