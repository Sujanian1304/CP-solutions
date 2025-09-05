/*
 * Problem: A. Division?
 * URL: https://codeforces.com/contest/1669/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n<=1399) cout<<"Division 4\n";
    else if(n>=1400&&n<=1599) cout<<"Division 3\n";
     else if(n>=1600&&n<=1899) cout<<"Division 2\n";
      else if(n>=1900) cout<<"Division 1\n";
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
