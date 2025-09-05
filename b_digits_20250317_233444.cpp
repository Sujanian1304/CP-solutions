/*
 * Problem: B. Digits
 * URL: https://codeforces.com/contest/2043/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,d;
    cin>>n>>d;
    vector<int> ans;
    ans.push_back(1);
    if(d%3==0||n>=3) ans.push_back(3);
    if(d==5) ans.push_back(5);
    
    
		
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
