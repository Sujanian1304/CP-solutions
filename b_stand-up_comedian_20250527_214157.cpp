/*
 * Problem: B. Stand-up Comedian
 * URL: https://codeforces.com/contest/1792/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==0){cout<<"1\n";return;}
     int ans=a+min(b,c)*2+min(a+1,abs(b-c)+d);
     cout<<ans<<"\n";
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
