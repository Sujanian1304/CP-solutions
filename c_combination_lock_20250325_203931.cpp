/*
 * Problem: C. Combination Lock
 * URL: https://codeforces.com/contest/2091/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n%2==0) cout<<"-1\n";
    else{
		for (int i = 1; i <= n; ++i) {
        cout << (2 * (i - 1) % n) + 1 << " ";
    }
    cout << "\n";
}
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
