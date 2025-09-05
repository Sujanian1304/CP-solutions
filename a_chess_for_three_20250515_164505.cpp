/*
 * Problem: A. Chess For Three
 * URL: https://codeforces.com/contest/1973/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    vector<int> a(3);int sum=0;
    for(int i=0;i<3;i++) {cin>>a[i];sum+=a[i];}
   // sort(a.begin(),a.end());
     //cout<<a[0]<<a[1]<<a[2];
    if(sum%2){cout<<"-1\n";return;}
    cout<<((a[2]>a[1]+a[0])?a[0]+a[1]:sum/2)<<"\n";
				 
    
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
