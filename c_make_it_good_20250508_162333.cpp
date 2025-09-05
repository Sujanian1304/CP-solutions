/*
 * Problem: C. Make It Good
 * URL: https://codeforces.com/problemset/problem/1385/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    int i=n-1;
    while(i>0&&a[i-1]>=a[i]){i--;}
    while(i>0&&a[i-1]<=a[i]){i--;}
	cout<<i<<"\n";
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
